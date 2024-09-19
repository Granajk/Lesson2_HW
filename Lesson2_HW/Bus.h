#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include "Time.h"
using namespace std;

class Bus {
    vector<string> stations;
    Time_ start;
    Time_ end;
    int duration;
    int relax;
public:
    Bus(vector<string> stations, Time_ start, Time_ end, int duration, int relax);

    void addStation(int number, string name);
    void delStation(int number);

    Time_ getStart()const;
    Time_ getEnd()const;
    int getDuration()const;
    int getRelax()const;

    void setStart(Time_ start);
    void setEnd(Time_ end);
    void setDuration(int duration);
    void setRelax(int relax);

    void showInfo()const;
    void printShedule()const;
};

