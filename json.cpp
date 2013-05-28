// name: json.cpp
// version: 1.0
// description: json parsing

// libraries
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <stdlib.h>

// namespaces
using namespace std;

// json class header
#include "json.h"

// constructors
json::json () { /* do nothing */ }

// constructors
json::json (char *raw) { storage = raw; }

// operators
void json::operator = (char *raw) { storage = raw; }
