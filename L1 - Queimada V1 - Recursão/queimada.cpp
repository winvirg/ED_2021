#include <iostream>
#include <vector>
using namespace std;

int nl = 0, nc = 0, lfire = 0, cfire = 0;
char mat[1000][1000];

void show(){
    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++){
            cout << mat[l][c];

        }
        cout << endl;
    }


}

void tocar_fogo(int l, int c){

  if(mat[l][c] == '#'){
      mat[l][c] = 'o';
      if(c+1 < nc && mat[l][c+1]== '#'){
          tocar_fogo(l, c+1);

      }
    if(c-1 >= 0 && mat[l][c-1] == '#'){
        tocar_fogo(l,c-1);
    }

    if(l-1 >=0 && mat[l-1][c] == '#' ){
        tocar_fogo(l-1,c);
    }

    if(l+1 < nl && mat[l+1][c] == '#'){
        tocar_fogo(l+1, c);
    }
  }

    //TODO faca seu codigo aqui

/*
direita -> l, c+1

esquerda -> l, c-1

cima -> l-1, c

baixo -> l+1, c*/
}

int main(){

    cin >> nl >> nc >> lfire >> cfire;

    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++){
            cin >> mat[l][c];

        }

    }

    //show();
    tocar_fogo(lfire, cfire);
     show();
}