#include <iostream>
#include "menu.cpp"
#include "maths.h"
#include "filehandler.cpp"

using namespace std;


/** Prints size of variables (system constraints) **/
int scopes() {
  cout << "Char: " << sizeof(char) << " bytes\n";
  cout << "Int: " << sizeof(int) << " bytes\n";
  cout << "Float: " << sizeof(float) << " bytes\n";
  cout << "Double: " << sizeof(double) << " bytes\n";
  return 0;
}

int main(){
  //int choice = main_menu();
  //cout << "Choice: " << choice << "\n";
  //scopes();
  vector <int> a = {1,2,4};
  int sum = integerArrayAddition(a);
  cout << sum;
//  fileWrite("g.txt", "writing this\n");
//  fileOpen("f.txt");
//  appendFile("g.txt","secondline\n");
  return 0;
}


