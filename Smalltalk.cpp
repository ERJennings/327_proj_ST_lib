/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 22, 2019
 *      Author: ejennings
 */

#include <string>
#include <vector>
#include <memory>
#include "./includes/Watch.h"
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"

using namespace std;

Smalltalk::Smalltalk(std::string myNationality, int iPerson):nationality(myNationality), iPerson(iPerson), current_phrase(0) {

}

Smalltalk::~Smalltalk(void) {

}

std::string Smalltalk::saySomething() {
	return "Hello";
}

std::string Smalltalk::getTime() {
	if (pWatch > 0) {
		return pWatch->getTime();
	}
	else {
		return I_DO_NOT_HAVE_A_WATCH;
	}
}

std::unique_ptr<Watch>  Smalltalk::takeWatch() {
	std::unique_ptr<Watch> currentWatch;
	if (pWatch == 0) {
		currentWatch = std::move(currentWatch);
	}
	else {
		currentWatch = 0;
	}
	return currentWatch;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	return true;
}

//void populatePhrases() {

//}
