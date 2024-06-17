#include <iostream>

int main() {
	std::cout << "quel monaie utilisez vous ?" << std::endl;
	std::cout << "appuiez sur :" << std::endl;
	std::cout << "1 pour l'euro" << std::endl;
	std::cout << "2 pour le le Dinar algerien" << std::endl;
	std::cout << "3 pour le livre" << std::endl;
	std::cout << "4 pour le dollar" << std::endl;
	std::cout << "5 pour le franc suisse" << std::endl;

	int devise = 0;
	int devise_voulue = 0;

	std::cin >> devise;
	
	if (devise ==1)
	{
		int euro = 0;
		std::cout << "en quel monnaie voulez vous convertir vos euros" << std::endl;
		std::cout << "1 pour le Dinar" << std::endl;
		std::cout << "2 pour le le Livre" << std::endl;
		std::cout << "3 pour le Dollar" << std::endl;
		std::cout << "4 pour le Franc" << std::endl;
		
		std::cin >> devise_voulue ;

		if (devise_voulue ==1)
		{
			std::cout << "combien d'euros voulez vous convertir ?" << std::endl;
			std::cin >> euro;
			euro = euro * 144.72;
			std::cout << "ceci vous donnera" << " " << euro << " " << "dinar" << std::endl;
			return 0;
		}

		if (devise_voulue == 2)
		{
			std::cout << "combien d'euros voulez vous convertir ?" << std::endl;
			std::cin >> euro;
			euro = euro * 0.84;
			std::cout << "ceci vous donnera" << " " << euro << " " << "livres" << std::endl;
			return 0;
		}

		if (devise_voulue == 3)
		{
			std::cout << "combien d'euros voulez vous convertir ?" << std::endl;
			std::cin >> euro;
			euro = euro * 1.09;
			std::cout << "ceci vous donnera" << " " << euro << " " << "dollars" << std::endl;
			return 0;
		}

		if (devise_voulue == 4)
		{
			std::cout << "combien d'euros voulez vous convertir ?" << std::endl;
			std::cin >> euro;
			euro = euro * 0.96;
			std::cout << "ceci vous donnera" << " " << euro << " " << "francs" << std::endl;
			return 0;
		}
		
		else
		{
			std::cout << "cette devise n'est pas prise en compre" << std::endl;
			return 0;
		}
	}

	if (devise ==2 )
	{
		int dinar = 0;
		std::cout << "en quel monnaie voulez vous convertir vos dinars" << std::endl;
		std::cout << "1 pour l'euro" << std::endl;
		std::cout << "2 pour le le Livre" << std::endl;
		std::cout << "3 pour le Dollar" << std::endl;
		std::cout << "4 pour le Franc" << std::endl;

		std::cin >> devise_voulue;

		if (devise_voulue == 1)
		{
			std::cout << "combien de dinars voulez convertir ?" << std::endl;
			std::cin >> dinar;
			dinar = dinar * 0,007;
			std::cout << "ceci vous donnera" << " " << dinar << " " << "euros" << std::endl;
			return 0;
		}

		if (devise_voulue == 2)
		{
			std::cout << "combien de dinars voulez convertir ?" << std::endl;
			std::cin >> dinar;
			dinar = dinar * 0,006;
			std::cout << "ceci vous donnera" << " " << dinar << " " << "livres" << std::endl;
			return 0;
		}

		if (devise_voulue == 3)
		{
			std::cout << "combien de dinars voulez convertir ?" << std::endl;
			std::cin >> dinar;
			dinar = dinar * 0, 0074;
			std::cout << "ceci vous donnera" << " " << dinar << " " << "dollars" << std::endl;
			return 0;
		}

		if (devise_voulue == 4)
		{
			std::cout << "combien de dinars voulez convertir ?" << std::endl;
			std::cin >> dinar;
			dinar = dinar * 0, 0066;
			std::cout << "ceci vous donnera" << " " << dinar << " " << "francs" << std::endl;
			return 0;
		}

		else
		{
			std::cout << "cette devise n'est pas prise en compre" << std::endl;
			return 0;
		}
	}

	if (devise ==3 )
	{
		int livre = 0;
		std::cout << "en quel monnaie voulez vous convertir vos livres" << std::endl;
		std::cout << "1 pour l'euro" << std::endl;
		std::cout << "2 pour le le Dinar" << std::endl;
		std::cout << "3 pour le Dollar" << std::endl;
		std::cout << "4 pour le Franc" << std::endl;

		std::cin >> devise_voulue;

		if (devise_voulue == 1)
		{
			std::cout << "combien de livres voulez convertir ?" << std::endl;
			std::cin >> livre;
			livre = livre * 1, 18;
			std::cout << "ceci vous donnera" << " " << livre << " " << "euros" << std::endl;
			return 0;

		}

		if (devise_voulue == 2)
		{
			std::cout << "combien de livres voulez convertir ?" << std::endl;
			std::cin >> livre;
			livre = livre * 171, 30;
			std::cout << "ceci vous donnera" << " " << livre << " " << "dinars" << std::endl;
			return 0;
		}

		if (devise_voulue == 3)
		{
			std::cout << "combien de livres voulez convertir ?" << std::endl;
			std::cin >> livre;
			livre = livre * 1, 27;
			std::cout << "ceci vous donnera" << " " << livre << " " << "dollars" << std::endl;
			return 0;
		}

		if (devise_voulue == 4)
		{
			std::cout << "combien de livres voulez convertir ?" << std::endl;
			std::cin >> livre;
			livre = livre * 1, 13;
			std::cout << "ceci vous donnera" << " " << livre << " " << "francs" << std::endl;
			return 0;
		}

		else
		{
			std::cout << "cette devise n'est pas prise en compre" << std::endl;
			std::cin >> livre;
			livre = livre * 1, 18;
			std::cout << "ceci vous donnera" << " " << livre << " " << "euros" << std::endl;
			return 0;
		}
	}

	if (devise == 4)
	{
		int dollar = 0;
		std::cout << "en quel monnaie voulez vous convertir vos dollars" << std::endl;
		std::cout << "1 pour l'euro" << std::endl;
		std::cout << "2 pour le le Dinar" << std::endl;
		std::cout << "3 pour le livre" << std::endl;
		std::cout << "4 pour le Franc" << std::endl;

		std::cin >> devise_voulue;

		if (devise_voulue == 1)
		{
			std::cout << "combien de dollars voulez convertir ?" << std::endl;
			std::cin >> dollar;
			dollar = dollar * 0, 93;
			std::cout << "ceci vous donnera" << " " << dollar << " " << "euros" << std::endl;
			return 0;
		}

		if (devise_voulue == 2)
		{
			std::cout << "combien de dollars voulez convertir ?" << std::endl;
			std::cin >> dollar;
			dollar = dollar * 134, 82;
			std::cout << "ceci vous donnera" << " " << dollar << " " << "dinars" << std::endl;
			return 0;
		}

		if (devise_voulue == 3)
		{
			std::cout << "combien de dollars voulez convertir ?" << std::endl;
			std::cin >> dollar;
			dollar = dollar * 0, 79;
			std::cout << "ceci vous donnera" << " " << dollar << " " << "livres" << std::endl;
			return 0;
		}

		if (devise_voulue == 4)
		{
			std::cout << "combien de dollars voulez convertir ?" << std::endl;
			std::cin >> dollar;
			dollar = dollar * 0, 89;
			std::cout << "ceci vous donnera" << " " << dollar << " " << "francs" << std::endl;
			return 0;
		}

		else
		{
			std::cout << "cette devise n'est pas prise en compre" << std::endl;
			return 0;
		}
	}

	if (devise ==5 )
	{
		int franc = 0;
		std::cout << "en quel monnaie voulez vous convertir vos francs" << std::endl;
		std::cout << "1 pour l'euro" << std::endl;
		std::cout << "2 pour le le Dinar" << std::endl;
		std::cout << "3 pour le livre" << std::endl;
		std::cout << "4 pour le dollar" << std::endl;

		std::cin >> devise_voulue;

		if (devise_voulue == 1)
		{
			std::cout << "combien de francs voulez convertir ?" << std::endl;
			std::cin >> franc;
			franc = franc * 1, 05;
			std::cout << "ceci vous donnera" << " " << franc << " " << "euros" << std::endl;
			return 0;
		}

		if (devise_voulue == 2)
		{
			std::cout << "combien de francs voulez convertir ?" << std::endl;
			std::cin >> franc;
			franc = franc * 151, 53;
			std::cout << "ceci vous donnera" << " " << franc << " " << "dinars" << std::endl;
			return 0;
		}

		if (devise_voulue == 3)
		{
			std::cout << "combien de francs voulez convertir ?" << std::endl;
			std::cin >> franc;
			franc = franc * 0, 88;
			std::cout << "ceci vous donnera" << " " << franc << " " << "livres" << std::endl;
			return 0;
		}

		if (devise_voulue == 4)
		{
			std::cout << "combien de francs voulez convertir ?" << std::endl;
			std::cin >> franc;
			franc = franc * 1, 12;
			std::cout << "ceci vous donnera" << " " << franc << " " << "dollars" << std::endl;
			return 0;
		}

		else
		{
			std::cout << "cette devise n'est pas prise en compre" << std::endl;
			return 0;
		}
	}

	else
	{
		std::cout << " cette devise n'est pas comprise dans celles proposés" << std::endl;
		return 0;
	}
	return 0;
}