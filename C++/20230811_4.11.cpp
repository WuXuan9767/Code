#include <iostream>
struct inflatable //外部申明，，作用于后面所有函数，可放入main中，成为内部声明，仅作用于main
{
    char name[20];
    float volume;
    double price;
}; //最好放在main外
int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",
        1.88,
        29.99
    };
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << endl;
    cout << "You can have both for $ ";
    cout << guest.price + pal.price << "!\n";

    return 0;
}