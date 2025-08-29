#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class COMPLEJO{
    public:
        int RE;
        int IM;
        void VER();
};
void COMPLEJO::VER(){
    cout << RE;
    if(IM < 0){
        cout << " - " << -IM << "i";
    }
    else{
        cout << " + " << IM << "i";
    }

}

COMPLEJO CUAD(COMPLEJO);
int CUAD(int);
float CUAD(float);

int main(){
    int A, B;
    A = 25;
    B = CUAD(A);
    cout << "\n\nEl cuadrado de " << A << "   Es   " << B;

    float F, G;
    F = 7.25;
    G = CUAD(F);
    cout << "\n\nEl cuadrado de " << F << "   Es   " << G;

    COMPLEJO X, Y;
    X.RE = 8;
    X.IM = 14;
    Y = CUAD(X);
    cout << "\n\nEl cuadrado de ";
    X.VER();
    cout << "    ES    ";
    Y.VER();

    printf("\n\nFIN DEL PROGRAMA");
    return 0;
}


int CUAD(int X){
    return X*X;
}
float CUAD(float X){
    return X*X;
}
COMPLEJO CUAD(COMPLEJO X){
    COMPLEJO W;
    W.RE = X.RE * X.RE - X.IM * X.IM;
    W.IM = 2 * X.RE * X.IM;
    return W;
}
