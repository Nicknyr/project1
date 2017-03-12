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
 */

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

    while(adjectiveFile >> fileWord){
        iss.clear();
        iss.seekg(0);
        while(iss >> sentenceWord){
            if(sentenceWord == fileWord){
                cout << "The adjective " << sentenceWord << " is in the file" << endl;
            }
        }
    }

    adjectiveFile.close();
    cout << endl;


    // NOUNS

    // Opens noun file
    ifstream nounFile;
    nounFile.open("/Users/nickkinlen/project1.cpp/words/nouns");

    // Outputs error if there's an error opening the file
    if(nounFile.fail()){
        cout << "Failed to open noun file" << endl;
        exit(1);
    }

    while(nounFile >> fileWord){
        iss.clear();
        iss.seekg(0);
        while(iss >> sentenceWord){
            if(sentenceWord == fileWord){
                cout << "The noun " << sentenceWord << " is in the file" << endl;
            }
        }
    }


    // Closes the file
    nounFile.close();
    cout << endl;

    // PRONOUN

    // Opens pronouns file
    ifstream pronounFile;
    pronounFile.open("/Users/nickkinlen/project1.cpp/words/pronouns");

    // Outputs error if there's an error opening the file
    if(pronounFile.fail()){
        cout << " Failed to open pronoun file" << endl;
        exit(1);
    }


    while(pronounFile >> fileWord){
        iss.clear();
        iss.seekg(0);
        while(iss >> sentenceWord){
            if(sentenceWord == fileWord){
                cout << "The pronoun " << sentenceWord << " is in the file" << endl;
            }
        }
    }

    // Closes the file
    pronounFile.close();
    cout << endl;

    // VERBS

    // Opens verbs file
    ifstream verbFile;
    verbFile.open("/Users/nickkinlen/project1.cpp/words/verbs");

    // Outputs error if there's an error opening the file
    if(verbFile.fail()){
        cout << "Failed to open verb file" << endl;
        exit(1);
    }


    while(verbFile >> fileWord){
        iss.clear();
        iss.seekg(0);
        while(iss >> sentenceWord){
            if(sentenceWord == fileWord){
                cout << "The verb " << sentenceWord << " is in the file" << endl;
            }
        }
    }

    // Closes the file
    verbFile.close();



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
