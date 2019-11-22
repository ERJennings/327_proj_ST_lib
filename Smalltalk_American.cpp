/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 22, 2019
 *      Author: ejennings
 */

#include "./includes/Smalltalk.h"
#include "./includes/Smalltalk_American.h"
#include <string>
#include <vector>
#include <memory>
#include "./includes/Watch.h"
#include "./includes/constants.h"

Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk(AMERICAN,iPerson){

}

Smalltalk_American::Smalltalk_American(std::string myNationality,int iPerson):Smalltalk(myNationality,iPerson){

}

Smalltalk_American::~Smalltalk_American(void){

}

void Smalltalk_American::populatePhrases() {

}
