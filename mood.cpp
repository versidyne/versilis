// name: mood.cpp
// version: 1.0
// description: emulates an emotional response

// libraries
//#include <iostream>

// namespaces
using namespace std;

// text parser header
#include "mood.h"

// constructors
mood::mood () { /* do nothing */ }

// constructors
mood::mood (char *raw) { storage = raw; }

// operators
void mood::operator = (char *raw) { storage = raw; }

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

class Mood {
	Connector food, love, health, sleep;
	Mood() {
		food.AddConnector(health, increase_dramatically);
		food.AddConnector(love, increase_slightly);
		sleep.AddConnector(health,increase_dramatically);
		health.AddConnector(sleep,decrease_slightly);
	}
}*/
