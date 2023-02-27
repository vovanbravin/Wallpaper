#include "wallpaper.h"


bool Proverka(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if ((str[i] < 48 || str[i]>57) && str[i] != '.') return true;
	}
	return false;
}

void Wallpaper::InitWallpaper()
{
	std::cin.get();
	std::string name,s,price;
	std::cout << "Введите название обоев: ";
	getline(std::cin, name);
	SetNamew(name);
	do {
		std::cout << "Введите площадь рулона: ";
		std::cin >> s;
	} while (Proverka(s));
	SetSw(std::stoi(s));
	do {
		std::cout << "Введите стоимость рулона: ";
		std::cin >> price;
	} while (Proverka(price));
	SetPrice(std::stoi(price));
}

void Room::InitRoom()
{
	std::cin.get();
	std::string name, v;
	bool x;
	std::cout << "Введите название комнаты: ";
	getline(std::cin, name);
	SetName(name);
	do {
		std::cout << "Введите площадь стен: ";
		std::cin >> v;
	} while (Proverka(v));
	std::cout << "Хотите клеить потолок?Да - 1,нет - 0\n";
	std::cin >> x;
	SetCeiling(x);
	if (x)
	{
		std::string y;
		do {
			std::cout << "Введите площадь потолка: ";
			std::cin >> y;
		} while (Proverka(y));
		SetS(std::stoi(v) + std::stoi(y));
		return;
	}
	SetS(std::stoi(v));

}
