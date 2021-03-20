#include <iostream>
#include <string>

int main()
{   

int x;
std::cin >> x;
for(int i = 0;i < x;i++)
{
    std::string var ;
    std::cin >> var;
    
if(var.size() > 10 )
{
int c = var.size() - 2;
char a = var[var.find_first_of(var)];
char b = var[var.find_last_of(var)];
std::cout << a << c << b<<std::endl;
}else{
    std::cout << var << std::endl;
}
}
std::cin.get();
}
