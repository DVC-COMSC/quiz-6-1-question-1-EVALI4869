#include <iostream>
using namespace std;

int getTwoValues(int, int);
int getNextPrime(int);
int getPrevPrime(int);

int getTwoValues(int begin, int end)
{
    cin >> begin >> end;
        if (begin > end){
                return 1;
        }
        return 0;
}

int getNextPrime(int begin)
{
        int i, j, prime1;
        for (i = begin; true; i++){
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
    for (i = end; true; i--){
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