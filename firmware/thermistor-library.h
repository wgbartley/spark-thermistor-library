#include <math.h>
#include "application.h"

class Thermistor {
	private:
		int _pin;
		int _resistor;
		int _temp_raw;
		float _temp_k;
		float _temp_c;
		float _temp_f;

	public:
		Thermistor(int pin, int resistor);
		void begin(void);
		float getTemp(bool smooth=false);
		float getTempF(bool smooth=false);
		float getTempC(bool smooth=false);
		float getTempK(bool smooth=false);
		int getTempRaw(bool smooth=false);
};
