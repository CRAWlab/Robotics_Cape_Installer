/**
 * \example rc_balance.c
 * \example rc_benchmark_algebra.c
 * \example rc_bind_dsm.c
 * \example rc_blink.c
 * \example rc_calibrate_accel.c
 * \example rc_calibrate_gyro.c
 * \example rc_calibrate_mag.c
 * \example rc_cpu.c
 * \example rc_kill.c
 * \example rc_model.c
 * \example rc_test_adc.c
 * \example rc_test_algebra.c
 * \example rc_test_bmp.c
 * \example rc_test_buttons.c
 * \example rc_test_dmp.c
 * \example rc_test_dmp_tap.c
 * \example rc_test_encoders_eqep.c
 * \example rc_test_encoders_pru.c
 * \example rc_test_escs.c
 * \example rc_test_filters.c
 * \example rc_test_led.c
 * \example rc_test_matrix.c
 * \example rc_test_mavlink.c
 * \example rc_test_motors.c
 * \example rc_test_mpu.c
 * \example rc_test_matrix.c
 * \example rc_test_polynomial.c
 * \example rc_test_pthread.c
 * \example rc_test_servo.c
 * \example rc_test_time.c
 * \example rc_test_vector.c
 * \example rc_uart_loopback.c
 * \example rc_version.c
 */

/**
 * @defgroup   RoboticsCape_All
 */

/**
 * @defgroup   Math
 *
 * @brief      C routines for linear algebra, quaternions, and discrete time
 *             filters
 */

/**
 * @defgroup   IO
 *
 * @brief      C interface for Linux userspace IO
 */

/**
 * @defgroup   Mavlink
 *
 * @brief      Mavlink Simplified
 */

/**
 * @defgroup   Quadrature_Encoder
 *
 * @brief      Functions for reading quadrature encoders.
 *
 *             Channels 1-3 on the Robotics Cape and BeagleBone Blue are counted
 *             in hardware by the eQEP modules and are extremely resistant to
 *             skipping steps and use negligible power. They can also be used
 *             without root permissions. If necessary, encoder channel 4 on the
 *             Robotics Cape and BeagleBone Blue can be used which uses PRU0 to
 *             count steps so the ARM core doesn't have to do anything. It is
 *             less robust than the dedicated hardware counters and requires
 *             root permissions to use, please use channels 1-3 first.
 */

