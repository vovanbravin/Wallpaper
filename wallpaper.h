#pragma once
#include <iostream>
#include <vector>
#include <string>


class Room
{
	std::string Name;
	double S;
	bool ceiling;

public:
	Room()
	{
		Name = "";
		S = 0;
		ceiling = false;
	}
	inline void SetName(std::string Name) { this->Name = Name; };
	inline void SetS(double S) { this->S = S; };
	inline void SetCeiling(bool ceiling) { this->ceiling = ceiling; };
	inline std::string  GetName() { return Name; };
	inline double GetS() { return S; };
	inline bool CetCeiling() { return ceiling; };
	void InitRoom();
};


class House
{
	std::vector<Room>rooms;

public:
	
	inline void SetRooms(Room a) { rooms.push_back(a); }
	inline std::vector<Room> GetPRooms() { return rooms; };

};


class Wallpaper
{
	std::string Namew;
	double Sw;
	double price;
public:
	Wallpaper()
	{
		Namew = "";
		Sw = 0;
		price = 0;
	}
	inline void SetNamew(std::string Namew) { this->Namew = Namew; };
	inline void SetSw(double Sw) { this->Sw = Sw; };
	inline void SetPrice(double price) { this->price = price; };
	inline std::string GetNamew() { return Namew; };
	inline double GetSw() { return Sw; };
	inline double GetPrice() { return price; };

	void InitWallpaper();
};

