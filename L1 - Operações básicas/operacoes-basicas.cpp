#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

 int sum(vector<int> vet, int tam) {   //Somar o vetor
	if (tam == 1) {
 		return vet[tam-1];
	 }
 	else {
 		return vet[tam-1] + sum(vet, tam-1);
	}
 }
 
 int mult(vector<int> vet, int tam) {     //Multiplicar o vetor
	if (tam == 1) {
 		return vet[tam-1];
	 }
 	else {
 		return vet[tam-1] * mult(vet, tam-1);
	}
 }

void imprimirVetor(vector<int> vet, int tam) {       
    if (tam == 1) {
        cout << "[ " << vet[tam-1]; 
    } else {
    	imprimirVetor (vet, tam-1);
		cout << " " << vet[tam-1];
    }
}

int min(vector<int> vet, int tam){
    if(tam==1){
        return vet[tam-1];
    }
    else {
        int aux = min(vet, tam-1);
        if(vet[tam-1]< aux){
            return vet[tam-1];
        }else return aux;
    }
}

void rvet(vector<int> vet, int tam) {       
    if (tam == 1) {
        cout <<" "<< vet[tam-1]; 
    } else {
        cout <<" "<< vet[tam-1];
    	rvet (vet, tam-1);
    }
}

void inverterVetor(vector<int> &vet, int i, int tam) {
    int aux;
    
    if (i < tam){
        aux = vet[i];
        vet[i] = vet[tam-1];
        vet[tam-1] = aux;
        inverterVetor(vet, i+1, tam-1);
    }
}

int main(void){

    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> vet;
    int value;
    while(ss >> value)
        vet.push_back(value);
    
 	cout << "vet : " ;
 		imprimirVetor(vet, vet.size());
		cout << " ]" << endl; 
		
		cout << "rvet: [";
		rvet(vet, vet.size());
		cout << " ]"<<endl;

 		cout << "sum : " << sum(vet, vet.size()) << endl;
 	
 		cout << "mult: " << mult(vet, vet.size()) << endl;
 		
 		cout << "min : " << min(vet, vet.size()) << endl;

        cout << "inv : ";
		inverterVetor(vet,0,vet.size());
 	    imprimirVetor(vet , vet.size());
		cout << " ]" << endl; 

 	return 0;
 	}