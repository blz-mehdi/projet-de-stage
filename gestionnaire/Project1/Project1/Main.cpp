#include <iostream>
#include <string>
#include <vector>


struct Tache {
    std::string activité;
    int date;
    int rappel;
};


void ajoutTache(std::vector<Tache>& taches, int& nombreTaches);

int main() {
    std::vector<Tache> taches;
    int menu = 0;
    int nombreTaches = 0;

    while (true) {
        std::cout << "Si vous souhaitez consulter les tâches déjà prévues, appuyez sur 1" << std::endl;
        std::cout << "Si vous voulez définir une tâche, appuyez sur 2" << std::endl;
        std::cout << "Pour quitter, appuyez sur 0" << std::endl;

        std::cin >> menu;
        if (menu == 1) {
            if (nombreTaches == 0) {
                std::cout << "Vous n'avez pas encore de tâches définies.\n" << std::endl;
            }
            else {
                std::cout << "Voici les tâches définies : " << std::endl;
                for (const auto& tache : taches) {
                    std::cout << "Activité : " << tache.activité
                        << ", Date : " << tache.date
                        << ", Rappel : " << tache.rappel
                        << " jours avant l'événement.\n" << std::endl;
                }
            }
        }
        else if (menu == 2) {
            ajoutTache(taches, nombreTaches);
        }
        else if (menu == 0) {
            std::cout << "Quitter le programme." << std::endl;
            break;
        }
        else {
            std::cout << "Cette option n'est pas prise en compte, veuillez sélectionner l'une des options proposées.\n" << std::endl;
        }
    }

    return 0;
}

void ajoutTache(std::vector<Tache>& taches, int& nombreTaches) {
    Tache nouvelleTache;
    std::cout << "Quelle activité avez-vous prévue ?" << std::endl;
    std::cin >> nouvelleTache.activité;
    std::cout << "À quelle date est-elle prévue ?" << std::endl;
    std::cin >> nouvelleTache.date;
    std::cout << "Vous souhaitez que le rappel se fasse combien de jours avant l'événement ?" << std::endl;
    std::cin >> nouvelleTache.rappel;
    std::cout << "Votre événement " << nouvelleTache.activité
        << " prévu le " << nouvelleTache.date
        << " vous sera rappelé " << (nouvelleTache.date - nouvelleTache.rappel)
        << " jours avant l'événement.\n" << std::endl;
    taches.push_back(nouvelleTache);
    nombreTaches++;
}
