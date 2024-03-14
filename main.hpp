#include <iostream>
using namespace std;

void getTwoValues(int&, int&);
int getNextPrime(int);
int getPrevPrime(int);

void getTwoValues(int &begin, int &end)
{
    do {
        cin >> begin >> end;
    }while (begin > end);
}

int getNextPrime(int begin)
{
        int i, j, prime1;
        for (i = begin + 1; true; i++){
                bool flag = 1;
                for (j=2; j <=(i / 2); j++){
                        if (i % j == 0){
                                flag = 0;
                        }
                }
                if (flag) {
                                prime1 = i;
                                break;
                        }
                }
        return prime1;
}

int getPrevPrime(int end)
{
    int i, j, prime2;
    for (i = end - 1; true; i--){
            bool flag = 1;
            for (j=2; j <=(i / 2); j++){
                    if (i % j == 0){
                        flag = 0;
                    }
            }
            if (flag) {
                        prime2 = i;
                        break;
                    }
    }
        return prime2;

}