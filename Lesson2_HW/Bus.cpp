#include "Bus.h"
#include "Time.h"
Bus::Bus(vector<string> stations, Time_ start, Time_ end, int duration, int relax)
{
    this->stations = stations;
    this->start = start;
    this->end = end;
    this->duration = duration;
    this->relax = relax;
}

void Bus::addStation(int number, string name)
{
    if (number >= 0 && number <= stations.size())
    {
        stations.insert(stations.begin() + number, name);
    }
    else
    {
        cout << "Error!" << endl;
    }
}

void Bus::delStation(int number)
{
    if (number >= 0 && number < stations.size())
    {
        stations.erase(stations.begin() + number);
    }
    else
    {
        cout << "Error!" << endl;
    }
}

Time_ Bus::getStart() const
{
    return start;
}

Time_ Bus::getEnd() const
{
    return end;
}

int Bus::getDuration() const
{
    return duration;
}

int Bus::getRelax() const
{
    return relax;
}

void Bus::setStart(Time_ start)
{
    this->start = start;
}

void Bus::setEnd(Time_ end)
{
    this->end = end;
}

void Bus::setDuration(int duration)
{
    this->duration = duration;
}

void Bus::setRelax(int relax)
{
    this->relax = relax;
}

void Bus::showInfo() const
{
    cout << "stations: ";
    for (auto item : stations)
    {
        cout << item << "  ";
    }cout << endl;
    cout << "start time: " << start << endl;
    cout << "end time: " << end << endl;
    cout << "durations: " << duration << endl;
    cout << "relax: " << relax << endl;
}

void Bus::printShedule() const
{
    cout << "Shedule: " << endl;
    Time_ tmp = start;
    while (tmp <= end)
    {
        cout << tmp << " ";
        tmp += duration + relax;
        if (tmp <= end)
        {
            cout << tmp << endl;
        }
        tmp += duration + relax;
    }
}
