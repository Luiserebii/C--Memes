#ifndef GUARD_Time_h
#define GUARD_Time_h


#include <iostream>
#include <chrono>
#include <string>
#include <sstream>

std::ostream& printTimeDifference(std::ostream& out, std::chrono::high_resolution_clock::time_point a, std::chrono::high_resolution_clock::time_point b, std::string prefix = "", std::string postfix = "");
std::string timeDifferenceToString(std::chrono::high_resolution_clock::time_point a, std::chrono::high_resolution_clock::time_point b);

struct TimeRecord {
    std::chrono::high_resolution_clock::time_point start;
    std::chrono::high_resolution_clock::time_point end;
};


#endif
