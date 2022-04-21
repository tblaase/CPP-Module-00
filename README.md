# CPP-Module-00

This is my solution for the first module of the C++ modules of 42school.


![result](https://github.com/tblaase/CPP-Module-00/blob/main/readme_additions/result.png)

## List of all my cpp-modules

- [CPP-Module-00](https://github.com/tblaase/CPP-Module-00)
- [CPP-Module-01](https://github.com/tblaase/CPP-Module-01)
- [CPP-Module-02](https://github.com/tblaase/CPP-Module-02)
- [CPP-Module-03](https://github.com/tblaase/CPP-Module-03)
- [CPP-Module-04](https://github.com/tblaase/CPP-Module-04)
- [CPP-Module-05](https://github.com/tblaase/CPP-Module-05)
- [CPP-Module-06](https://github.com/tblaase/CPP-Module-06)
- [CPP-Module-07](https://github.com/tblaase/CPP-Module-07)
- [CPP-Module-08](https://github.com/tblaase/CPP-Module-08)

## In general

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes" (source: [Wikipedia](https://en.wikipedia.org/wiki/C++)).<br><br>
This project was my first contact to write programms in C++.<br>
All of those exercises are compilable with the `-std=c++98`-flag, since this was a requirement for this project.<br>
All exercises where compiled and tested on `macOS Catalina 10.15.7` and `Ubuntu 20.04.4 LTS`.<br>

## Exercise 00

The Goal of this exercise was to write a really simple c++ style programm, but without any classes yet, just to get familiar with the use of i.e. `std::cout`.


You can compile this project with `make`, `make all` or `make re`.<br>
Then use it with `./megaphone "Argument_you_want_to_change_to_all_CAPS"`


## Exercise 01

This subject was a little more sophisticated than the one before.<br>
First time using classes.<br>


This programm resembles a phonebook, where you can store up to 8 contacts, and display the stored information during runtime.<br>
When the programm is terminated in any way, all contacts are lost.<br>
The phonebook also has instructions and descriptive error messages that tell you what to do and how to use it correctly.


Usage:

You can compile this project with `make`, `make all` or `make re`.<br>
Then you can run it with `./phonebook`.<br>
After that, just follow the instructions of the phonebook.<br>


## Exercise 02

The scope of this exercise was to re-engineer the [Account.cpp](https://github.com/tblaase/CPP-Module-00/blob/main/ex02/src/Account.cpp) file from the given [tests.cpp](https://github.com/tblaase/CPP-Module-00/blob/main/ex02/src/tests.cpp), [Account.hpp](https://github.com/tblaase/CPP-Module-00/blob/main/ex02/include/Account.hpp) and [19920104_091532.log](https://github.com/tblaase/CPP-Module-00/blob/main/ex02/19920104_091532.log) files.


If you compare my output ([my.log](https://github.com/tblaase/CPP-Module-00/blob/main/ex02/my.log)) with the original .log file, the only difference is the timestamp, which is expected.<br>
Another difference will occure only when running it on macOS, where the order of the decronstruction is reversed.<br>

You can compile this project with `make`, `make all` or `make re`.<br>
Then you can run it with `./leak_information`.<br>
