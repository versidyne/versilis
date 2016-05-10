// name: json.h
// version: 1.0
// description: json parsing

// ensure declarations only occur once
#ifndef JSON_H
#define JSON_H

// libraries
#include <string>

// json parsing class
class json {

public:
    // constructors
    json();

    json(char *raw);

    // operators
    void operator=(char *raw);

    // parsing
    template<class type>
    type parse(char *data);

    // stringify
    std::string stringify(bool data);
    std::string stringify(short int data);
    std::string stringify(unsigned short int data);
    std::string stringify(int data);
    std::string stringify(long int data);
    std::string stringify(long long int data);
    std::string stringify(unsigned int data);
    std::string stringify(unsigned long int data);
    std::string stringify(unsigned long long int data);
    std::string stringify(double data);
    std::string stringify(long double data);
    std::string stringify(float data);
    std::string stringify(char *data);

private:
    // local data
    std::string storage;
};

#endif
