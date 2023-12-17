#ifndef MAIN_H          
#define MAIN_H         

#include "tamagotchi.h"     
#include <string>            
#include <iostream>          
#include <iomanip>           
#include <fstream>

class Game {                   
public:                            
    Game(std::string PetName);      
    void run();                     
private:                 
    Tamagotchi myPet;    
};

#endif                          