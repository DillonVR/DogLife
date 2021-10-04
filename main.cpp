#include <iostream>
#include<unistd.h>
#include "Dog.h"
using namespace std;

int main() {
	Dog
	dog1("Fido");
  dog1.setWeight(5.0);
  dog1.bark(5);
  dog1.setNumberOfLegs(3);
  dog1.run(20,400);
  dog1.addBone();
  dog1.wag(10,550);
}