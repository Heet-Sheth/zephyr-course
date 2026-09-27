#ifndef MY_SENSOR_LED_SENSOR_H_
#define MY_SENSOR_LED_SENSOR_H_

#include <zephyr/device.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /**
     * @brief Homework Task 2: Custom API extension
     */
    int led_sensor_set_custom_param(const struct device *dev, int32_t param);

#ifdef __cplusplus
}
#endif

#endif /* MY_SENSOR_LED_SENSOR_H_ */