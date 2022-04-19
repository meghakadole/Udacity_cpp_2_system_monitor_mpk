#include <string>

#include<iostream>
#include "format.h"

using std::string;


// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
  string hours, mins, secs;
    hours = std::to_string(seconds / 3600);
    mins = std::to_string((seconds/60)%60);
    secs = std::to_string(seconds %60);
    std::string hh = std::string(2 - hours.length(), '0') + hours;
    std::string mm = std::string(2 - mins.length(), '0') + mins;
    std::string ss = std::string(2 - secs.length(), '0') + secs;
 string returntime = hh+":"+mm+":"+ss;
  //std::cout<<returntime<<std::endl;
    return returntime;
}