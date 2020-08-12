#include<iostream>
int Add(int, int);
int main()  
{  
    int r,a;
    std::cin>>r>>a;
    std::cout<< Add(r,a);  
    return 0;  
}  
int Add(int x, int y)  
{  
    int carry;
    while (y != 0)  
    {  
      carry = x & y;
      x = x ^ y;
      y = carry << 1;
        // Your code goes here
    }  
    return x;  
}  
