#include <iostream>

#include "reservoir.h"

int main()
{
  //Task A
  std::cout<< "Date: 01/01/2018\n" << "East basin storage: " << get_east_storage("01/01/2018") << " billion gallons\n\n"; 
  std::cout<< "Date: 12/31/2018\n" << "East basin storage: " << get_east_storage("12/31/2018") << " billion gallons\n\n";
  std::cout<< "Date: 05/15/2018\n" << "East basin storage: " << get_east_storage("05/15/2018") << " billion gallons\n\n";
  std::cout<< "Date: 02/28/2018\n" << "East basin storage: " << get_east_storage("02/28/2018") << " billion gallons\n\n";
  std::cout<< "Date: 09/16/2018\n" << "East basin storage: " << get_east_storage("09/16/2018") << " billion gallons\n\n";

  //Task B
  std::cout << "minimum storage in East basin: " << get_min_east() << " billion gallons\n\n";
  std::cout << "MAXimum storage in East basin: " << get_max_east() << " billion gallons\n\n";
  return 0;
}
