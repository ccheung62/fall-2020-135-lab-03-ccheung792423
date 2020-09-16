#include <iostream>

#include "reservoir.h"
#include "reverseorder.h"

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

  //Task C
  std::cout << "01/11/2018 " << compare_basins("01/11/2018") << "\n\n";
  std::cout << "05/15/2018 " << compare_basins("05/15/2018") << "\n\n";
  std::cout << "07/24/2018 " << compare_basins("07/24/2018") << "\n\n";
  std::cout << "09/16/2018 " << compare_basins("09/16/2018") << "\n\n";
  std::cout << "12/20/2018 " << compare_basins("12/20/2018") << "\n\n";

  //Task D
  reverse_oreder("01/05/2018", "01/28/2018");
  
  return 0;
}
