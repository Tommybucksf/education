/*creating new function 
Need more practice
https://www.codecademy.com/learn/learn-c-plus-plus/modules/learn-cpp-functions/cheatsheet
*/ 
#include <iostream>

// Define get_emergency_number() below:
void get_emergency_number(std::string emergency_number){
   std::cout << "Dial " << emergency_number << std::endl;
}

int main() {
  
  // Original emergency services number 
  std::string old_emergency_number = "999";
  
  // For nicer ambulances, faster response times
  // and better-looking drivers
  std::string new_emergency_number = "0118 999 881 999 119 725 3";
  
  // Call get_emergency_number() below with
  // the number you want!
  get_emergency_number(new_emergency_number);

  return 0;
}