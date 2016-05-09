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
    json();

    json(char *raw);

    // operators
    void operator=(char *raw);

    // parsing
    template<class type>
    type parse(char *data);

    // stringify
    char *stringify(bool data);
    char *stringify(int data);
    char *stringify(double data);
    char *stringify(char *data);

private:
    // local data
    char *storage;
};

#endif
