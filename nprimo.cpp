#include <iostream>
#include <list>
void nprimo(void) {
    std :: list <int> A;
    A.push_back(1);
    int testedNumeber;
    while(1) {
        for(std :: list <int> :: iterator it = A.begin(); it != A.end(); it++) {
           if((testedNumeber%(*it))==0) {
               testedNumeber++;
               break;
           }
            if (it == A.end()) {
                if((testedNumeber%(*it))!=0) {
                    A.push_back(testedNumeber);
                    std :: cout << testedNumeber << std :: endl;
                }
            }

        }


    }


}