#include <iostream>
#include <unistd.h>
#include "Dog.h"
using namespace std;

Dog::Dog(string enteredName) {
    name = enteredName;
    cout << name << "is alive"<< endl;
    happy = true;
    bone = NULL;
}

Dog::~Dog() {
		cout << "all done." << endl;
    cout << name << " is no longer with us." << endl;
}

void Dog::run(int howFar, int howFast) {

    if (howFar < 0 || howFar > 1000) {
        return;
    }

    else {
        int count = 0;

        if (howFast > 1000 || howFast < 0) {
            howFast = 0;
        }

        if (numberOfLegs > 3) {
            count = 0;
            cout << name <<"is running to catch at tail on" << numberOfLegs << "legs | run: "<< howFar<<", sleep: "<< howFast<< "ms" <<endl;
            while (count != howFar) {
                cout.flush();
                usleep(howFast * 1000);
                cout << "#";
                ++count;
            }
            cout <<"\n"<<name<< " is tired now. My tail is dragging." <<endl;
        }

        else if (numberOfLegs == 3) {
            count = 0;
            cout << name <<" is running to catch at tail on " << numberOfLegs << " legs | run: "<< howFar<<", sleep: "<< howFast<< "ms" << endl;
            while (count != howFar) {
                cout.flush();
                usleep((howFast * (1.0/0.75)) * 1000);
                cout << "#";
                ++count;
            }
            cout <<"\n"<< name << " is tired now. My tail is dragging." << endl;
        }

        else {
        return;
        }
    }
}

void Dog::bark(int numTimes) {
    int count = 0;

    if (weight < 100) {
        cout <<"I'm "<< name << " and i am here to say" << endl;
        while (count < numTimes) {
            cout << "  yap!!!" << endl;
            ++count;
        }
    }
    
    else if (weight > 100) {
        cout <<"I'm "<< name << " and i am here to say" << endl;
        while (count < numTimes) {
            cout << "  WOOF!!!" << endl;
            ++count;
        }
    }
}

void Dog::wag(int numTimes, int howFast) {
    if (numTimes < 0 || numTimes > 1000) {
        return;
    }

    if (howFast < 0 || howFast > 1000) {
        howFast = 0;
    }
    
    int count = 0;

    if (happy == true) {
        cout<<"I'm " << name << ", and I'm happy. I'm wagging my tail! | wags: "<< numTimes<<", sleep value: " << howFast << "ms"<< endl;
        while (count < numTimes) {
            if (count % 2 == 0) {
                cout.flush();
                usleep(howFast * 1000);
                cout << "\\ ";
            }
            else if (count % 2 != 0) {
                cout.flush();
                usleep(howFast * 1000);
                cout << "/ ";
            }
            ++count;
        }
        cout << endl;
        setHappy(false);
        bone -> ~Bone();
				cout << "I'm "<< name << ", and I'm done being happy." << endl;

    }

    else {
        return;
    }
}

void Dog::setWeight(float n) {
    weight = n;
}


void Dog::setNumberOfLegs(int n) {
    if (n > 4) {
        numberOfLegs = 4;
    }
    
    else {
        numberOfLegs = n;
    }
}

void Dog::setHappy(bool n) {
    happy = n;
}

void Dog::addBone() {  
	Bone* ptr = new Bone();
    bone = ptr;
    setHappy(true);
}