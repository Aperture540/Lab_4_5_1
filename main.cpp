/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agendron
 *
 * Created on September 26, 2017, 2:42 PM
 */

#include <string> 
#include <iostream>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    
    // manipulate the sentence here
    
    for (int i = 0; i < sentence.length();) 
    {
        if(sentence.at(i) == ' ' && sentence.at((i)-1) == ' ')
        {
            sentence.erase(i,1);
        }
        else
        {
            i++;
        }
    }
    
    std::cout << sentence << "\n";
}


