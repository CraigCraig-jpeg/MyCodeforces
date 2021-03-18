#include <iostream>

int main()
{
int m , n;
int size ;
const int domino = 2 * 1;
int result;
std::cin >> m;
std::cin >> n;

size = m* n;
result = size/domino;

std::cout << result << std::endl;

}
