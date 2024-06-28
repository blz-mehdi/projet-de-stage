#include <iostream>
#include <string>
#include <vector>


struct Tache {
    std::string activit�;
    int date;
    int rappel;
};


void ajoutTache(std::vector<Tache>& taches, int& nombreTaches);

int main() {
    std::vector<Tache> taches;
    int menu = 0;
    int nombreTaches = 0;

    while (true) {
        std::cout << "Si vous souhaitez consulter les t�ches d�j� pr�vues, appuyez sur 1" << std::endl;
        std::cout << "Si vous voulez d�finir une t�che, appuyez sur 2" << std::endl;
        std::cout << "Pour quitter, appuyez sur 0" << std::endl;

        std::cin >> menu;
        if (menu == 1) {
            if (nombreTaches == 0) {
                std::cout << "Vous n'avez pas encore de t�ches d�finies.\n" << std::endl;
            }
            else {
                std::cout << "Voici les t�ches d�finies : " << std::endl;
                for (const auto& tache : taches) {
                    std::cout << "Activit� : " << tache.activit�
                        << ", Date : " << tache.date
                        << ", Rappel : " << tache.rappel
                        << " jours avant l'�v�nement.\n" << std::endl;
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
            std::cout << "Cette option n'est pas prise en compte, veuillez s�lectionner l'une des options propos�es.\n" << std::endl;
        }
    }

    return 0;
}

void ajoutTache(std::vector<Tache>& taches, int& nombreTaches) {
    Tache nouvelleTache;
    std::cout << "Quelle activit� avez-vous pr�vue ?" << std::endl;
    std::cin >> nouvelleTache.activit�;
    std::cout << "� quelle date est-elle pr�vue ?" << std::endl;
    std::cin >> nouvelleTache.date;
    std::cout << "Vous souhaitez que le rappel se fasse combien de jours avant l'�v�nement ?" << std::endl;
    std::cin >> nouvelleTache.rappel;
    std::cout << "Votre �v�nement " << nouvelleTache.activit�
        << " pr�vu le " << nouvelleTache.date
        << " vous sera rappel� " << (nouvelleTache.date - nouvelleTache.rappel)
        << " jours avant l'�v�nement.\n" << std::endl;
    taches.push_back(nouvelleTache);
    nombreTaches++;
}
