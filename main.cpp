#include "wallpaper.h"

void PlusRoom(House &house)
{
	int out;
	do {
		Room a;
		a.InitRoom();
		house.SetRooms(a);
		std::cout << "���� ������ ����� ������� 0,���������� - 1\n";
		std::cin >> out;
	} while (out == 1);

}

void PlusWall(std::vector<Wallpaper>& mas)
{
	Wallpaper a;
	int out;
	do {
		a.InitWallpaper();
		mas.push_back(a);
		std::cout << "������ ��� �������� - 1,��� - 0\n";
		std::cin >> out;
	} while (out == 1);
}

void Count(std::vector<Wallpaper>&mas, House &house)
{
	double sumS = 0;
	for (int i = 0; i < house.GetPRooms().size();i++)
	{
		sumS += house.GetPRooms().at(i).GetS();
	}

	for (int i = 0; i < mas.size(); i++)
	{
		if (sumS / mas.at(i).GetSw() == 0)
			std::cout << "������������ " << mas.at(i).GetNamew() << int(sumS / mas.at(i).GetSw()) << " �������.";
		else
			std::cout << "������������ " << mas.at(i).GetNamew() << int(sumS / mas.at(i).GetSw() + 1) << " �������.";
		std::cout << std::endl;
	}

	for (int i = 0; i < mas.size(); i++)
	{
		if (sumS / mas.at(i).GetSw() == 0)
			std::cout << "��������� " << mas.at(i).GetNamew() << int(sumS / mas.at(i).GetSw())*mas.at(i).GetPrice() << " �������.";
		else
			std::cout << "��������� " << mas.at(i).GetNamew() << int(sumS / mas.at(i).GetSw() + 1)* mas.at(i).GetPrice() << " �������.";
		std::cout << std::endl;
	}

}


int main()
{
	setlocale(LC_ALL, "RUS");

	House house;
	std::vector<Wallpaper> wallpapers;


	int out;
	do {
		system("cls");
		int action;
		std::cout << "\t\t����:\n"
			<< "\t�������� ������� - 1\n"
			<<"\t������� ���� - 2\n"
			<<"\t���������  - 3\n";
		std::cin >> action;
		enum action { plusRoom = 1,plusWall,count};

		switch (action)
		{
		case plusRoom:
			PlusRoom(house);
			break;
		case plusWall:
			PlusWall(wallpapers);
			break;
		case count:
			Count(wallpapers, house);
			break;
		default:
			break;
		}
		std::cout << "���� ������ ��������� ��������� ������� - 0,���������� - 1\n";
		std::cin >> out;

	} while (out == 1);




	return 0;
}