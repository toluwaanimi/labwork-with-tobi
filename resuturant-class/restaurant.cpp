#include <iostream>
#include <string>


// Class representing a booking at a restaurant
class Booking {
    std::string name; // name of the person making the booking
    int partySize;    // number of people in the booking party
    std::string date; // date of the booking

public:
    Booking(std::string name, int partySize, std::string date)
            : name(name), partySize(partySize), date(date) {}

    // Getters for the booking's properties
    std::string getName() const { return name; }
    int getPartySize() const { return partySize; }
    std::string getDate() const { return date; }
};

// Class representing an item in a restaurant's inventory
class InventoryItem {
    std::string name;     // name of the inventory item
    int quantity;         // number of units of the item in the inventory
    float unitPrice;      // price per unit of the item

public:
    InventoryItem(std::string name, int quantity, float unitPrice)
            : name(name), quantity(quantity), unitPrice(unitPrice) {}

    // Getters for the inventory item's properties
    std::string getName() const { return name; }
    int getQuantity() const { return quantity; }
    float getUnitPrice() const { return unitPrice; }
};

// Class representing a menu item at a restaurant
class MenuItem {
    std::string name;       // name of the menu item
    std::string description; // description of the menu item
    float price;            // price of the menu item

public:
    MenuItem(std::string name, std::string description, float price)
            : name(name), description(description), price(price) {}

    // Getters for the menu item's properties
    std::string getName() const { return name; }

    std::string getDescription() const { return description; }

};