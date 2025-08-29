#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; // para que no tenga q poner en todos los cout el std::, osea cada vez que yo no indique la clase de algo va a ser standard(std)

class COMPLEJO{
    public:
        int RE;
        int IM;
        void VER();
};
void COMPLEJO::VER(){
    cout << RE;
    if(IM < 0)
        cout << " - " << -IM << "i";
    else
        cout << " + " << IM << "i";

}
COMPLEJO CUAD(COMPLEJO);
COMPLEJO CUAD(COMPLEJO X){
    COMPLEJO W;
    W.RE = X.RE * X.RE - X.IM * X.IM;
    W.IM = 2 * X.RE * X.IM;
    return W;
}


COMPLEJO operator + (COMPLEJO, COMPLEJO);
COMPLEJO operator + (int, COMPLEJO);
COMPLEJO operator + (COMPLEJO, int);

COMPLEJO operator + (COMPLEJO X, COMPLEJO Y){
    COMPLEJO W;
    W.RE = X.RE + Y.RE;
    W.IM = X.IM + Y.IM;
    return W;

}
COMPLEJO operator + (int X, COMPLEJO Y){
    COMPLEJO W;
    W.RE = X + Y.RE;
    W.IM = X + Y.IM;
    return W;

}
COMPLEJO operator + (COMPLEJO X, int Y){
    COMPLEJO W;
    W.RE = Y + X.RE;
    W.IM = Y + X.IM;
    return W;

}
