#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int num,a,b,c;
    int count = 0, sum = 0, max = 0;;
    for (int i = 1; i < 10; i++){
        for (int j = 0; j < 10; j++){
            for (int h = 0; h < 10; h++){
                num = 100 * i + 10 * j + h;
                a = i + j + h;
                b = i * j * h;
                c = i * i + j * j + h * h;
                if (isPrime(num) && isPrime(a) && isPrime(b) && isPrime(c)){
                    ++count;
                    sum += num;
                    max = num;
                }
            }
        }
    }
    cout << count << endl << sum << endl << max << endl;
}

