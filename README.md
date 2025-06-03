# Encryption and Decryption using C++ (Vigenère Cipher)

This is a simple command-line application built in C++ that implements **encryption and decryption** using the **Vigenère cipher**, a classic cryptographic algorithm. The project is designed for learning purposes and demonstrates how text can be securely encoded and decoded using a keyword-based shifting mechanism.

**Note: This project is designed to work with capital letters only.**

How the Vigenère Cipher works:
The Vigenère cipher is a method of encrypting alphabetic text by using a series of Caesar ciphers based on the letters of a keyword.

Each letter of the plaintext is shifted according to the corresponding letter in the keyword.

Decryption reverses the shift using the same key.

---

## Project Objectives

- Understand the fundamental concepts of **encryption and decryption**.
- Learn how to manipulate characters using **ASCII values** and **type casting** in C++.
- Implement the **Vigenère cipher** for character and string-level encryption.
- Create a fully working console application for encryption and decryption.

---

## Technologies Used

- **Language**: C++
- **IDE/Editor**: VS Code
- **Build Tool**: g++ / any C++ compiler

---

## Project Structure

.vscode/ # VS Code config folder (optional)
ascii.cpp # Code to demonstrate ASCII value conversions
encrypt.cpp # Logic to encrypt characters using Vigenère cipher
vignere.cpp # Core logic for encryption using string key
VigenereApp.cpp # Final app integrating encryption-decryption
ascii # Compiled binary for ascii.cpp
encrypt # Compiled binary for encrypt.cpp
vignere # Compiled binary for vignere.cpp
VigenereApp # Compiled binary for VigenereApp.cpp

---

## How to Compile and Run

### Compile

```bash
g++ VigenereApp.cpp -o VigenereApp
./VigenereApp
```

## Example Input/Output
![image](https://github.com/user-attachments/assets/164fe303-7a33-46b4-979d-b78eabd8aeb3)



