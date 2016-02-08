# arduino_wifi
http://room-15.github.io/blog/2015/03/26/esp8266-at-command-reference/#AT+CWMODE
https://jsfiddle.net/nm00b377/
nem árt átírni a SoftwareSerial.h-ban az _SS_MAX_RX_BUFF - ot 64-ről 256-ra
~                                                                                 



Success with AT+UART_DEF=9600,8,1,0,0 (and AT+UART=9600,8,1,0,0).




AT Commands

The first AT command you will want to try is:
AT+GMR
it will output the firmware revision number similar to:
0018000902-AI03.
000902 means firmware version 0.9.2, 0018 is the version level of the AT command support.

Then, you may want to list the Access Points that are visible from your ESP module:

Set Wifi mode to both Access Point and STAtion:
AT+CWMODE=3
List Access Points:
AT+CWLAP
And connect to one of the listed APs:

Join an Access Point:
AT+CWJAP=“SSID”,“password”
Alternate Firmware loading
