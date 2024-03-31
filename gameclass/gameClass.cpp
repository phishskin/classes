#include <iostream>
using namespace std;

class Entity {
protected:
	string Race;
	int Hp;
public:
	void setRace(string race) {
		Race = race;
	}
	void setHp(int hp) {
		Hp = hp;
	}
	string getRace() {
		return Race;
}
	int getHp() {
		return Hp;
	}
	Entity(string race, int hp) {
		Race = race;
		Hp = hp;
	}
	void attack() {
		"There is a battle going on!";
	}
};
class Player :public Entity {
public:
	string userName;
	int Level;
	Player(string race, int hp, string username, int level)
		:Entity(race, hp)
	{
		userName = username;
		Level = level;
	}
	void drinkPotion() {
		Hp += 1;
	}
	void attack() {
		cout << "A player is attacking!" << endl;
	}
	void playerStat() {
		cout << "Username: " << userName << "\nLevel: " << Level << "\nHealth: " << Hp << "\nRace: " << Race << endl;
	}
};
class Monster :Entity {
public:
	string Difficulty;
	string damageType;
	Monster(string race, int hp, string difficulty, string damagetype)
		:Entity(race, hp)
	{
		Difficulty = difficulty;
		damageType = damagetype;
	}
	void attack() {
		cout << "A monster is attacking!" << endl;
	}
	void monsterStat() {
		cout << "\nRace: " << Race << "\nHealth: " << Hp << "\nDifficulty: " << Difficulty << "\nDamage Type: " << damageType << endl;
	}
};

int main() {
	Monster m1 = Monster("Goblin", 20, "Easy", "Melee");
	Player p1 = Player("Elf", 100, "x_ASH", 6);
	p1.playerStat();
	m1.monsterStat();
	p1.attack();
	m1.attack();

	return 0;
}