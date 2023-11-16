#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guest =
    {
        "sunflowers",
        0.20,
        12.49
    };
    cout << "guest: " << guest.name << "for $ ";
    cout << guest.price << endl;
    inflatable choice;
    choice = guest;
    cout << "choice: " << choice.name << "for $ ";
    cout << choice.price << endl;

    return 0;
}