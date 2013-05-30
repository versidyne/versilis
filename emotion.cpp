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
emotion::emotion () { /* do nothing */ }

// constructors
emotion::emotion (char *raw) { storage = raw; }

// operators
void emotion::operator = (char *raw) { storage = raw; }

// pseudocode example
/*class Connector;
enum type_of_affection=
{
	increase_dramatically,
	increase,
	increase_slightly,
	decrease_slightly,
	decrease,
	decrease_dramatically
};

struct Connection {
	Connector* pAffect;
	type_of_affection afc;
}

class Connector {
	double value;
	std::vector <Connection> connections;
	void AddConnector(Connector& C, type_of_affection afc) {
		// something here
	}
	void ChangeValue(double newvalue) {
		double delta_value = newvalue - value;
		for(int i=0; i<connections.size(); ++i) {
			connections[i].pAffect->Affect(delta_value,
			connections[i].afc);
		}
	}
	void Affect(double deltavalue, type_of_affection afc) {
		// ...add/decr this->value depending on type
		// of affection
		// Don't use "ChangeValue" for circle-connections
		// or handle circle conenctions better
	}
}

class emotion {
	Connector food, love, health, sleep;
	emotion() {
		food.AddConnector(health, increase_dramatically);
		food.AddConnector(love, increase_slightly);
		sleep.AddConnector(health,increase_dramatically);
		health.AddConnector(sleep,decrease_slightly);
	}
}*/
