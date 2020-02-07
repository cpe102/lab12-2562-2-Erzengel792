#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double A[],int B,double C[]){
double zigma = 0;
for (int i = 0;i<B;i++){
C[0] += A[i];
     }
   C[0] = C[0]/B;
for(int z = 0;z<B;z++){ 
zigma += pow(A[z],2);
} 
C[1]= sqrt(1/(float)B*zigma-pow(C[0],2));
for(int count = 0;count < B;count++){
if(A[count]>C[2]) C[2] = A[count];
if(A[count]<C[3]) C[3] = A[count];
}

}


