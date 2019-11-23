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

using namespace std;

Smalltalk::Smalltalk(std::string myNationality, int iPerson):nationality(myNationality), iPerson(iPerson), current_phrase(0) {

}

Smalltalk::~Smalltalk(void) {

}

std::string Smalltalk::saySomething() {
	return "Hello";
}

std::string Smalltalk::getTime() {
	return "Time to get a watch";
}

std::unique_ptr<Watch>  Smalltalk::takeWatch() {
	return 0;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	return true;
}

//void populatePhrases() {

//}
