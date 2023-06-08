#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;
using std::getline;

/*Input:
	Enter player name: Rava
	Enter player age: 32
	Enter player class: Necromancer
	Enter player name: Lenymo
	Enter player age: 24
	Enter player class: Druid
	Enter player name: Azurewrath
	Enter player age: 22
	Enter player class: Sorceress
Output:
	player name: age, class
	Rava: 32, Necromancer
	... (continues outputting names, ages, and classes)
	/*/
string toString(float number, int precision) {
	ostringstream stream; //include <sstream>
	stream << fixed;
	stream << setprecision(precision); //include <iomanip>
	stream << number;
	return stream.str();
}
// if you want 2.55, call toString(2.55, 2).
// if you want 2, call toString(2.55, 0).

//step 1: user inputs player data
//step 2: player data is stored in vector
//step 2: vector prints out data given by the player

int main() {
	class Player {
	public:
		string name;
		string role;
		string birth;
	};
	string output = " ";
	string name = "please enter player name: ";
	string birth = "enter age: ";
	string role = "please enter class name: ";
	Player player = Player();
	vector<Player> players = {};

	for (int count = 1; count < 3; count++) {
		cout << name << "\n";
		cin >> player.name;
		cout << birth << "\n";
		cin >> player.birth;
		cout << role << "\n";
		cin >> player.role;

		players.push_back(player);

	}
	for (int i = 0; i < players.size(); i++) {
		output = output + "\n" + players[i].name + "\n" + players[i].birth + "\n" + players[i].role + "\n";
	}
	cout << output;
	return 0;
}
