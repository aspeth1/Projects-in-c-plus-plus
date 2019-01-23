#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

class InventoryItem{
private:
    int number, quantity;
    string name;
    double cost;
public:
    InventoryItem(int number, int quantity, string name, double cost): number(0), quantity(0), name{}, cost(0.0) {}
    InventoryItem(int number, string name): quantity(0), cost(0.0) {}
    InventoryItem(int number, string name, int quantity, double cost): number(), quantity(), name{}, cost() {}

    const int getNumber() { return number; }
    const int getQuantity() { return quantity; }
    const string getName() const& { return name; }
    const double getCost() const& { return cost; }

    void setNumber(int number) { InventoryItem::number = number; }
    void setQuantity(int quantity) { InventoryItem::quantity = quantity; }
    void setName(string name) { InventoryItem::name = name; }
    void setCost(double cost) { InventoryItem::cost = cost; }

    const double getTotalCost(int quantity,int cost){
        double totalCost = quantity * cost;
        return totalCost;
    }

    const string str() {
        stringstream sout;



        sout << getNumber() << setw(9) << getName() << setw(9) << getQuantity() << setw(9)
        << getCost() << setw(9) << getTotalCost(quantity, cost);

        return sout.str();
    }

    InventoryItem() = delete;

    ~InventoryItem() ;


};

int main() {
    InventoryItem* item1 = new InventoryItem(125, 5, "Shoes", 9.99);
    InventoryItem* item2 = new InventoryItem(606, "Shirts");
    InventoryItem* item3 = new InventoryItem(988, "Socks", 8, 2.99);

    item1->setName("Shoes");
    item1->setNumber(125);
    item1->setQuantity(5);
    item1->setCost(9.99);

    item2->setName("Shirts");
    item2->setNumber(606);

    item3->setName("Socks");
    item3->setNumber(988);
    item3->setQuantity(8);
    item3->setCost(2.99);

    cout << "Number " << setw(6) << "Item Name " << setw(6) << "Cost " << setw(8) << "Quantity " << setw(8)
         << "Total Cost" << endl;
    cout << item1->str() << endl;
    cout << item2->str() << endl;
    cout << item3->str() << endl;

    return 0;
}