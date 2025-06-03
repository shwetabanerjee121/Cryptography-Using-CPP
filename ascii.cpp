#include <iostream>
using namespace std;

int main()
{
    for(int i=65;i<=90;i++)
    {
        cout<<(char)i<<endl;
    }
    for(int i=97;i<=122;i++)
    {
        cout<<(char)i<<endl;
    }
}

//Caesar Cipher: Simple Substitution Cipher - Each letter in the message (plaintext) is shifted a fixed number of positions down the alphabet.
//Shift value(key): This fixed number of positions is the key for decryption. For example, a shift value of 3 would move 'A' to 'D', 'B' to 'E', and so on.
//Security: Weak. It is easily breakable because the shift value is constant throughout the message. Analyzing letter frequency in the enccrypted text (ciphertext) can reveal the shift and decrypt the message.

//Vignere Cipher: Polyalphabetic substitution cipher: uses a more complex approach than the Caeser cipher.
//Key: A keyword, which can be any word or phrase.
//Encyption: Each letter in the message is shifted by a value determined by the corresponding letter in the keyword. The keyword is repeated to match the message length if it's shorter.
//Security: more secure than Caesar cipher. The varying shift values due to the keyword make frequency analysis less effective. hwoever, with a long enough message and advanced techniques, the Vignere cipher can still be cracked.