// DNA to RNA Converter. Original Author: bootsareme. Written in C++.
// Converts to the correponding strand. Example: DNA: ACTCGTATGAC --> RNA: UGAGCAUACAG.

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    cout << "Welcome to the DNA to RNA Converter! Made by bootsareme.\n";
    cout << "Please enter your DNA sequence below, it should only contain A,C,T,G with no spaces or indents.\n";
    cout << "\nDNA Sequence: ";

    string sequence;
    cin >> sequence;

    cout << "RNA Sequence: ";
    std::transform(sequence.begin(), sequence.end(), sequence.begin(), ::toupper);
    
    for (size_t i = 0; i < sequence.size(); i++)
    {
        switch (sequence[i])
        {
        case 'A':
            cout << 'U';
            break;
        case 'C':
            cout << 'G';
            break;
        case 'G':
            cout << 'C';
            break;
        case 'T':
            cout << 'A';
            break;
        }
    }
}
