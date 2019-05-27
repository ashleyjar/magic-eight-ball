#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void playAgain(string answers[20]) {
  string question;
  cout << "Ask another question to get another answer. To quit press 'q' and then enter." << endl << endl;
  getline(cin, question);
  if (question == "q" || question == "Q")
    cout << "Goodbye";
  else {
    int choice = rand() % 20;
    cout << answers[choice] << endl << endl;
    playAgain(answers);
  }

}

void startGame(string answers[20]) {
  string question;
  cout << "Ask a yes or no question. Then press enter." << endl << endl;
  getline(cin, question);
  int choice = rand() % 20;
  cout << answers[choice] << endl << endl;
  playAgain(answers);
}

int main() {

  /* initialize random seed: */
  srand(time(NULL));

  string answers[20] = {
    "It is certain.",
    "It is decidedly so.",
    "Without a doubt.",
    "Yes - definitely.",
    "You may rely on it.",
    "As I see it, yes.",
    "Most likely.",
    "Outlook good.",
    "Yes.",
    "Signs point to yes.",
    "Reply hazy, try again.",
    "Ask again later.",
    "Better not tell you now.",
    "Cannot predict now.",
    "Concentrate and ask again.",
    "Don't count on it.",
    "My reply is no.",
    "My sources say no.",
    "Outlook not so good.",
    "Very doubtful."
  };
  cout << "Welcome to the Magic 8-Ball." << endl << endl;
  startGame(answers);
  return 0;
}