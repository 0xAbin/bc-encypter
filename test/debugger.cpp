//
// Created by 0xAbin on 30/07/24.
//
#include<iostream>

int main ()

{
#if __cplusplus == 201703L
    std::cout << "C++17\n";
#elif __cplusplus == 201402L
    std::cout << "C++14\n";
#elif __cplusplus == 201103L
    std::cout << "C++11\n";
#elif __cplusplus == 199711L
    std::cout << "C++98\n";
#else
    std::cout << "pre-standard C++\n";
#endif
    return 0;
}