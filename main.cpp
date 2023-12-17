#include "main.h"               // Inclus le fichier 'main.h' qui contients les déclarations des variables externes
#include "tamagotchi.h"         // Inclus le fichier 'tamagotchi.h' qui contients les déclarations des variables externes

// Constructeur de la classe 'Game' qui initialise l'attribut 'myPet'
Game::Game(std::string petName) : myPet(petName) {      
}

// Fonction qui ajuste la taille de la hauteur * largeur du terminal
void setConsoleSize(int width, int height) {                    
    std::cout << "\e[8;" << height << ";" << width << "t";
}


// Fonction qui définit le titre de la console
void setConsoleTitle(const std::string& title) {                   
    std::string command = "printf '\\e]0;" + title + "\\a'";
    system(command.c_str());
}

void Game::run() {                                          // Méthode de 'Game' qui initie le déroulement du jeu                    
    int nextDay = 1;                                        // Variable qui intialise le jour à '1' au démarrage du jeu
    myPet.MenuChoice();                                     // Appel de la méthode 'myPet.MenuChoice' pour initialiser le jeu en affichant le menu de choix
    while (myPet.getIsAlive()) {                            // Boucle : tant que 'myPet.getIsAlive' est 'true' la partie continue et si 'false' la partie s'arrête
        for (int Action = 0; Action < 8; Action++) {        // Boucle : pour 8 Actions = 1 Jour
                std::cout << std::endl;
                std::cout << "═══════════════════════════════════════════════════════"<< std::endl;
                std::cout << std::endl;
            myPet.displayStatus();                          // Appel de la méthode 'myPet.displayStatue' pour afficher l'état actuelle des différentes variables
                std::cout << std::endl;
                std::cout << "═════════════════════════ action restante " << (8 - Action) << ", jour " << nextDay << " ═══" << std::endl; // Ligne d'affichage d'action restante avant porochain jour
            myPet.displayExpression();                      // Appel de la méthode 'myPet.displayExpression' qui affiche l'expression 'heureux, déprimé ou mort' en affichant 'actionMessage' en fonction de l'action effectué
                std::cout << "═══════════════════════════════════════════════════════" << std::endl;
                std::cout << std::endl;
            myPet.displayMenu();                        // Appel de la méthode 'myPet.displayMenu' qui affiche les différents choix possible 
            myPet.FonctionChoice();                     // Appel de la méthode 'myPet.FonctionChoice' qui permet de prendre en compte l'action du joueur
        }
       nextDay++;                   // Attribut qui passe au jour suivant 
    }

    std::cout << myPet.getPetName() << " est mort par négligence à l'âge de " << myPet.getAged() << " ans . Le jeu est terminé." << std::endl;  // Message qui s'affiche si la boucle 'while myPet.getIsAlive' est false et termine la partie
    myPet.saveGame(); // Appel de la méthode 'myPet.saveGame' qui sauvegarde la partie en cours
}

int main() {                                                 // Début de la fonction principale du programme.
    setConsoleSize(55, 30);                                  // Configuration de la taille 55 * 30 de la console
    setConsoleTitle(std::string("TAMAGOTCHI POCKET"));       // Configuration du titre de la console
    Game game("");                                           // Initialise le jeu avec le tamagotchi sans nom
    game.run();                                              // Appel la méthode 'run' qui execute le jeu
    return 0;                                                // Renvoie la valeur 0 pour indiquer la fin de programme
}
