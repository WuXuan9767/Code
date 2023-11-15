 #include <iostream>

 int main()
 {
    using namespace std;
    cout << "Enter a character: ";
    char ch;
    cin >> ch;
    int i = ch;
    cout << "The ASCII code for " << ch <<" is " << i << endl;

    i = i + 1;
    ch = i;
    cout << "The ASCII code for " << ch <<" is " << i << endl;


    cout<< "Displaying char ch using cout,put(ch): ";
    cout.put(ch);
    cout << "!!";
    cout.put('!');

    return 0;
 }