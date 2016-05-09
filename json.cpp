// name: json.cpp
// version: 1.0
// description: json parsing

// libraries
#include <iostream>

// namespaces
using namespace std;

// json class header
#include "json.h"

// constructors
json::json() { /* do nothing */ }

// constructors
json::json(char *raw) { storage = raw; }

// operators
void json::operator=(char *raw) { storage = raw; }

// templates
template<class type>
type json::parse(char *data) {
    //return;
};

// overloads
char *json::stringify(bool data) {
    char *tempstr;
    char truestr[] = {"true"};
    char falsestr[] = {"false"};
    tempstr = (data) ? truestr : falsestr;
    return tempstr;
};

char *json::stringify(int data) {
    char *temp;
    sprintf(temp, "%d", data);
    return temp;
};

char *json::stringify(double data) {
    char *temp;
    sprintf(temp, "%f", data);
    return temp;
};

char *json::stringify(char *data) {
    return data;
};
