// name: emotion.cpp
// version: 1.0
// description: creates emotions

// libraries
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <stdlib.h>

// namespaces
using namespace std;

// emotion class header
#include "emotion.h"

// constructors
emotion::emotion () {
	food.AddConnector(health, increase_dramatically);
	food.AddConnector(love, increase_slightly);
	sleep.AddConnector(health,increase_dramatically);
	health.AddConnector(sleep,decrease_slightly);
}
emotion::emotion (char *raw) { storage = raw; }

// operators
void emotion::operator = (char *raw) { storage = raw; }

// functions
void connector::AddConnector(connector& C, type_of_affection afc) {
	// something here
}
void connector::ChangeValue(double newvalue) {
	double delta_value = newvalue - value;
	for(int i=0; i<connections.size(); ++i) {
		connections[i].pAffect->Affect(delta_value,
		connections[i].afc);
	}
}
void connector::Affect(double deltavalue, type_of_affection afc) {
	// ...add/decr this->value depending on type of affection
	// Don't use "ChangeValue" for circle-connections
	// or handle circle conenctions better
}
