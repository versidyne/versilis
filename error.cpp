// name: error.cpp
// version: 1.0
// description: handles error messages

// standard libraries
#include <string>
#include <iostream>

using namespace std;

// header file
#include "error.h"

/**
 * @param error
 * @param chain
 * @constructor
 */
/*
Stratus.Prototypes.Error = function (error, chain) {
    this.code = 'Internal';
    this.message = 'No discernible data received.';
    this.chain = [];

    if (typeof error == 'string') {
        this.message = error;
    } else if (error && typeof error == 'object') {
        _.extend(this, error);
    }

    this.chain.push(chain);
};
 */

// error handler
void error(int abort, int code, const char *message) {

    /*
    int tui = 0;
    if (tui == 1) { tui::display(msg); }
    else { perror(temp.c_str()); }
    */

    /*
    // declare variables
    string temp;

    // build error message
    temp = "error %d: ";
    temp += message;
    temp += '\n';

    // declare variables
    char buffer[temp.size()];

    // insert error code
    sprintf(buffer, temp.c_str(), code);

    // set data
    temp = buffer;

    // display message
    perror(temp.c_str());

    // handle abort
    //if (abort == 1) { exit(1); }
    */

}
