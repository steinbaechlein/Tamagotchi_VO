#include "tamagotchi.h"
#include "main.h"
//#include <fstream>
//#include <iostream>
//#include <iomanip>

// Constructeurs // Initialisation des membres de la classe
Tamagotchi::Tamagotchi(std::string& PetName): PetName(PetName), Happiness(50), Hygiene(50), Hungry(50), Health(100), Tired(100), Polite(50), daysAlive(0), Aged(0) {
}

// Méthode d'agrementation d'une action
std::string Tamagotchi::getPetName() {
    return PetName;
}

// Initialisation de votre Tamagotchi
void Tamagotchi::displayStatus() {
    std::cout << "CARACTERISTIQUES " << PetName << " :" << std::endl;
    std::cout << std::endl;

    // Utilisation d'espaces fixes et d'une largeur fixe pour aligner correctement les valeurs
    std::cout << std::setw(5)  
              << " Bonheur : " << std::setw(7) << Happiness << "/100" << std::setw(17)
              << " Faim : " << std::setw(5) << Hungry << "/100" << std::endl;

   std::cout << std::setw(5)          
              << " Education : " << std::setw(5) << Polite << "/100" << std::setw(17)
              << " Hygiene : " << std::setw(5) << Hygiene << "/100" << std::endl;
    
    std::cout << std::setw(5) 
              << " Sante : " << std::setw(9) << Health << "/100" << std::setw(17)
              << " Fatigue : " << std::setw(5) << Tired << "/100" << std::endl;
}

// Initialisation de votre Tamagotchi
void Tamagotchi::displayExpression() {
    if (Happiness > 49) {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "    ()_()"                                    << std::endl;
        std::cout << "    (^.^)             " << actionMessage      << std::endl;
        std::cout << "   '(')(')'"                                  << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }

        if (Happiness < 49 && Happiness >= 25) {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "    ()_()"                                    << std::endl;
        std::cout << "    (-_-)               " << actionMessage    << std::endl;
        std::cout << "   '(')(')'"                                  << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }

        if (Happiness < 25 && Happiness >= 0) {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "   (\\(\\"                                    << std::endl;
        std::cout << "   ( -.-)               " << actionMessage    << std::endl;
        std::cout << "   o_(')(')"                                  << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }

        if (Happiness < 0 ) {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "    ()_()"                                    << std::endl;
        std::cout << "    (X_X)               " << actionMessage    << std::endl;
        std::cout << "   '(')(')'"                                  << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }
}

// Initialisation de votre Tamagotchi
void Tamagotchi::FonctionChoice() {
    std::cout << "                Entrez votre Choix : ";
    std::cin  >> userFonctionChoice;
    std::cout << std::endl;
    std::cout << "═══════════════════════════════════════════════════════" << std::endl;
    std::cout << std::endl;

std::string newPetName;
        switch (userFonctionChoice) {
            case 1:
                Play();
                actionMessage = "*** " + PetName + " à joue ! ***";
                break;
            case 2:
                Eat();
                actionMessage = "*** " + PetName + " à mange ! ***";
                break;
            case 3:
                Educate();
                actionMessage = "*** " + PetName + " à ete eduque ! ***";
                break;
            case 4:
                Clean();
                actionMessage = "*** " + PetName + " à ete nettoyé ! ***";
                break;
            case 5:
                Cure();
                actionMessage = "*** " + PetName + " à ete soigne ! ***";
                break;
            case 6:
                Sleep();
                actionMessage = "*** " + PetName + " à dormi ! ***";
                break;
            case 0:
            saveGame();
            std::cout                                                                << std::endl;
            std::cout << "    ╔═════════════════════════════════════════════╗    "   << std::endl;
            std::cout << "    ║ Voulez-vous commencer une nouvelle partie ? ║    "   << std::endl;
            std::cout << "    ╚═════════════════════════════════════════════╝    "   << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout << "                       ()_()"                              << std::endl;
            std::cout << "                       (º.º)"                              << std::endl;
            std::cout << "                     '(')-(')'"                            << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout << "  ╔════════════════════╗   ╔════════════════════════╗   " ;
            std::cout <<  " ║ 1. Nouvelle Partie ║   ║ 2. Continuer la Partie ║   " ;
            std::cout <<  " ╚════════════════════╝   ╚════════════════════════╝   " ;
            std::cout                                                                << std::endl;
            std::cout                                                                << std::endl;
            std::cout << "                  Entrez votre Choix : ";
            std::cin >> saveGameChoice ;                                               
            std::cout                                                                << std::endl;
            std::cout << "═══════════════════════════════════════════════════════"   << std::endl;

            switch (saveGameChoice) {
                case 1:
                    std::cout << std::endl;
                    std::cout << "Entrez le nom de votre nouveau Tamagotchi : ";
                    std::cin >> newPetName;
                    PetName = newPetName;
                    daysAlive = 0;
                    Happiness = 50;
                    Hygiene = 50;
                    Hungry = 50;
                    Health = 100; 
                    Tired = 100;
                    Polite = 50;
                    Aged = 0;
                    break;
                case 2:
                    loadGame();
                    std::cout << "Partie chargee" << std::endl;
                    break;
            }
            break;
    }
}

