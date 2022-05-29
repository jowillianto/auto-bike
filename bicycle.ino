class Motor {
	public:
		Motor(int digital_pin1, int digital_pin2, int analog_pin) {

		}
		void forward(const int& power) {

		}
		void backward(const int& power) {

		}
		void stop() {

		}
	private:
		int _dig_pin1;
		int _dig_pin2;
		int _ana_pin;
};

class Accelerometer {
	public:
		Accelerometer(int analog_pin1, int analog_pin2, int analog_pin3, float gravity) {

		}
		void read(float reading[3]) {

		}
		float orientation() {

		}
	private:
		int _pin1;
		int _pin2;
		int _pin3;
};

class Button {
	public:
		Button(int pin_number) {

		}
		bool clicked() {

		}
	private:
		int _pin;
};

void setup() {

}

void loop() {

}