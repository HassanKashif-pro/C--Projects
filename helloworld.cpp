#include <iostream>

void bakePizza();
void bakePizza(std ::string topping1); // functions can have same names but different arguments.
void bakePizza(std::string topping2, std::string topping1);
// functions must

int main()
{
    bakePizza("Lemon", "Pineapple");

    return 0;
}
void bakePizza()
{
    std::cout << "Baking pizza..." << std::endl;
}
void bakePizza(std::string topping1)
{
    std::cout << "Baking pizza...with" << topping1 << std::endl;
}
void bakePizza(std::string topping2, std::string topping1)
{
    std::cout << "Baking pizza...with " << topping1 << " and " << topping2 << "\n";
}