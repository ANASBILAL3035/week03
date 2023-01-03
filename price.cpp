#include <iostream>
using namespace std;
main(){
int size;
int cost;
int area;
float costpp;
float costaps;
cout << " Enter bag size in pound:";
cin >> size;
cout << " Enter bag cost:";
cin >> cost;
cout << " Enter area covered by bag:";
cin >> area;
cout << "____________________________________________________" << endl;
costpp= size/cost;
cout << "Cost of fertilizer per pound:" << costpp;
costaps= cost/area;
cout << "The Cost of fertilizing per area square feet" << costaps;
}