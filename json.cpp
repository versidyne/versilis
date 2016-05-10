// name: json.cpp
// version: 1.0
// description: json parsing

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

std::string json::stringify(bool data) {
    return (data) ? "true" : "false";
};

std::string json::stringify(short int data) {
    return std::to_string(data);
};

std::string json::stringify(unsigned short int data) {
    return std::to_string(data);
};

std::string json::stringify(int data) {
    return std::to_string(data);
};

std::string json::stringify(long int data) {
    return std::to_string(data);
};

std::string json::stringify(long long int data) {
    return std::to_string(data);
};

std::string json::stringify(unsigned int data) {
    return std::to_string(data);
};

std::string json::stringify(unsigned long int data) {
    return std::to_string(data);
};

std::string json::stringify(unsigned long long int data) {
    return std::to_string(data);
};

std::string json::stringify(double data) {
    return std::to_string(data);
};

std::string json::stringify(long double data) {
    return std::to_string(data);
};

std::string json::stringify(float data) {
    return std::to_string(data);
};

std::string json::stringify(char *data) {
    return data;
};
