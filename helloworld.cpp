#include <iostream>
using namespace std;

// Define a class named Car
class Car
{
public:
    string brand;
    string model;
    int year;

    // Constructor to initialize the Car object
    Car(string b, string m, int y)
    {
        brand = b;
        model = m;
        year = y;
    }

    // Method to display car details
    void displayInfo()
    {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main()
{
    // Constructor = special method automatically called when
    // an object is instantiated; useful for assigning values to attributes.

    // Creating objects of Car class using the constructor
    Car car1("Toyota", "Camry", 2020);
    Car car2("Honda", "Civic", 2019);

    // Displaying the information of both cars
    car1.displayInfo();
    car2.displayInfo();

    return 0;
}
