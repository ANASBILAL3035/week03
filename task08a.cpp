#include <iostream>
using namespace std;
main(){
float vegprice;
float fruitprice;
float vegweight;
float fruitweight;
float total;
float ruppee;
cout << "Enter vegetable price per killogram";
cin >> vegprice;
cout << "Enter fruit price per killogram";
cin >> fruitprice;
cout << "Enter total killograms of weight";
cin >> vegweight;
cout << "Enter total killograms of fruit";
cin >> fruitweight;
total= (vegprice*vegweight)+(fruitprice*fruitweight);
ruppee= 0.515*total;
cout << "Total cost is: " <<ruppee;


}