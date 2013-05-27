// name: json.h
// version: 1.0
// description: json parsing

// ensure declarations only occur once
#ifndef JSON_H
#define JSON_H

// json parsing class
class json {
	
	public:
		// constructors
		json ();
		json (char *raw);
		// operators
		void operator = (char *raw);
		
	private:
		// local data
		char *storage;
		
};

#endif