void Tamagotchi::MenuChoice() {
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout << "           ╔══════════════════════════════╗            " << std::endl;
    std::cout << "           ║                              ║            " << std::endl;
    std::cout << "           ║     MY TAMAGOTCHI POCKET     ║            " << std::endl;
    std::cout << "           ║                              ║            " << std::endl;
    std::cout << "           ╚══════════════════════════════╝            " << std::endl;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;                                                                  
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout << "                       ()_()"                            << std::endl;
    std::cout << "                       (^_^)"                            << std::endl;
    std::cout << "                     '(')-(')'"                          << std::endl;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout << "  ╔════════════════════╗   ╔═══════════════════════╗  "  << std::endl;
    std::cout << "  ║ 1. Nouvelle Partie ║   ║ 2. Partie Sauvegardee ║  "  << std::endl;
    std::cout << "  ╚════════════════════╝   ╚═══════════════════════╝  "  << std::endl;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout << "                Entrez votre Choix : ";
    std::cin >> userMenuChoice ;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout                                                              << std::endl;
    std::cout << "═════════════════════════════════════════════ V0.81 ═══" << std::endl;
    std::cout                                                              << std::endl;

    switch (userMenuChoice) {
        case 1:
            std::cout << "Entrez le nom de votre Tamagotchi : ";
            std::cin >> PetName;
            std::cout << std::endl;
            break;
    case 2:
            if (saveExists) {
                loadGame(); 
            } else {
                std::cout << "Entrez le nom de votre Tamagotchi : ";
                std::cin >> PetName;
                std::cout << std::endl;
            }
            break;
        default:
            std::cout << "Entrez le nom de votre Tamagotchi : ";
            std::cin >> PetName;
            std::cout << std::endl;
            std::cout << "Choix invalide. Démarrage d'une nouvelle partie." << std::endl;
            // Par défaut, vous pouvez ajouter des actions ici pour démarrer une nouvelle partie ou autre chose
            break;
    }
}
// Initialisation de votre Tamagotchi

void Tamagotchi::displayMenu() {
    std::cout << " FONCTIONS " << PetName << " :" << std::endl;
    std::cout << std::endl;

    // Affiche les options du menu
    std::cout << std::setw(5) 
              << " 1. Jouer avec " << PetName << std::setw(20)
              << " 2. Nourrir " << PetName << std::endl; 
 
    std::cout << std::setw(5)           
              << " 3. Eduquer " << PetName << std::setw(24)
              << " 4. Nettoyer " << PetName << std::endl;
   
    std::cout << std::setw(5) 
              << " 5. Soigner " << PetName << std::setw(22)
              << " 6. Border " << PetName << std::endl;
              
    std::cout << std::endl;
    std::cout << "           0. Quitter et Sauvegarder" << std::endl;
    std::cout << std::endl;
    std::cout << "═══════════════════════════════════════════════════════" << std::endl;
    std::cout << std::endl;
    actionMessage.clear(); 
}

