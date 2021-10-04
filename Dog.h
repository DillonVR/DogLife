#include <string>
#include "Bone.h"
using namespace std;

class Dog {
	
	private: 
		int numberOfLegs;
		float weight;
		bool happy;
		string name;
		Bone* bone;
	public:
		Dog(string name);
		~Dog();
		void run(int howFar, int howFast);
		void bark(int numTimes);
		void wag(int numTimes, int howFast);
		void setWeight(float enteredWeight);
		void setNumberOfLegs(int numLegs);
		void setHappy(bool happy);
		void addBone();
};