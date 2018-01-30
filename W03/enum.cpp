// Name: Yilin Liu
// Date: 1/28/2018
// Desc: Demonstration of enumurated data types

#include <iostream>
#include <iomanip>

using namespace std;

// An enumerated data type consists of values represent integer constants.
// You can think of them a integer named constant.
enum Day_T {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};

int main(){
    //internally the complier assigns integer values to
    //the enumerators, beginning with 0.
    // cout << MONDAY << endl;
    // cout << TUESDAY << endl;
    // cout << WEDNESDAY << endl;
    // cout << THURSDAY << endl;
    // cout << FRIDAY << endl;
    
    // comparable with each other
    // Day_T a = MONDAY;
    // Day_T b = TUESDAY;
    // if(a == b) cout << "Match!" << endl;
    //   else cout << "No match." << endl;
    
      
    const int NUM_DAYS = 5;  // The number of the days
    double sales[NUM_DAYS]; 
    double total = 0.0;
    int index;
    
    // Get the sales for each day
    for(index = MONDAY; index <= FRIDAY; index++){
        cout << "Enter the sales for the day "
             << index << ": ";
        cin >> sales[index];
    }
    
    // Calculate the total sales
    for(index = MONDAY; index <= FRIDAY; index++){
        total += sales[index];
    }
    
    // Display the total
    cout << "The total sales are $" << setprecision(2)
         << fixed << total << endl;

    return 0;

}