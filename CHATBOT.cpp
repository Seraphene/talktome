#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    string user_input;
    cout << "A Constellation: Hello! Feel free to ask me something.\n";

    while (true) {
        cout << "You: ";
        getline(cin, user_input);

        srand(static_cast<unsigned int>(time(nullptr)));

        vector<string> whoAmIResponses = {
            "You are Kim Andrei Besmar.",
            "You're someone who doesn't matter in this damn world.",
            "Someone important. You're someone who can make a \nchange and who will leave a mark in this world.",
            "I don't know who you are.",
            "Figure it out.",
            "You'll never know."
        };

        vector<string> whatsmyPurposeResponses = {
            "To die.",
            "You don't have a fucking purpose.",
            "I don't know. Do you know?",
            "What made you think you have a purpose?",
            "To give her all your love.",
        };

        vector<string> shouldIdoItResponses = {
            "Don't do it.",
            "Just do it.",
            "Is it fun?",
            "Will it make you feel happy?",
            "Why not?",
            "You're tired, have a rest."
        };

        vector<string> yesORnoResponses = {
            "Yes, fucking absolutely.",
            "Fucking no way."
        };

        vector<string> tiredResponses = {
            "Have a rest, Kim.",
            "No one cares, you do what you want.",
            "Everyone is. Someone is also tired yet they continue to do soemthing.",
            "Is it still meaningful?",
            "Are you happy continuing it?",
        };

        vector<string> effortResponses = {
            "Maximum fucking effort.",
            "About 80%.",
            "Until you fucking die, Kim.",
            "Enough to pass or average.",
            "Ask a friend for a number 1-100."
        };

        vector<string> whyResponses = {
            "Because that's just how things are.",
            "Why not?",
            "Is there ever really a reason?",
            "It’s complicated, don’t you think?",
            "Why not ask yourself the same question?",
            "Would you be happy with that decision?"
        };

        for (char& c : user_input) {
            c = tolower(c);
        }

        if (user_input == "hello" || user_input == "hi" || user_input == "hello." || user_input == "hi, bot.") {
            cout << "A Constellation: Hi there!\n";
        } else if (user_input == "Bye.") {
            cout << "A Constellation: Goodbye! Have a nice day!\n";
            break; 
        } else if (user_input == "who am i?") {
            int randomIndex = rand() % whoAmIResponses.size();
            cout << "A Constellation: " << whoAmIResponses[randomIndex] << "\n";
        } else if (user_input == "should i do it?") {
            int randomIndex = rand() % shouldIdoItResponses.size();
            cout << "A Constellation: " << shouldIdoItResponses[randomIndex] << "\n";
        } else if (user_input == "what is my purpose?" || user_input == "What's my purpose?") {
            int randomIndex = rand() % whatsmyPurposeResponses.size();
            cout << "A Constellation: " << whatsmyPurposeResponses[randomIndex] << "\n";
        } else if (user_input == "yes or no?") {
            int randomIndex = rand() % yesORnoResponses.size();
            cout << "A Constellation: " <<yesORnoResponses[randomIndex] << "\n";
        } else if (user_input == "give me the lists of questions."){
            cout << "A Constellation: These are the lists:\n\tWho am I?\n\tWhat is my purpose?\n\tShould I do it?\n\tYes or No?\n";
        } else if (user_input == "i'm tired"){
            int randomIndex = rand() % tiredResponses.size();
            cout << "A Constellation: " << tiredResponses[randomIndex] << "\n";
        } else if (user_input == "how much effort?"){
            int randomIndex = rand() % effortResponses.size();
            cout << "A Constellation: " << effortResponses[randomIndex] << "\n";
        } else if (user_input == "why?"){
            int randomIndex = rand() % whyResponses.size();
            cout << "A Constellation: " << whyResponses[randomIndex] << "\n";
        } else {
            cout << "A Constellation: I see. You're not actually HIM. Would you like to know the kind of questions you may ask me?\n";
        }
    }

    return 0;
}
