# Caesar Cipher

A simple implementation of the Caesar Cipher algorithm in C. The Caesar Cipher is a substitution cipher where each letter in the plaintext is shifted by a fixed number of positions down the alphabet. 

## Features

- Encrypts plaintext using a specified key.
- Handles both uppercase and lowercase letters.
- Preserves non-alphabetical characters. 

## How to Compile

To compile the program, use the `gcc` compiler. Run the following command in your terminal: 

```bash
gcc caesar.c -o caesar
```

## How to Run

To run the program, use the following command:

```bash
./caesar <key>
```

Replace \<key\> with the number of positions you want to shift the letters.

## Example

```bash
./caesar 3
```

When prompted, enter your plaintext. For example, if you enter HELLO, the program will output KHOOR as the ciphertext.




