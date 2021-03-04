//
//  main.cpp
//  Passing by Reference
//
//  Created by Arifeen Mahmud on 5/3/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <iostream>


void swap(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}


int main(){
int a, b;
a = 10;
b = 20;
swap(a,b);
//    int temp;
//    temp = a;
//    a = b;
//    b = temp;
    
printf("%d %d \n",a,b);
}

