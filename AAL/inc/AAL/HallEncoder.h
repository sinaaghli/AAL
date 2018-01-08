#ifndef HALL_ENCODER_HPP__
#define HALL_ENCODER_HPP__

#include <stdint.h>

class HallEncoder
{

public:
	HallEncoder(uint16_t H0_GPIO_PIN,uint16_t H1_GPIO_PIN,uint16_t H2_GPIO_PIN);
	~HallEncoder();
	int somethingstupid(int in);
	void dummy(int a);

private:
	unsigned long int tick_count;
};

#endif // HALL_ENCODER_H__
