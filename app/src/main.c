#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/logging/log.h>

#define LED_NODE DT_ALIAS(led3)
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED_NODE, gpios);

LOG_MODULE_REGISTER(main, LOG_LEVEL_INF);

int main(void)
{
    bool led_state = false;

    if (!gpio_is_ready_dt(&led))
        return 0;

    if (gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE) < 0)
        return 0;

    while (1)
    {
        if (gpio_pin_toggle_dt(&led) < 0)
            return 0;

        LOG_INF("Led state is %s", led_state ? "ON" : "OFF");

        led_state = !led_state;

        k_msleep(1000);
    }
}