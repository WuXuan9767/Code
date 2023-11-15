#include <iostream>

int main()
{
   using namespace std;
   int updates = 6;
   cout << "Updates values: " << updates << endl;
   cout << "Updates addresses: " << &updates << endl;
   int * p_updates;
   p_updates = &updates;
   cout << "p_updates values: " << *p_updates << endl;
   cout << "p_updates addresses: " << p_updates << endl;
   
   *p_updates = *p_updates + 1;
   cout << *p_updates << " " << p_updates << endl;
   cout << updates << endl;
   
   return 0;
}