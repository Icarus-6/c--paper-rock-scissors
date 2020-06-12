#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
    string player_name;

    cout << "Welcome to the paper, rock, scissors game! What's your name?"<<endl;
    cin >> player_name;
    system("cls");

    int rounds;
    cout << "Hi, "<< player_name<< "! How many rounds would you like to play?" <<endl;
    cin >> rounds;
    system("cls");

    int player_score = 0;
    int computer_score = 0;

    for (int round = 1; round <= rounds; round++){
        int player_choice;
        int computer_choice;
        cout << "Round "<< round<< " / " << rounds<<endl;
        cout << "Your score is "<< player_score <<endl;
        cout << "Computer's score is "<< computer_score <<endl;
        cout << endl;

do {
        cout <<"What will you choose, "<< player_name<< "?"<<endl;
        cout <<"Paper - 1"<<endl;
        cout <<"Rock - 2"<<endl;
        cout <<"Scissors - 3" <<endl;
        cin >> player_choice;
        } while (player_choice != 1 && player_choice!= 2 && player_choice!= 3); // we want to make sure that the player chooses between 1 and 3

        srand(time(0)); // I had to find a way to generate random numbers by the computer so I included stdlib.h and ctime above after some research
        computer_choice = (rand()% 3)+1;

    if(player_choice == 1 && computer_choice == 3){

        system("cls");
        cout << "You chose paper and the computer chose scissors. Computer wins!"<<endl;
        computer_score++;
        }
            else if (player_choice == 1 && computer_choice == 2){
                system("cls");
                cout << "You chose paper and the computer chose rock. Player wins!"<<endl;
                player_score++;
            }
            else if (player_choice == 2 && computer_choice == 3){
                system("cls");
                cout << "You chose rock and the computer chose scissors. Player wins!"<<endl;
                player_score++;
            }
            else if (player_choice == 3 && computer_choice == 1){
                system("cls");
                cout << "You chose scissors and the computer chose paper. Player wins!"<<endl;
                player_score++;
            }
            else if (player_choice == 2 && computer_choice == 1){
                system("cls");
                cout << "You chose rock and the computer chose paper. Computer wins!"<<endl;
                computer_score++;
            }
            else if (player_choice == 3 && computer_choice == 2){
                system("cls");
                cout << "You chose scissors and the computer chose rock. Computer wins!"<<endl;
                computer_score++;
            }
            else if (player_choice == computer_choice){
                system("cls");
                cout << "You have both chosen the same, try again!"<<endl;
            }

    cout << "Press a key to start the next round..."<<endl;
    getch(); // included in conio.h
    }

    if(computer_score == player_score){
        cout << "Your score is "<< player_score <<endl;
        cout << "Computer's score is "<< computer_score <<endl;
        cout << "It's a draw!"<<endl;

        } else if (player_score < computer_score){
            cout << "Your score is "<< player_score <<endl;
            cout << "Computer's score is "<< computer_score <<endl;
            cout << "Unfortunately, the computer has won!"<<endl;

        } else if (player_score > computer_score){
            cout << "Your score is "<< player_score <<endl;
            cout << "Computer's score is "<< computer_score <<endl;
            cout << "Congratulations! You have won!"<<endl;
        }
    return 0;
}
