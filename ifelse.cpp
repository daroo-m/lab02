#include <iostream>
using namespace std;

int main() {

    double coffeePrice = 5.0;
    
    double yourWallet;
    int numCoffeesToBuy;
    
    cout << "Welcome to the 402 cafe! Coffees cost " << coffeePrice 
         << " each. Please input how much money you have:" << endl;
    cin >> yourWallet;

    cout << "Enter how many coffees you would like to buy:" << endl;
    cin >> numCoffeesToBuy;


    // TODO: Write an if statement to check if either of the input values 
    //      were invalid (less than 0). If either value is negative, print
    //      an error statement and exit with "return 1"


    // TODO: Write if-else statements to tell the user if they have
    //      more than enough, exactly enough, or not enough to buy that
    //      many coffees

    return 0;
}
