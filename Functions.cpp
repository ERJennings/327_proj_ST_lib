//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 *      Edited by Eric Jennings
 */
#include <iostream>
#include <memory>
#include "./includes/Functions.h"
#include "./includes/Smalltalk.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {
	
	//create a vector to hold SmallTalk unique pointers
	std::vector<std::unique_ptr<Smalltalk>> people;


		//add brits to vector
	for (int i = 0; i < numBrit; i++) {
		std::unique_ptr<Smalltalk> person(new Smalltalk_Brit(i));
		people.push_back(std::move(person));
	}

		//add americans  to vector
	for (int i = 0; i < numAmerican; i++) {
		std::unique_ptr<Smalltalk> person(new Smalltalk_American(i));
		people.push_back(std::move(person));
	}

		//add american donut enthusiest  to vector
	for (int i = 0; i < numbAmericanDonutEnthusiest; i++) {
		std::unique_ptr<Smalltalk> person(new ST_American_DonutEnthusiest(i));
		people.push_back(std::move(person));
	}

		//create some watches (as long as number watches <= numb people)
		//then give the watches away to first NUM_WATCHES people in the vector
		// when you are finished using the vector you return
		//from this function(see Smalltalk header for hints)
	for (unsigned int i = 0; numWatches > 0 && i < people.size(); i++) {
		std::unique_ptr<Watch> currentWatch(new Watch());

		if(people[i]->giveWatch(currentWatch)) {
			numWatches--;
		}

	}

		//return your vector
	return people;
}
