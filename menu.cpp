#include <iostream>
#include <vector>
using namespace std;

struct Category{
string name;
int id;
};

vector <Category> categories;



void loadCategories(){
Category temp;
temp.name="asdf";
temp.id=1;
categories.push_back(temp);
}

int math_menu(){
int choice;
cout << "Select a category: \n";
cout << "Addition [1]\n";
cout << "Division [2]\n";
cout << "Subtraction [3]\n";
cin >> choice;
return choice;
}

int file_menu(){
return 4;
}

int main_menu()
{
loadCategories();

cout << categories.size();
int resp;
int response;
cout << "Select a category: \n";
cout << "Math Operations [1]\n";
cout << "File Management [2]\n";
cin >> resp;
switch(resp) {
case 1: response = math_menu();
    break;
case 2: response = file_menu();
    break;
default: response = 0;
}
return response;
}

