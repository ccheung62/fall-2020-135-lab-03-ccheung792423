#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

#include "reverseorder.h"

void reverse_oreder(std::string date1, std::string date2) {
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
  std::string junk;        
  getline(fin, junk); // read one line from the file to get rid of it
  std::string currDate;
  double westEl;
  std::string rev = "";
  while (currDate!=date1){
    fin >> currDate >> junk >> junk >> junk >> westEl; //take the first column as date and the second as east storage
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, ignorring the remaining columns
  }
  while (currDate!=date2) {
    rev =  currDate + " " + std::to_string(westEl).erase(6,9) + "ft\n" + rev;
    fin >> currDate >> junk >> junk >> junk >> westEl; 
    fin.ignore(INT_MAX, '\n');
  }
  rev = currDate + " " + std::to_string(westEl).erase(6,9) + "ft\n" + rev;
  std::cout << rev;

  fin.close();
}
