#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    srand(time(0));
    int secretNumber = rand()% 100+1;
    int guess;
    cout<<"Guess the number between 1 and 100!" <<endl;
    do{
        cout<<"Enter your guess: ";
        cin>> guess;
        if (guess> secretNumber) {
            cout<<"Too high!try again."<<endl;
        } else if (guess< secretNumber){
            cout<< "too low!nTry again."<< endl;
        } else{
            cout<<"congratulations! You guessed the right number."<<endl;
        }
    } while ( guess != secretNumber);
return 0;
} 
