#include <iostream>
#include <cstdlib>


int main() {

	std::cout << "devinez le chiffre entre 1 et 10" << std::endl;

	int nb_inconnu = std::rand() % 10 +1;
	int nb_devine = 0;

	std::cin >> nb_devine;
	if (nb_devine > nb_inconnu)
	{
		std::cout << "c'est trop haut" << std::endl;
	} 
	else if (nb_devine < nb_inconnu)
	{
		std::cout << "c'est trop bas" << std:: endl;
	}
	else
	{
		std::cout << "gg c'etait le bon chiffre" << std::endl;
	}

	return 0;
}