// Initialisation de votre Tamagotchi
void Tamagotchi::saveGame() {
    std::ofstream file("savegames.txt");
    if (file.is_open()) {
        file << PetName << std::endl;
        file << daysAlive << " " << Happiness << " " << Hygiene << " " << Polite << " " << Hungry << " " << Health << " " << Tired << " " << Aged << std::endl;
        file.close();
    } else {
        std::cout << "Impossible de sauvegarder la partie" << std::endl;
    }
}

// Initialisation de votre Tamagotchi
void Tamagotchi::loadGame() {
    std::ifstream file("savegames.txt");
    if (file.is_open()) {
        saveExists = file.good();
        file >> PetName >> daysAlive >> Happiness >> Hygiene >> Polite >> Hungry >> Health >> Tired >> Aged;
        file.close();
    } else {
        std::cout << "Aucune partie sauvegardee" << std::endl;
    }
}

// Méthode d'agrementation d'une action
void Tamagotchi::Play() {
    Happiness += 30;
    Hygiene += 10;
    Hungry -= 10;
    Health += 5;
    Tired -= 5;

    // Assurez-vous de gérer les limites des caractéristiques
    if (Happiness > 100) {
        Happiness = 100;
    } 
    else if (Happiness < 0) {
             Happiness = 0;
    }

    if (Hygiene > 100) {
        Hygiene = 100;
    } 
    else if (Hygiene < 0) {
             Hygiene = 0;
    }

    if (Hungry > 100) {
        Hungry = 100;
    } 
    else if (Hungry < 0) {
             Hungry = 0;
    }

    if (Health > 100) {
        Health = 100;
    } 
    else if (Health < 0) {
             Health = 0;
    }

    if (Tired > 100) {
        Tired = 100;
    } 
    else if (Tired < 0) {
             Tired = 0;
    }

    if (Polite > 100) {
        Polite = 100;
    } 
    else if (Polite < 0) {
             Polite = 0;
    }
}

// Méthode d'agrementation d'une action
void Tamagotchi::Clean() {
    Happiness += 5;
    Hygiene += 30;
    Health += 5;
    Tired -= 10;

    // Assurez-vous de gérer les limites des caractéristiques
    if (Happiness > 100) {
        Happiness = 100;
    } 
    else if (Happiness < 0) {
             Happiness = 0;
    }

    if (Hygiene > 100) {
        Hygiene = 100;
    } 
    else if (Hygiene < 0) {
             Hygiene = 0;
    }

    if (Hungry > 100) {
        Hungry = 100;
    } 
    else if (Hungry < 0) {
             Hungry = 0;
    }

    if (Health > 100) {
        Health = 100;
    } 
    else if (Health < 0) {
             Health = 0;
    }

    if (Tired > 100) {
        Tired = 100;
    } 
    else if (Tired < 0) {
             Tired = 0;
    }

    if (Polite > 100) {
        Polite = 100;
    } 
    else if (Polite < 0) {
             Polite = 0;
    }
 }

// Méthode d'agrementation d'une action
void Tamagotchi::Educate() {
    Happiness -= 20;
    Hygiene += 15;
    Health += 10;
    Polite += 10;
    Hungry -= 10;
    Tired -= 15;

    // Assurez-vous de gérer les limites des caractéristiques
    if (Happiness > 100) {
        Happiness = 100;
    } 
    else if (Happiness < 0) {
             Happiness = 0;
    }

    if (Hygiene > 100) {
        Hygiene = 100;
    } 
    else if (Hygiene < 0) {
             Hygiene = 0;
    }

    if (Hungry > 100) {
        Hungry = 100;
    } 
    else if (Hungry < 0) {
             Hungry = 0;
    }

    if (Health > 100) {
        Health = 100;
    } 
    else if (Health < 0) {
             Health = 0;
    }

    if (Tired > 100) {
        Tired = 100;
    } 
    else if (Tired < 0) {
             Tired = 0;
    }

    if (Polite > 100) {
        Polite = 100;
    } 
    else if (Polite < 0) {
             Polite = 0;
    }
}

