/*
    Created by Hryhorii Klochnyk 13.04.2018
    Lviv National University "DVVS" project
*/

#include <iostream>
#include <string>

int main()
{
    std::string names[] = {"Hryhorii, Den Samotos"}; // Write your name here
    std::cout << "Hello World from:\n";
    for(int i = 0; i < (sizeof(names)/sizeof(*names)); i++)
    {
        std::cout << names[i] << std::endl;
    }
    return 0;
}
