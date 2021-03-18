#include <iostream>


int main()
{
    int n;
    int k;
    int d;
    std::cout << "input" << std::endl;
    std::cin >> n ;
    std::cout << "input" << std::endl;
      std::cin >> k;
    
    d = n;
    for(int i = 0;i < n ;i++)
    {
        std::cout << "input" << std::endl;
         int c;
        std::cin >> c;
      std::cout << "input" << std::endl;
        if(c <= k) 
        d--;
    }
    std::cout << "final answer" << std::endl;
    std::cout << n << std::endl;
}
