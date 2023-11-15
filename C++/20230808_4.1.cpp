// #include <iostream>

// int main()
// {
//     using namespace std;
//     int yams[3];
//     yams[0] = 7;
//     yams[1] = 8;
//     yams[2] = 6;

//     int yamcosts[3] = {20, 30, 5};//建议
//     cout << "Total yams = ";
//     cout << yams[0] + yams[1] + yams[2] << endl;
//     cout << "The package with " << yams[1] << " yams cost ";
//     cout << yamcosts[1] << " cents per yam.\n";
//     int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
//     total = total + yams[2] * yamcosts[2];
//     cout<< "The total yam expense is " << total << " cents.\n";

//     cout << "Size of yams array = " << sizeof yams << endl; //int型，每个4字节，一共12个字节
//     cout << "Size of one element = " << sizeof yams[0] << endl;

//     int num_elements = sizeof yams / sizeof (int); //计算yams的数量
//     cout << "The number of yams is " << num_elements << endl;



//     return 0;
// }