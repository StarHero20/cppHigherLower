#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <time.h>
//#include <sleep.h>
#include <unistd.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

main(){
	srand(time(NULL));
	int timer;
	timer = rand();
	
	int life = 1;
	int firstNumber;
	int secondNumber;
	int score = 0;
	int givenAnswer;
	
	std::cout << "Tell me if the number is higher or lower then the last one\n";
	std::cout << "Type 1/0 for higer and lower!\n";

	while(life == 1){
		firstNumber = rand();
		secondNumber = rand();
		
		std::cout << firstNumber << "\n" << secondNumber << "\n";
		std::cin >> givenAnswer;
		
		if(firstNumber > secondNumber && givenAnswer == 0){
			std::cout << "Correct\n";
			score++;
			std::cout << score;
		}
		else if(firstNumber < secondNumber && givenAnswer == 1){
			std::cout << "Correct\n";
			score++;
			std::cout << score;
		}
		
		else{
			std::cout << "wrong \n";
			std::cout << "your score is " << score;
			life = 0;
		}	
	}
}
