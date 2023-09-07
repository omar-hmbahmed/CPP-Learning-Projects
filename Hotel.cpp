#include <iostream>

using namespace std;

int main() {
    cout << "How many small rooms would you like to clean?" << endl;
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    
    cout << "How many large rooms would you like to clean?" << endl;
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    const int price_per_small_room {25};
    const int price_per_large_room {35};
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: $" << (number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room) << endl;
    const double tax_rate {0.06};
    cout << "Tax: $" << tax_rate * ((number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room)) << endl;
    cout << "================================" << endl;
    cout << "Total estimate: $" << ((number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room)) * (tax_rate + 1) << endl;
    const int estimate_expiry {30};
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    return 0;
}