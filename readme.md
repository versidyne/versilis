Versilis - C++ Native Cross Platform Library
=====
#####Overview
This is a complete cross platforming library.  This can be utilized to build Unix, Windows, or Android applications that can be compiled directly on each system.

#####Main Goals
* Maintain a solid cross-platform library of which development can take place.  This library is meant to be universal, so each class must provide an extremely specific role while maintaining optimal code and complex functions with an friendly interface.

Usage
=====
#####Overview
The process to use these classes is quite simple, with only a few prerequisites:

* error.cpp
* error.h
* os.h

#####Installation
First, you must decide which of these classes your program will need to have in order to run.  Once you have decided which you wish to take, copy and paste the source (.cpp) files and header (.h) files that share the same name and put them in your application's source directory.  You must then include the header (.h) files in your main source (.cpp) file.  By including them, your compiler will have the callouts for the file to compile with the class sources.

```cpp
//Sample Includes
#include "http.h"
#include "text.h"
```

#####Format
Each class will have a similar format of usage...

```cpp
//Sample Format

//object oriented class style information here
echo "Hello World!";
```

Classes
=====
#####Overview
The following classes each have a source and header file which work together to represent a class.  Each will have a similar format of usage while maintaining optimal architecture.

#####Error Handler
This class handles errors made by all other classes.

```cpp
//Sample Format

//object oriented class style information here
echo "Hello World!";
```

Credits
=====
This project has always been built by only one programmer, Alex Gurrola.  One day he hopes this system will no longer require his influence to progress without feature creep.
