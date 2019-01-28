//
//  Controller.hpp
//  ArrayProject
//
//  Created by Shams, Shahriar on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
using namespace std;

class Controller
{
    
public:
    void start();
};

#endif /* Controller_hpp */

void printarray (int arg[], int length) {
    for (int n=0; n<length; ++n)
        cout << arg[n] << ' ';
    cout << '\n';
}

int main()
{
    int firstarray[] = {5, 10, 15};
    int secondarray[] = {2, 4, 6, 8, 10};
    printarray (firstarray,3);
    printarray (secondarray,5);
}
