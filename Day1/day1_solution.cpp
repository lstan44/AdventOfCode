#include<iostream>
#include <fstream>
#include <string>
using namespace std;



int main(){
    ifstream inputFile("day1_input.txt");
    string file = "";

    int sum = 0;
    while(!inputFile.eof()){
        getline(inputFile,file);
        sum += (stoi(file) /3 ) -2;
    }

    cout<<sum <<endl;
}