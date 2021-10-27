#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void printVec(vector<int> vec, int leng) {       //Imprime o vetor
    cout << "[ ";
    for(int i = 0; i < leng; i++){
        cout << vec[i] << " ";
    }
    cout << "]" << endl; 
}



void pyramid(vector<int> vec, int leng){        //faz a operação da piramide
    if(leng != 1) {
        vector<int> vecCopy;
        for(int i = 0; i < leng-1; i++){
            vecCopy.push_back(vec[i] + vec[i+1]);
        }
        pyramid(vecCopy, vecCopy.size());
    }
    printVec(vec,leng);
}

int main(void){

    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> vec;
    int value;

    while(ss >> value)                          //recebe o vetor
        vec.push_back(value);

    pyramid(vec, vec.size());                   //chama a função piramide

    return 0;
}