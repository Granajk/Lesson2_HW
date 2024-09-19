
#include "Time.h"
#include "Bus.h"
int main()
{
    Bus b1({ "Saltivka", "Istorychnyi Musei", "Pivdennyi Voksal" }, Time_(6, 0), Time_(11, 0), 30, 10);

    b1.showInfo();
    b1.printShedule();
}

