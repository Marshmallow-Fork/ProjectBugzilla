//============================================================================
// Name        : boop.cpp
// Author      : North
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string TITLE = "Bugzilla!";

void Initialization() {
	//load stuff, yo!
	cout << "Hello " << TITLE << endl; // prints !!!Hello World!!!
}

void MainLoop() {
	//this where the repeated stuff goes.
	//like the update frame
	int i = 0;
	while(i < 10) {
		cout << "Not Yet " << i << endl;
		i++;
	}
	cout << "DONE" << endl;
}

int main() {
	Initialization();
	MainLoop();
	return 0;
}
