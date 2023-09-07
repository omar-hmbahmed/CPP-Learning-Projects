#include <iostream>

using namespace std;

int main() {
    float dollars_input {0};
    cout << "How much money do you have in dollars?" << endl;
    cin >> dollars_input;
    
    int cents_input{0};
    cents_input = dollars_input*100;
    
    int dollars_output {0}, quarters_output {0}, dimes_output {0}, nickels_output {0}, pennies_output {0};
    
    const int cents{100}, quarters{25}, dimes{10}, nickels{5};
    
    cout << "You can provide change as follows:" << endl;
    
    dollars_output = cents_input / cents;
    quarters_output = (cents_input % cents) / quarters;
    dimes_output = ((cents_input % cents) % quarters) / dimes;
    nickels_output = (((cents_input % cents) % quarters) % dimes) / nickels;
    pennies_output = (((cents_input % cents) % quarters) % dimes) % nickels;
    
    cout << "Dollars: " << dollars_output << endl;
    cout << "Quarters: " << quarters_output << endl;
    cout << "Dimes: " << dimes_output << endl;
    cout << "Nickels: " << nickels_output << endl;
    cout << "Pennies: " << pennies_output << endl;
    
    return 0;
}