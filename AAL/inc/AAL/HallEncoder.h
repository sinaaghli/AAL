#ifndef HALL_ENCODER_H_
#define HALL_ENCODER_H_

#include "AAL.h"

template <class PORT, class PIN>
class HallEncoder {
public:
	HallEncoder(PORT H0_GPIO_PORT, PIN H0_GPIO_PIN,
				PORT H1_GPIO_PORT, PIN H1_GPIO_PIN,
				PORT H2_GPIO_PORT, PIN H2_GPIO_PIN);
	~HallEncoder();
	int GetHallState(int in);
	void dummy(int a);

private:
	unsigned long int tick_count_;
	PORT H0_GPIO_PORT_;
	PIN H0_GPIO_PIN_;
	PORT H1_GPIO_PORT_;
	PIN H1_GPIO_PIN_;
	PORT H2_GPIO_PORT_;
	PIN H2_GPIO_PIN_;

};

//////////////////////////////////////////////////////////

template <class PORT, class PIN>
HallEncoder<PORT,PIN>::HallEncoder(PORT H0_GPIO_PORT, PIN H0_GPIO_PIN,
		PORT H1_GPIO_PORT, PIN H1_GPIO_PIN,
		PORT H2_GPIO_PORT, PIN H2_GPIO_PIN) {
	H0_GPIO_PORT_ = H0_GPIO_PORT;
	H0_GPIO_PIN_ = H0_GPIO_PIN;
	H1_GPIO_PORT_ = H1_GPIO_PORT;
	H1_GPIO_PIN_ = H1_GPIO_PIN;
	H2_GPIO_PORT_ = H2_GPIO_PORT;
	H2_GPIO_PIN_ = H2_GPIO_PIN;
}

template <class PORT, class PIN>
HallEncoder<PORT,PIN>::~HallEncoder() {
}

template <class PORT, class PIN>
uint8_t HallEncoder<PORT,PIN>::GetHallState(int in) {
	uint8_t hall_state = 0;

	return in;
}

template <class PORT, class PIN>
void HallEncoder<PORT,PIN>::dummy(int a) {

}

#endif // HALL_ENCODER_H_
