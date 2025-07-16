
#ifndef common_h
#define common_h


#define PLL_SYS_POSTDIV1 6
#define PLL_SYS_POSTDIV2 1
#define PLL_SYS_VCO_FREQ_HZ (1500 * MHZ)

#define PLL_USB_POSTDIV1 5
#define PLL_USB_POSTDIV2 5
#define PLL_USB_VCO_FREQ_HZ (1200 * MHZ)


#define FAMILY_RP2040


#define PIN_GPS_TX  16
#define PIN_GPS_RX  17
#define PIN_PPS     18

#define GPS_UART        uart0
// Initial baud is used to send configuration commands to rebaud to 115200
#define GPS_UART_INITIAL_BAUD 9600
#define GPS_UART_BAUD   115200 // GPS config commands are hardcoded, so if this is changed those need to also be changed

//TODO: Not sure this is working?
#define  PICO_STDIO_USB_ENABLE_RESET_VIA_BAUD_RATE 1


// Uncomment to enable NTP packet debug output
//#define NTP_PACKET_DEBUG


// Uncomment to enable full NMEA output
//#define NMEA_DEBUG

//uncomment if the 12 mhz crystal has been replaced with a 10 mhz reference.
// (better idea: synthesize a 12 mhz reference from a 10 mhz reference)
//#define REF_CLOCK_10MHZ









#endif
