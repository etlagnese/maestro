#ifndef maestro_h
#define maestro_h

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>

class maestro{
	private:
	int fd;
	public: 
	//initializers
	int init(const char * device);
	//setters
	int config();
	int setMultipleTargets(unsigned char target_num, unsigned char low_channel, unsigned short targets[12]);
	int setSpeed(unsigned char channel, unsigned short speed);
	int setAcceleration(unsigned char channel, 	unsigned short ramp);
	int setTarget(unsigned char channel, unsigned short target);
	//getters
	int getPosition(unsigned char channel);
	int getError();
	//contructor
	maestro();
	//destructor
	~maestro();
};

#endif