// Méthode d'agrementation d'une action
void Tamagotchi::Eat() {
    Happiness += 5;
    Hungry += 25;
    Health += 15;
    Tired -= 10;

    // Assurez-vous de gérer les limites des caractéristiques
    if (Happiness > 100) {
        Happiness = 100;
    } 
    else if (Happiness < 0) {
             Happiness = 0;
    }

    if (Hygiene > 100) {
        Hygiene = 100;
    } 
    else if (Hygiene < 0) {
             Hygiene = 0;
    }

    if (Hungry > 100) {
        Hungry = 100;
    } 
    else if (Hungry < 0) {
             Hungry = 0;
    }

    if (Health > 100) {
        Health = 100;
    } 
    else if (Health < 0) {
             Health = 0;
    }

    if (Tired > 100) {
        Tired = 100;
    } 
    else if (Tired < 0) {
             Tired = 0;
    }

    if (Polite > 100) {
        Polite = 100;
    } 
    else if (Polite < 0) {
             Polite = 0;
    }
}

// Méthode d'agrementation d'une action
void Tamagotchi::Cure() {
    Happiness -= 5;
    Health += 30;
    Hungry += 25;
    Hygiene += 5;
    Tired += 25;

    // Assurez-vous de gérer les limites des caractéristiques
    if (Happiness > 100) {
        Happiness = 100;
    } 
    else if (Happiness < 0) {
             Happiness = 0;
    }

    if (Hygiene > 100) {
        Hygiene = 100;
    } 
    else if (Hygiene < 0) {
             Hygiene = 0;
    }

    if (Hungry > 100) {
        Hungry = 100;
    } 
    else if (Hungry < 0) {
             Hungry = 0;
    }

    if (Health > 100) {
        Health = 100;
    } 
    else if (Health < 0) {
             Health = 0;
    }

    if (Tired > 100) {
        Tired = 100;
    } 
    else if (Tired < 0) {
             Tired = 0;
    }

    if (Polite > 100) {
        Polite = 100;
    } 
    else if (Polite < 0) {
             Polite = 0;
    }
}

// Méthode d'agrementation d'une action
void Tamagotchi::Sleep() {
    Tired += 50;
    Health += 10;
    Hygiene -= 10;
    Hungry -= 15;

    // Assurez-vous de gérer les limites des caractéristiques
    if (Happiness > 100) {
        Happiness = 100;
    } 
    else if (Happiness < 0) {
             Happiness = 0;
    }

    if (Hygiene > 100) {
        Hygiene = 100;
    } 
    else if (Hygiene < 0) {
             Hygiene = 0;
    }

    if (Hungry > 100) {
        Hungry = 100;
    } 
    else if (Hungry < 0) {
             Hungry = 0;
    }

    if (Health > 100) {
        Health = 100;
    } 
    else if (Health < 0) {
             Health = 0;
    }

    if (Tired > 100) {
        Tired = 100;
    } 
    else if (Tired < 0) {
             Tired = 0;
    }

    if (Polite > 100) {
        Polite = 100;
    } 
    else if (Polite < 0) {
             Polite = 0;
    }
}

// Méthode qui retourne la valeur de l'attribut
int Tamagotchi::getHappiness() {
    return Happiness;
}

// Méthode qui retourne la valeur de l'attribut
int Tamagotchi::getHygiene() {
    return Hygiene;
}

// Méthode qui retourne la valeur de l'attribut
int Tamagotchi::getPolite() {
    return Polite;
}

// Méthode qui retourne la valeur de l'attribut
int Tamagotchi::getHungry() {
    return Hungry;
}

// Méthode qui retourne la valeur de l'attribut
int Tamagotchi::getHealth() {
    return Health;
}

// Méthode qui retourne la valeur de l'attribut
int Tamagotchi::getTired() {
    return Tired;
}

// Méthode qui retourne la valeur de l'attribut
int Tamagotchi::getAged() {
    return Aged;
}

// Méthode qui retourne la valeur booléen
bool Tamagotchi::getIsAlive() {
    return (Hungry > 0 && Happiness > 0 && Tired > 0 && Health > 0);
}


