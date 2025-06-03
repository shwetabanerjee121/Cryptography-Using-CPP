#include <iostream>
using namespace std;

int main()
{
    //Caeser Cipher
   /* int key;
    cout<<"Enter a number (key): "<<endl;
    cin>>key;
    char plain='A';
    char cipher;
    cipher=plain+key;
    cout<<cipher; */

    //Vignere Cipher
    //encryption
    char plaintext='J';
    char ciphertext;
    char key='B';

    ciphertext=(plaintext+key)%26 +65;
    cout<<ciphertext<<endl;

    //decryption
    ciphertext='K';
    plaintext=0;

    plaintext=(ciphertext-key+26)%26  + 65;
    cout<<plaintext<<endl;
    return 0;
}