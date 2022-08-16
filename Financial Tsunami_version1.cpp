#include <iostream>
using namespace std ;

int main() {
  int num,num_min;
  char again;
  do{
      std::cout << "Enter the number of bank: ";
  cin >> num;

  cout << "Enter minimum Limit: ";
  //limit is the totall asset
  cin >> num_min;
  if (num==3 && num_min < 201){
    std::cout << " 3 bank is unsafe.";
  }
  else if (num==1 && num_min < 201){
    std::cout << " 1 bank is unsafe.";
  }
  else{
    
    std:: cout << " 0,2,4 are safe ";
  }
    cout <<"Do you wanna start over? (Y/N) ";
    cin >> again;
  } while (again == "Y"|| again == "y");
    system("pause");

  return 0;
}