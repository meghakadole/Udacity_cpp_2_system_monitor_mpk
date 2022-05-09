#include "processor.h"
#include "linux_parser.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() {
    float cpuUtil=0;
    long activejiffies = LinuxParser::ActiveJiffies();
    long currentactivejiffies = activejiffies;

    long idlejiffies = LinuxParser::IdleJiffies();
    long currentidlejiffies = idlejiffies;
   // std::cout<<"active_ticks & idle_ticks = "<< activejiffies<<"\n"<<idlejiffies<<"\n";
    long totalduration = currentactivejiffies + currentidlejiffies;

    cpuUtil = static_cast<float>(currentactivejiffies)/totalduration;


    return cpuUtil;




}