#include <iostream>
#include <fstream>
using namespace std;

void fileWrite(string filename, string text){
    ofstream myfile (filename);
    if (myfile.is_open()) {
        myfile << text;
        }
    myfile.close();
}

void fileOpen(string filename){
    string line;
    ifstream myfile (filename);
    if(myfile.is_open()){
        while(getline(myfile,line)){
            cout << line << '\n';
        }
    }
    myfile.close();
}

void appendFile(string filename, string text){
    ofstream outfile;
    outfile.open(filename, ios_base::app);
    outfile << text;
    outfile.close();
}