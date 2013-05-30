// name: emotion.h
// version: 1.0
// description: creates emotions

// ensure declarations only occur once
#ifndef EMOTION_H
#define EMOTION_H

// define types
class connector;
enum type_of_affection=
{
	increase_dramatically,
	increase,
	increase_slightly,
	decrease_slightly,
	decrease,
	decrease_dramatically
};

struct connection {
	connector* pAffect;
	type_of_affection afc;
}

// define classes
class connector {
	
	public:
		// constructors
		connector ();
		connector (char *raw);
		// operators
		void operator = (char *raw);
		
	private:
		// local data
		char *storage;
		double value;
		std::vector <Connection> connections;
		
};
class emotion {
	
	public:
		// constructors
		emotion ();
		emotion (char *raw);
		// operators
		void operator = (char *raw);
		
	private:
		// local data
		char *storage;
		connector food, love, health, sleep;
		
};

#endif
