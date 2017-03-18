#include <iostream>
#include <fstream>
#include <sstream>

/*  sentence = noun + verb + noun
 *
 *  sentence = noun + verb + adjective + noun
 *
 *  sentence = pronoun + verb + noun
 *
 *  sentence = pronoun + verb + adjective + noun
 *
 *  sentence = pronoun + verb + pronoun
 *
 *
 *
 *   string sentence;
    cout << "Enter a sentence" << endl;
    getline(cin, sentence);


    istringstream iss(sentence);
    string word;



    while(getline(iss, word)){
        cout << word;
    }

 *
 *
 */

std::string firstWord = "adjective";

using namespace std;

int main() {

    string sentence;
    string fileWord;

    cout << "Input your sentence : " << endl;
    getline(cin, sentence);

    istringstream iss(sentence);
    string sentenceWord;



    ifstream adjectiveFile;
    adjectiveFile.open("/Users/nickkinlen/project1.cpp/words/adjectives");

    // Outputs error if there's an error opening the file
    if(adjectiveFile.fail()){
        cout << "Failed to open file" << endl;
        exit(1);
    }



    // Opens noun file
    ifstream nounFile;
    nounFile.open("/Users/nickkinlen/project1.cpp/words/nouns");

    // Outputs error if there's an error opening the file
    if(nounFile.fail()){
        cout << "Failed to open noun file" << endl;
        exit(1);
    }


    // Opens pronouns file
    ifstream pronounFile;
    pronounFile.open("/Users/nickkinlen/project1.cpp/words/pronouns");

    // Outputs error if there's an error opening the file
    if(pronounFile.fail()){
        cout << " Failed to open pronoun file" << endl;
        exit(1);
    }

    // Opens verbs file
    ifstream verbFile;
    verbFile.open("/Users/nickkinlen/project1.cpp/words/verbs");

    // Outputs error if there's an error opening the file
    if(verbFile.fail()){
        cout << "Failed to open verb file" << endl;
        exit(1);
    }




    // Checks if the first word of the inputted sentence is a adjective, noun, pronoun, or verb

        while(iss >> sentenceWord) {
            while (adjectiveFile >> fileWord) {
                if (sentenceWord == fileWord) {
                    cout << sentenceWord << endl;
                }
            }
            while (nounFile >> fileWord) {
                if (sentenceWord == fileWord) {
                    cout << sentenceWord << endl;
                }
            }
            while (pronounFile >> fileWord) {
                if (sentenceWord == fileWord) {
                    cout << sentenceWord << endl;
                }
            }
            while (verbFile >> fileWord) {
                if (sentenceWord == fileWord) {
                    cout << sentenceWord << endl;
                }
            }
        }


     while(iss >> sentenceWord) {
        while (adjectiveFile >> fileWord) {
            if (sentenceWord == fileWord) {
                cout << sentenceWord << endl;
            }
        }
        while (nounFile >> fileWord) {
            if (sentenceWord == fileWord) {
                cout << sentenceWord << endl;
            }
        }
        while (pronounFile >> fileWord) {
            if (sentenceWord == fileWord) {
                cout << sentenceWord << endl;
            }
        }
        while (verbFile >> fileWord) {
            if (sentenceWord == fileWord) {
                cout << sentenceWord << endl;
            }
        }

    }






    return 0;
}


/*
    if(sentence = noun + verb + noun)
    cout << "Your sentence is legal by rule 1" << endl;
    if(sentence = noun + verb + adjective + noun)
        cout << "Your sentence is legal by rule 2" << endl;
    if(sentence = pronoun + verb + noun)
        cout << "Your sentence is legal by rule 3" << endl;
    if(sentence = pronoun + verb + adjective + noun)
        cout << "Your sentence is legal by rule 4" << endl;
    if(sentence = pronoun + verb + pronoun)
        cout << "Your sentence is legal by rule 5" << endl;
    else
        cout << "Not a legal sentence"
    */