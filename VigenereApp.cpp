#include <iostream>
using namespace std;
string vigenere(string text,string key,bool EncDec);
int main()
{   string plaintext,ciphertext,key;
    char x;
   
do
{
    cout<<"Encrypt/Decrypt your message!"<<endl;
    cout<<endl;
    cout<<"Please choose what you want to do: "<<endl;
    cout<<"1. Encryption"<<endl;
    cout<<"2. Decryption"<<endl;
    cout<<"3. Exit Application"<<endl;
    int option;
    cin>>option;

    switch(option)
    {
        case 1: 
            cout<<"Please enter a plain-text: "<<endl;
            cin>>plaintext;
            cout<<"Enter a key: "<<endl;
            cin>>key;

            ciphertext=vigenere(plaintext,key,0);
            cout<<"Cipher Text: "<<ciphertext<<endl;

            cout<<"Press Y/N to repeat the process, or press any other key to exit."<<endl;
            cin>>x;
            break;
        case 2: 
            cout<<"Please enter a cipher-text: "<<endl;
            cin>>ciphertext;
            cout<<"Enter a key: "<<endl;
            cin>>key;
            
            ciphertext=vigenere(plaintext,key,1);
            cout<<"Plain Text: "<<ciphertext<<endl;
            
            cout<<"Press Y/y to repeat the process, or press any other key to exit."<<endl;
            cin>>x;
            break;
        case 3: 
            x='n';
            cout<<"Thanks for using our application!"<<endl;
            break;
        default: 
            cout<<"Please choose a valid option!"<<endl;
    }
}
while(x=='Y'||x=='y');
}

string vigenere(string text,string key,bool EncDec)
{
    string newKey=key,newText;
    while(newKey.length()<text.length())
    {
        newKey+=key;
    }
    if(EncDec==0)
    {
        for(int i=0;i<text.length();i++)
        {
            newText+=(text[i]+newKey[i])%26+65;
        }
    }
    else 
    {
        for(int i=0;i<text.length();i++)
        {
            newText+=(text[i]-newKey[i]+26)%26+65;
        }
    }
    return newText;
}