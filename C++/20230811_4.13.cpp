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
    inflatable guest[2] =
    {
        {"Bambi",0.5,21.99},//guest[0]
        {"Godzilia",2000,565.99}//guest[1]
    };
    cout << guest[0].name << " " << guest[1].name << endl;
    cout << guest[0].volume + guest[1].volume;

    return 0;
}