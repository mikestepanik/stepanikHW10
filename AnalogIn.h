/*
 * file name: AnalogIn.h
 * Created by Mike Stepanik on Novemeber  14, 2022.
 *
 * This class wraps the functionality of analog to digital converter on the BBB.
 */
#ifndef ANALOGIN_H_
#define ANALOGIN_H_
using std::string;
class AnalogIn{
	private:
		unsigned int number;
	public:
		AnalogIn();
		AnalogIn(unsigned int n);
		virtual unsigned int getNumber() {return number; } // inline function implementation.
		virtual void setNumber(unsigned int n);
		virtual int readAdcSample();
		virtual ~AnalogIn();
};
#endif /* ANALOGIN_H_ */

