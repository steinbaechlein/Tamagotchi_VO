#include "main.h"

#ifndef TAMAGOTCHI_H          
#define TAMAGOTCHI_H          

#include <string>               

class Tamagotchi {                
private:
    std::string actionMessage;
    std::string PetName;
    bool saveExists; 
    int userFonctionChoice;
    int userMenuChoice;
    int saveGameChoice;
    int daysAlive;
    int Happiness;
    int Hygiene;
    int Polite;
    int Hungry;
    int Health;
    int Tired;
    int Aged;

public:
    Tamagotchi(std::string& PetName);
    std::string getPetName();
    void displayExpression();
    void FonctionChoice();
    void displayStatus();
    void displayMenu();
    void MenuChoice();
    void saveGame();
    void loadGame();
    void Educate();
    void Sleep();
    void Clean();
    void Cure();
    void Play();
    void Eat();

    bool getIsAlive();
    int getHappiness();
    int getHygiene();
    int getPolite();
    int getHungry();
    int getHealth();
    int getTired();
    int getAged();
};

#endif
