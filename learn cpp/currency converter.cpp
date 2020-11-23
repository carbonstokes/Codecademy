#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;

  double usd;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

// As of 22/11/2020
// Peso to USD: 0.000028
// Reais to USD:0.19
// Soles to USD:0.28

usd = (0.000028 *pesos) + (0.19 * reais) + (0.28 * soles);

std::cout << "Total USD = $ " << usd << "\n";

}
