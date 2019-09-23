/*
PPPPPPPPPPPPPPPPP        IIIIIIIIII       1111111        77777777777777777777             CCCCCCCCCCCCC
P::::::::::::::::P       I::::::::I      1::::::1        7::::::::::::::::::7          CCC::::::::::::C
P::::::PPPPPP:::::P      I::::::::I     1:::::::1        7::::::::::::::::::7        CC:::::::::::::::C
PP:::::P     P:::::P     II::::::II     111:::::1        777777777777:::::::7       C:::::CCCCCCCC::::C
  P::::P     P:::::P       I::::I          1::::1                   7::::::7       C:::::C       CCCCCC
  P::::P     P:::::P       I::::I          1::::1                  7::::::7       C:::::C
  P::::PPPPPP:::::P        I::::I          1::::1                 7::::::7        C:::::C
  P:::::::::::::PP         I::::I          1::::l                7::::::7         C:::::C
  P::::PPPPPPPPP           I::::I          1::::l               7::::::7          C:::::C
  P::::P                   I::::I          1::::l              7::::::7           C:::::C
  P::::P                   I::::I          1::::l             7::::::7            C:::::C
  P::::P                   I::::I          1::::l            7::::::7              C:::::C       CCCCCC
PP::::::PP               II::::::II     111::::::111        7::::::7                C:::::CCCCCCCC::::C
P::::::::P               I::::::::I     1::::::::::1       7::::::7                  CC:::::::::::::::C
P::::::::P               I::::::::I     1::::::::::1      7::::::7                     CCC::::::::::::C
PPPPPPPPPP               IIIIIIIIII     111111111111     77777777                         CCCCCCCCCCCCC
Laimonas
*/
#include <iostream>
using namespace std;
long long Palindromas(long long n);
int main()
{
    int kiek=0;
    for (long long i = 1;  ; i++){

        if (Palindromas(i) && Palindromas(i*i))
           {
            kiek++;
            cout <<kiek<<" "<< i << endl;
            if(kiek==40)
            break;
           }
    }
    return 0;
}
long long Palindromas(long long n)
{
    long long sk = 0;
    for (long long i = n; i > 0; i /= 10)
        sk = sk*10 + i%10;

    return (n==sk);
}



