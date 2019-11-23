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
	populatePhrases();

	int size = mySmallTalk.size();

	if (nationality == BRIT) {
		int britCount = current_phrase%size;
		current_phrase++;
		return mySmallTalk[britCount];
	}
	if (nationality == AMERICAN) {
		int americanCount = current_phrase%size;
		current_phrase++;
		return mySmallTalk[americanCount];
	}
	if (nationality == AMERICAN_DE) {
		int donutCount = current_phrase%size;
		current_phrase++;
		return mySmallTalk[donutCount];
	}

	return "Are you sure you aren't Canadian?";
}

std::string Smalltalk::getTime() {
	if (pWatch != 0) {
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
	if (this->pWatch != 0) {
		return false;
	}
	else {
		this->pWatch = std::move(pWatch);
		return true;
	}

}
