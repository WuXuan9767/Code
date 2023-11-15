// #include <iostream>
// #include <string>
// #include <cstring>
// #pragma warming(disable:4996) //关闭警报
// int main()
// {
//     using namespace std;
//     char charr1[20];
//     char charr2[20] = "jaguar";
//     string str1;
//     string str2 = "panther";
//     str1 = str2;
//     strcpy(charr1, charr2); //此函数在vc中会引发警报
//     // cout << str1 << " " << charr1 << endl;
//     str1 += " paste";
//     strcat(charr1, " juice");
//     // cout << str1 << " " << charr1 << endl;
//     // strcat(charr1, charr2);
//     // cout << charr1 << endl;
//     int len1 = str1.size();
//     int len2 = strlen(charr1);
//     cout << "THe string " << str1 << " constains " << len1 << " characters\n";
//     cout << "THe string " << charr1 << " constains " << len2 << " characters\n";

//     return 0;
// }