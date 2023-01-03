#include <iostream>
using namespace std;
main(){

float mb;
float kb;
float byte;
float bits;
cout << "ENTER IN MB:";
cin >> mb;
kb= 1024*mb;
byte=1024*kb;
bits= 8*byte;
cout << "bits are" <<bits;
}
