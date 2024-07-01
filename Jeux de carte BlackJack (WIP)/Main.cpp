#include <iostream>
#include <string>

enum class symbole
{
    Carreau = 1,
    Coeur = 2,
    Trefle = 3,
    Pique = 4
};

enum class valeur
{
    As = 1,
    Deux = 2,
    Trois = 3,
    Quatre = 4,
    Cinq = 5,
    Six = 6,
    Sept = 7,
    Huit = 8,
    Neuf = 9,
    Dix = 10,
    Roi = 10,
    Reine = 10,
};

class cartes
{
private:
    symbole m_symbole;
    valeur m_valeur;

public:
    cartes(symbole s, valeur v) : m_symbole(s), m_valeur(v) {}

    void afficher()
    {
        std::cout << "Symbole: " << static_cast<int>(m_symbole) << ", Valeur: " << static_cast<int>(m_valeur) << std::endl;
    }
};

int main()
{
    int valeurActuelle = 0;
    int valeurMax = 21;
    int pioche = 0;

    std::cout << "bienvenue au BlackJak, le but du jeux sera de s'approcher le plus possible de 21 sans le depasser\n" << std::endl;
    std::cout << "par soucis de lisibilité chaque classe va etre convertie en valeur :\n Carreau = 1,\nCoeur = 2,\nTrefle = 3,\nPique = 4\n" << std::endl;
    std::cout << "voici la valeur des cartes : \n As = 1,\n Deux = 2,\n Trois = 3,\n Quatre = 4,\n Cinq = 5,\n Six = 6,\n Sept = 7,\n Huit = 8,\n Neuf = 9,\n Dix = 10,\n Roi = 10,\n Reine = 10,\n" << std::endl;
    std::cout << "si vous shouaitez tirer une nouvelle carte appuyez sur 1, sinion appuyez sur 0" << std::endl;

    while (true)
    {
        std::cin >> pioche;

        if (pioche == 1)
        {
            std::cout << "voici votre carte \n" << std::endl;
            cartes maCarte(symbole::Coeur, valeur::As); //symbole et val nn obligatoire ( juste pr test)

            maCarte.afficher();
            valeurActuelle = valeurActuelle + valeur;

            std::cout << "vous etes actuellement a " << valeurActuelle << "points sur " << valeurMax << std::endl;
            std::cout << "si vous shouaitez tirer une nouvelle carte appuyez sur 1, sinion appuyez sur 0" << std::endl;
        }
        else if (pioche == 0)
        {
            std::cout << "vous avez obltenu" << valeurActuelle << "points sur 21" << std::endl;
                if (valeurActuelle > valeurMax)
                {
                    std::cout << "vous avez depassé le score, la partie est perdue" << std::endl;
                }
                else if (valeurActuelle < valeurMax)
                {
                    std::cout << "vous etes a " << valeurMax - valeurActuelle << "points du score parfait" << std::endl;
                }
                else
                {
                    std::cout << "bien joué, vous avez reussi une partie parfaite" << std::endl;
                }
        }


    }

    return 0;
}
