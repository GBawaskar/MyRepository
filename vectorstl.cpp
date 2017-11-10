//
//  vectorstl.cpp
//  
//
//  Created by testuser on 06/02/16.
//
//

#include "vectorstl.h"
#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;
void vectlist()
{
    std::string str("ganesh");
    std::vector<std::string> name;
    name.push_back("aaa");
    name.push_back("bbb");
    name.push_back("rrr");
    name.push_back("ttte");
    name.push_back("ggg");
    name.push_back("hhh");
    
    std::cout<< "\n" <<"*****Vector Itr::Reverse Iterator****"<< "\n";
    std::vector<std::string>::reverse_iterator itr;
    for (itr = name.rbegin(); itr != name.rend(); itr++)
        cout << *itr << "\n";
    
    printf("\nFront and back: \n");
    cout << name.front() << "\n";
    cout << name.back() << "\n";
    printf("\nObject at index: \n");
    cout << name.at(3) << "\n";
    
    //
    // Iteration of vector using for loop.
    //
    for (string str1 : name)
        cout << str1.length()<< " "<< str1.c_str() << "\n";
}


void vectlistIterator()
{
    std::string str("ganesh");
    std::vector<std::string> name;
    name.push_back("aaa");
    name.push_back("bbb");
    name.push_back("rrr");
    name.push_back("ttte");
    name.push_back("ggg");
    name.push_back("hhh");
    std::cout<< "\n" <<"*****Vector Itr::Reverse Iterator****"<< "\n";
    std::vector<std::string>::reverse_iterator itr;
    itr = name.rbegin();
    //name.push_back("ggg");
    for (; itr != name.rend(); itr++)
        cout << "Name:"<<*itr << "\n";
}





