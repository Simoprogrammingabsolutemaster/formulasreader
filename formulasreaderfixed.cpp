#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

int main(){
    string compound;
    string firstElement;
    string secondElement;
    int numberOfElement = 0;
    int position = 0;
    int temporaryPosition = 0;

    cout << "write the compund in this way : Aa3A2Aa1" << '\n';
    getline(cin, compound);

    if(isupper(compound.at(position)))
    {
        firstElement=compound.at(position);
        temporaryPosition=position + 1;
        if(isdigit(compound.at(temporaryPosition)))
        {
            position = position + 1;
            numberOfElement = (compound.at(position)-48);
        }
        else if(islower(compound.at(temporaryPosition))&&isupper(compound.at(temporaryPosition + 1)))
        {
            position=position + 2;
            compound.insert((temporaryPosition + 1) , 1, 49);
            cout << compound << '\n';
            numberOfElement= (compound.at(position) - 48);
        }
        else if(islower(compound.at(temporaryPosition)))
        {
            position = position + 1;
            firstElement += compound.at(position);
            position = position + 1;
            numberOfElement = (compound.at(position) - 48);
            temporaryPosition= position + 1;
        }
        else if(isupper(compound.at(temporaryPosition)))
        {
            position=position + 1;
            compound.insert(temporaryPosition, 1 ,49);
            cout << compound << '\n';
            numberOfElement= (compound.at(position)- 48 );
        }
    }
    else
    {
        cout << "there is a mistake in the writing" << '\n';
    }

        // controllo se tutto funziona
        compound.erase(0 , (position+1));
        cout << compound << '\n';
        cout << firstElement << '\n';
        cout << numberOfElement << '\n';
    

    // fine del programma per analizzare il secondo elemento
        position = 0;
        temporaryPosition = 0;
        firstElement.clear();
        numberOfElement = 0;
    
    
    return 0;
}