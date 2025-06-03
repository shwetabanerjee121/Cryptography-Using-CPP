#include <iostream>
using namespace std;

int main()
{
    string plainText;
    string cipherText;
    string key;

    cout<<"Enter a plaintext: "<<endl;
    cin>>plainText;
    cout<<"Enter a key: "<<endl;
    cin>>key;

    //encryption
    string newKey=key;
    while(newKey.length()<plainText.length())
    {
        newKey+=key;
    }
    for(int i=0;i<plainText.length();i++)
    {
        cipherText+=(plainText[i]+newKey[i])%26 + 65;
    }
    cout<<"Corresponding Cipher-Text: "<<cipherText<<endl;

    string newtext;
    string old="DIEI";
    string newkey = "ko";
    //decryption
    while(newKey.length()<old.length())
    {
        newKey+=key;
    }
    for (int i=0; i<old.length();i++)
    {
        newtext+=(old[i]-newKey[i]+26)%26 + 65;
    }
    cout<<"The Plaintext is: "<<newtext<<endl;
    return 0;
}
