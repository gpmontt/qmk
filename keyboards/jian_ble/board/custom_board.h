#ifndef CUSTOM_BOARD_H
#define CUSTOM_BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#define GPIO(port, pin) ((port << 6) | pin)

#define PIN1 GPIO(0,6)
#define PIN2 GPIO(0,8)
#define PIN5 GPIO(0,15)
#define PIN6 GPIO(0,17)
#define PIN7 GPIO(0,20)
#define PIN8 GPIO(0,13)
#define PIN9 GPIO(0,24)
#define PIN10 GPIO(0,9)
#define PIN11 GPIO(0,10)
#define PIN12 GPIO(1,6)

#define PIN13 GPIO(1,11)
#define PIN14 GPIO(0,28)
#define PIN15 GPIO(0,3)
#define PIN16 GPIO(1,13)
#define PIN17 GPIO(0,2)
#define PIN18 GPIO(0,29)
#define PIN19 GPIO(0,31)
#define PIN20 GPIO(0,30)

#define LED_PIN GPIO(1,10)
#define RESET_PIN GPIO(1,18)
#define SWO_PIN GPIO(1,00)
#define DFU_PIN GPIO(1,02)

//#define NRF_LOG_ENABLED 0
//#define NRF_LOG_BACKEND_SERIAL_USES_UART 0
//#define NRF_LOG_BACKEND_SERIAL_UART_TX_PIN 5
#define NRF_LOG_BACKEND_UART_TX_PIN 8
//#define DEBUG
// Low frequency clock source to be used by the SoftDevice
#ifdef S210
// #define NRF_CLOCK_LFCLKSRC      NRF_CLOCK_LFCLKSRC_XTAL_20_PPM
#else

/*
#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_RC,            \
                                 .rc_ctiv       = 16,                                \
                                 .rc_temp_ctiv  = 2,                                \
                                 .xtal_accuracy = 0}
*/

// using E73 internal oscillator (if there's no external crystal soldered)
#define NRF_CLOCK_LFCLKSRC      {.source        = 0,            \
                                 .rc_ctiv       = 16,                                \
                                 .rc_temp_ctiv  = 2,                                \
                                 .xtal_accuracy = 7}

#endif


#ifdef __cplusplus
}
#endif

#endif // CUSTOM_BOARD_H
