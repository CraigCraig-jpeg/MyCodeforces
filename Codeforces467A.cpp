#include <iostream>
#include <string>
/* 
George has recently entered the BSUCP (Berland State University 
 * for Cool Programmers). 
 * George has a friend Alex who has also entered the university.
 Now they are moving into a dormitory.

George and Alex want to live in the same room. The dormitory has
 n rooms in total.
 At the moment the i-th room has pi people living in it and the 
  * room can accommodate qi people in total (pi ≤ qi). Your task 
  * is to count how many rooms has free place for both George and Alex.
Input

The first line contains a single integer n (1 ≤ n ≤ 100) — 
 * the number of rooms.

The i-th of the next n lines contains two integers pi and qi 
 * (0 ≤ pi ≤ qi ≤ 100) — the number of people who already live in
 the i-th room and the room's capacity.
  * */ 
int main()
{
    int a ;
    static int d = 0;
    static int e = 0;
    
    std::cout << "input of how many rooms" << std::endl;
    std::cin >> a;
    
  for(int i = 0; i < a;i++)
      {
        //declaration of operations 
        std::cout << "input of rooms run:" << e <<std::endl;
        int b , c ;
        std::cout << "input first " << std::endl;
        std::cin >> b ;
        std::cout << "input second" << std::endl;
        std::cin >> c ;
        if(b < c)
        {
            d++;
        }
            e++ ;
      }
      std::cout << d << std::endl ; 
      std::cin.get() ; 
}
