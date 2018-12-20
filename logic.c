//LOGIC BY Louis
//First Release
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>


bool orGate(bool A, bool B) {
    if (A || B)
        return true;
    else
        return false;
}

bool andGate(bool A, bool B) {
    if (A && B)
        return true;
    else
        return false;
}

bool negate(bool A) {
    return !A;
}

bool xorGate(bool A, bool B) {
    if (A^B)
        return true;
    else
        return false;
}

bool norGate(bool A, bool B){
    return negate(orGate(A,B));
}

bool nandGate(bool A, bool B) {
    return negate(andGate(A,B));
}
bool xnorGate(bool A, bool B) {
    return negate(xorGate(A, B));
}
void printBool(bool b) {
    if (b == true)
        printf("True \n");
    else
        printf("False \n");
}
int main(){}