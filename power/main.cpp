//
//  main.cpp
//  power
//
//  Created by apple on 13-9-22.
//  Copyright (c) 2013年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
double power(double x,int y)
{
    if(y==0) return 1.0;
    else return power(x,y-1)*x;
    
    }
int main()
{
    int y;
    double x;
    cin>>x;
    cin>>y;
    cout<<power(x,y)<<endl;
    return 0;
}
