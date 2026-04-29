#include <iostream>
using namespace std;

bool isPrime(long Zahl) {
    if (Zahl == 2)
        return true;
    if ((Zahl % 2) == 0) {
        return false;
    }
     else {
         for (int i = 3; i < Zahl; i+=2) {
             if ((Zahl % i) == 0) {
                 return false;
             }
         }
     }
    return true;
}
