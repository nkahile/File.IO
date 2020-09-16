#include<iostream>
#include<fstream>
#include<sstream>
#include <stdlib.h>

//using namespace std;

int main() {

    std::ifstream inFile;
    inFile.open("input.txt");

    std::ofstream outFile;
    outFile.open("output.txt");

if (!inFile) {
    std::cout << "Unable To Open This File" << std::endl;
}

else {
        std::cout <<"Go Check Output File"<<std::endl;
    //this function checks the end of file
}

    while(!inFile.eof()){
    std::string firstNum;
    std::string secNum;
    std::string thirdNum;
    std::string word;
    int num1;
    int num2;
    int num3; 
    int sum;
    std::stringstream ss;

    std::getline(inFile,firstNum, ',');
    std::getline(inFile,secNum, ',');
    std::getline(inFile,thirdNum);
    std::getline(inFile,word);

    ss << firstNum << ' ' << secNum << ' ' << thirdNum ;
    ss >> num1 >> num2 >> num3;

    sum = num1 + num2 + num3;
    std::cout << "sum" << sum <<"\n";
    std::cout<< "word : " << word ; 
    if (word !=""){
            for(int i =0; i<(sum-1); i++){
            std::cout << word << ",";
            outFile << word << ",";
            }
        outFile << '\n';
    }

}
    outFile.close();
    inFile.close();

}
