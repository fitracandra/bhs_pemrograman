#include <iostream>
#include <map>

using namespace std;

// Function to display the menu options
void displayMenu() {
    cout << "Welcome to the Menu System\n";
    cout << "1. Food\n";
    cout << "2. Drinks\n";
    cout << "3. Checkout\n";
    cout << "4. Exit\n";
    cout << "Please select an option: ";
}

// Function to display food menu and calculate total cost
void orderFood(map<string, double>& orderTotal) {
    map<string, double> foodMenu = {
        {"Burger", 5.0},
        {"Pizza", 8.0},
        {"Salad", 6.0}
    };
    string foodChoice;
    int quantity;

    cout << "Food Menu:\n";
    for (const auto& item : foodMenu) {
        cout << item.first << " - $" << item.second << endl;
    }

    cout << "Enter your food choice: ";
    cin >> foodChoice;
    cout << "Enter quantity: ";
    cin >> quantity;

    // Calculate total cost for food item
    double totalCost = foodMenu[foodChoice] * quantity;
    cout << "Total cost for " << foodChoice << ": $" << totalCost << endl;

    // Update overall order total
    orderTotal["Food"] += totalCost;
}

// Function to display drinks menu and calculate total cost
void orderDrinks(map<string, double>& orderTotal) {
    map<string, double> drinksMenu = {
        {"Water", 1.0},
        {"Soda", 2.0},
        {"Juice", 3.0}
    };
    string drinkChoice;
    int quantity;

    cout << "Drinks Menu:\n";
    for (const auto& item : drinksMenu) {
        cout << item.first << " - $" << item.second << endl;
    }

    cout << "Enter your drink choice: ";
    cin >> drinkChoice;
    cout << "Enter quantity: ";
    cin >> quantity;

    // Calculate total cost for drink item
    double totalCost = drinksMenu[drinkChoice] * quantity;
    cout << "Total cost for " << drinkChoice << ": $" << totalCost << endl;

    // Update overall order total
    orderTotal["Drinks"] += totalCost;
}

// Function to display checkout and overall order total
void checkout(const map<string, double>& orderTotal) {
    cout << "Order Summary:\n";
    for (const auto& item : orderTotal) {
        cout << item.first << " Total: $" << item.second << endl;
    }
}

int main() {
    map<string, double> orderTotal = {{"Food", 0.0}, {"Drinks", 0.0}};
    int option;

    do {
        displayMenu();
        cin >> option;

        switch (option) {
            case 1:
                orderFood(orderTotal);
                break;
            case 2:
                orderDrinks(orderTotal);
                break;
            case 3:
                checkout(orderTotal);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while (option != 4);

    return 0;
}
