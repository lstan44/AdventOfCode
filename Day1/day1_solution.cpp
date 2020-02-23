#include<iostream>
#include <fstream>
#include <string>
using namespace std;

long int getFuelAmount(ifstream &inputFile){
    long int sum = 0;
    string file = "";
    while(!inputFile.eof()){
        getline(inputFile,file);
        sum += (stoi(file) /3 ) -2;
    }

    return sum;
}
int main(){
    ifstream inputFile("day1_input.txt");

    cout<< getFuelAmount(inputFile) <<endl;
    
}