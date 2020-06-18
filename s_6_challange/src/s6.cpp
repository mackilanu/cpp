#include <iostream>

using namespace std;

int main() 
{
    const int valid_days {30};
    const double price_small_room {25.0}, price_large_room {35.0}, tax {0.06};

    double total_price, total_tax;

    int num_small, num_large;

    cout << "Hello and welcome to Marcus's Carept Cleaning Service\n\n";

    cout << "How many small rooms would you like cleaned? ";
    cin >> num_small;

    cout << "How many large rooms would you like cleaned? ";
    cin >> num_large;
    cout << endl;

    total_price = (price_small_room * num_small) + (price_large_room * num_large);
    total_tax = total_price * tax;


    cout << "Estimate for carpet cleaning service\n";
    cout << "Number of small rooms: " << num_small << endl;
    cout << "Number of large rooms: " << num_large << endl;

    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Price per large room: $" << price_large_room << endl;

    cout << "Cost: $" <<  total_price << endl;
    cout << "Tax: " << total_tax<< endl;
    cout << "=====================================\n";
    
    cout << "Total estimate: $" << total_tax + total_price << endl;
    cout << "This estimate is valid for: " << valid_days << " days\n";

    return 0;
}