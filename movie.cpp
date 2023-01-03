#include <iostream>
using namespace std;
main(){
string name;
int atprice;
int ctprice;
int atsold;
int ctsold;
int charity;
int result;
int resultafter;
cout << "Enter movie name:";
cin >> name;
cout << "Enter adult ticket price";
cin >> atprice;
cout << "Enter child ticket price:";
cin >> ctprice;
cout << "Enter Number of adult tickets sold:";
cin >> atsold;
cout << "Enter Number of child tickets sold:";
cin >> ctsold;
cout << "Enter Percentage to donate:";
cin >> charity;
cout << "________________________________________________________________" << endl;
result= (atprice*atsold)+(ctprice*ctsold);
cout << "Total amount generated:" << result << endl;
resultafter = result - (result*10/100);
cout << "Amount after donation:" << resultafter;
}
