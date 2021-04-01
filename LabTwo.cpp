#include <iostream>
#include <cmath>
using namespace std;

void populateArray(int A[101][101],int N){
    int i,j;
    for(int d = 0; d < N; d++){
        i = rand()%100;
        j = rand()%100;
        if(A[i][j] == 0){
            A[i][j] = 1;
        }
        else{
            A[i][j] = 1;
        }
        cout << i <<" "<< j;
    }
}

int main(){
    int i,j;
    int A[101][101];
    populateArray(A, 200);
}

