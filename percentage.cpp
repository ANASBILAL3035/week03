#include <iostream>
using namespace std;
main(){
int subone;
int subtwo;
int subthree;
int subfour;
int subfive;
float total=500;
float percentage;

cout << "Enter subject one marks:";
cin >> subone;
cout << "Enter subject two marks:";
cin >> subtwo;
cout << "Enter subject three marks:";
cin >> subthree;
cout << "Enter subject four marks:";
cin >> subfour;
cout << "Enter subject five marks:";
cin >> subfive;
percentage = 100*(subone+subtwo+subthree+subfour+subfive)/total;
cout << "Percentage is:" <<percentage;
}





