#include "maestro.h"

int main(){
	maestro Arm;
	Arm.init("/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00207061-if00");

	return 0;
}
