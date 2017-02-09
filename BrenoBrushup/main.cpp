//
//  main.cpp
//  BrenoBrushup
//
//  Created by Mauricio Matsubara on 09/02/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1)
        return 1;
    else
        return n * factorial(n-1);
}

int main(int argc, const char * argv[]) {
    cout << factorial(110) << "\n";
    return 0;
}
