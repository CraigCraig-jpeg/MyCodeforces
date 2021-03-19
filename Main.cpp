#include <iostream>
#include <string>


int main()
{ 
    signed int x = 0;
    int statements;
    int a;
    std::cin>>a;
    
            char b[3];
            char name2[2] = {'+' ,'-'};
            
               //user in
               
                
                //sorting of bit
         
  for(int i = 0;i < a;i++)  
        { 
            
                    std::cin>>b;
                
            
            if(name2[0] == b[0] && name2[0] == b[1]
            || name2[0] == b[1] && name2[0] == b[2])
        {
            x += 1;
        }
            if(name2[1] == b[0] && name2[1] == b[1] 
            || name2[1] == b[1] && name2[1] == b[2])
            {
                x -= 1;
            }
            
        }
   
std::cout << x << std::endl;

    std::cin.get();
}