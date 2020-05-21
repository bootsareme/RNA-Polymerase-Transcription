//DNA to RNA Converter. Original Author: Vincent Zhang. Written in C++.
//Converts to the correponding strand, NOT just coverting thymine to uracil.
//Example: DNA: ACTCGTATGAC --> RNA: UGAGCAUACAG

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

void DNAtoRNA(string DNA) 
{
    int length = DNA.size();
    string RNA = "                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ";

    for (int i = 0; i < length; i++)
    {
        if (DNA[i] == 'A')
        {
            RNA[i] = 'U';
            cout << RNA[i];
        }
        else if (DNA[i] == 'C')
        {
            RNA[i] = 'G';
            cout << RNA[i];
        }
        else if (DNA[i] == 'G')
        {
            RNA[i] = 'C';
            cout << RNA[i];
        }
        else if (DNA[i] == 'T')
        {
            RNA[i] = 'A';
            cout << RNA[i];
        }
        else
        {
            RNA[501] = ' ';
            exit(-1);
        }
        
    }
}

int main()
{
    string sequence;
    cout << "Welcome to the DNA to RNA Converter! Made by Vincent Zhang.\n";
    cout << "Please enter your DNA sequence below, it should only contain A,C,T,G, with no spaces or indents. Also, make sure to capitalize letters.\n";
    cout << "Enter a maximum of 500 characters, otherwise the program will break.\n";
    cout << "\n";
    cout << "DNA Sequence: ";
    cin >> sequence;
    cout << "RNA Sequence: ";
    DNAtoRNA(sequence);
    cout << "\n";
    std::this_thread::sleep_for(std::chrono::seconds(999));
    return 0;
}
