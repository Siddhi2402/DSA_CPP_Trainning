
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int vowels = 0;
    int consonants = 0;
    cout << "Enter string: " << endl;
    getline(cin, name);

    for (int i = 0; i < name.length(); i ++  ){
        char ch = tolower(name[i]);

        if ( ch >= 'a' && ch<= 'z' ) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowels++;
            }else {
                consonants++;
            }
        }
    }

    cout <<"vowels"<<vowels<<endl;
    cout<<"consonants"<<vowels<<endl;

    

    


    return 0;
}
