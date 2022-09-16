// file handling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <string>
#include<cstdlib>
#include <bitset>
#include <stack>



void guess_the_number(int *a) {
	int i{ 1 };
unsigned long int	v1 = rand() % 100;
	int num{};
	char reply1{};
	char reply5{};
	int money_increase{50};
	int money_decrease{5};
	int multiplier{1};
	int demultiplier{1};

	std::cout << " Pick a number , if the number matches the random number you win $50 , \n "  << "every time you guess a number correct consecutively your earnings double " << '\n';
	std::cout << std::endl;
	while (true) {
	std::cout << "Pick a number " << '\n';
	std::cin >> num;
	
	
		if (num == v1) {


			std::cout << "you guessed the write number " << '\n';
			*a += money_increase*multiplier;
			++multiplier;
			std::cout << "This is the value of A : " << *a << std::endl;

		}
		else if (num != v1) {

			*a -= money_decrease*demultiplier;
			++demultiplier;
			std::cout << "unlucky you have lost : 50 "  << '\n';
			std::cout << "This is your balance : " << *a << std::endl;
			std::cout << "this was the number chosen " << v1 << std::endl;
		}

		std::cout << "would you like to play this game again [Y/N] " << '\n';
		std::cin >> reply1;
		if (reply1 == 'Y') {


			continue;
		}
		else if (reply1 = 'N') {
			std::cout << "goodbye " << '\n';
			break;
			_Exit(1);
		}
	}





}
int spin() {

	unsigned int v2 = ((rand() % 100) * ((rand()*4) % 100)) % 10;
	std::cout << "Output : " << v2 << std::endl;
	return v2;

}

void game_mode2(int *a) {
	char reply2{};
	char reply5{};
	while (true) {
	

		std::cout << "Would you like to spin " << std::endl;
		std::cin >> reply2;

		if (reply2 == 'Y') {
			unsigned int b = spin();

			if (b == 1) {

				std::cout << "you have won 10 coins " << std::endl;
				*a += 10;
			}
			else if (b == 2) {


				std::cout << "You have lost 25 coins " << std::endl;
				*a -= 25;
			}
			else if (b == 3) {

				std::cout << "You lose 1000 coins  " << std::endl;
				*a -= 1000;
			}
			else if (b == 4) {


				std::cout << "you didn't win anything " << std::endl;


			}
			else if (b == 5) {


				std::cout << "You hit the jackpot!!!!!!!!!!!!! " << std::endl;
				*a *= *a;
			}
			else if (b == 6) {

				std::cout << "you didn't win anything " << std::endl;
			}
			else if (b == 7) {

				std::cout << "you lose everything " << std::endl;
				*a -= *a;

			}
			else if (b == 8) {

				std::cout << "you win 50 coins " << std::endl;
				*a += 50;
			}
			else if (b == 9) {
				std::cout << "you won 200 coins " << std::endl;
				*a += 200;
			}

		}
		else if (reply2 == 'N') {
			std::cout << "good bye " << std::endl;
			break;

		}



		std::cout << "would you like to play again " << std::endl;
		std::cin >> reply5;
		if (reply5 == 'y') {
			continue;
		}
		else if (reply5 == 'N') {
			break;
		}

	}

}
int main() {
	char rep{};
	int game_mode_choice{};
	int cash{ 300 };
	int* user_earnings{&cash};
	//*user_earnings = 456;

	std::cout << "welcome to the casino game ,would you like to play [Y/N]  " << std::endl;
	std::cin >> rep;
	if (rep == 'Y') {
		std::cout << "Which game mode , would you like to play " << std::endl;;
		std::cout << "1> Guess the number  \n " << " 2> spin the wheel  \n " << " 3> BALANCE " << std::endl;;
		std::cin >> game_mode_choice;
		switch (game_mode_choice) {

		case 1: {


			guess_the_number(&cash);


		}

		case 2: {

			game_mode2(&cash);
			std::cout << "This is your account balance  : " << cash << std::endl;
		}

		case 3: {




			std::cout << "This is your account balance  : " << cash << std::endl;

			break; 
		}
		}



	}
	else {





	}









}