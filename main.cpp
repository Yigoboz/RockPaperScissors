#include <iostream>
#include <random>

using namespace std;

string randomHand(){
    string object[] = {"rock","paper","scissors"};

    random_device randHand;
    mt19937_64 gen(randHand());

    int size = sizeof(object) / sizeof(object[0]);

    uniform_int_distribution<int> distribution(0, size - 1);

    int index = distribution(gen);

    string x = object[index];

     return x;
}


int main() {

    string selection;

    cout << "Selection (Just rock,paper and scissors (lower case)): " << endl;
    cin >> selection;

    if(selection == "rock" && randomHand() == "paper"){
        cout << "The AI choosed paper. You lost!";
        terminate();
    }
    else if(selection == "rock" && randomHand() == "rock"){
        cout << "The result is draw. AI choosed rock!";
        terminate();
    }
    else if(selection == "rock" && randomHand() == "scissors"){
        cout << "You win! The AI choosed scissors.";
        terminate();
    }

    else if(selection == "paper" && randomHand() == "scissors"){
        cout << "The AI choosed scissors. You lost!";
        terminate();
    }
    else if(selection == "paper" && randomHand() == "paper"){
        cout << "The result is draw. AI choosed paper!";
        terminate();
    }
    else if(selection == "paper" && randomHand() == "rock"){
        cout << "You win! The AI choosed rock.";
        terminate();
    }

    else if(selection == "scissors" && randomHand() == "rock"){
        cout << "The AI choosed rock. You lost!";
        terminate();
    }
    else if(selection == "scissors" && randomHand() == "scissors"){
        cout << "The result is draw. AI choosed scissors!";
        terminate();
    }
    else if(selection == "scissors" && randomHand() == "paper"){
        cout << "You win! The AI choosed paper.";
        terminate();
    }


    return 0;
}