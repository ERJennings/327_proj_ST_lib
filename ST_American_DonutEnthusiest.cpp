/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: Nov 22, 2019
 *      Author: Eric Jennings
 */

#include <string>
#include <vector>
#include <memory>
#include "./includes/Smalltalk.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"



ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int iPerson):Smalltalk_American(AMERICAN_DE, iPerson){

}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void){

}

void ST_American_DonutEnthusiest::populatePhrases() {
	mySmallTalk.clear();

	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);

	mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}
