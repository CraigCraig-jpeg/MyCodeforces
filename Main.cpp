#include <iostream>


int main()
{
    int n;
    int k;
    int d;
    
    std::cin >> n , k;
    
    d = n;
    for(int i = 0;i < n ;i++)
    {
         int c;
        std::cin >> c;
      
        if(c <= k) 
        d--;
    }
    
    std::cout << n << std::endl;
}