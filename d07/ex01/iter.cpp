#include <iostream>
#include <string>


template<typename T, typename F>
void    iter(T *ptr, int len, F f(T))
{
   for (int n = 0; n < len; n++)
   {
       f(ptr[n]);
   }
}

template <typename T>
void    print(T e)
{
    std::cout << e << std::endl;
}

int main(void)
{
    int     list1[8] = {1, 3 ,5 ,6 ,7, 2, 4, 21};
    char     list2[8] = {'1', 'A' ,'A' ,'W', 'Q', 'B', 'T', '*'};


    ::iter(list1, 8, ::print<int>);
    std::cout << "------------------" << std::endl;
    ::iter(list2, 8, ::print<char>);



    return 0;
}