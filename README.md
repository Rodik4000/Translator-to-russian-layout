# Translator-to-russian-layout
Translating 1 line of text in English layout to Russian

### I just got tired of translating messages in the messenger, so I put this on quick access

A small, focused utility that converts a single line of text typed with a Latin (QWERTY) keyboard layout into the corresponding text as if it had been typed on a Russian (Cyrillic) keyboard layout. Useful when you, or another program, accidentally typed text while the system keyboard layout was set to the wrong language.

---

## Features

* Convert one line of text from Latin QWERTY to Russian Cyrillic using standard keyboard key-to-key mapping.
* Preserve letter case (uppercase/lowercase).
* Preserve non-letter characters (digits, punctuation, whitespace) where appropriate.

---

## Quick example

Input (typed in Latin while layout was actually Russian):

```
ghbdtn, vbh!
```

Output:

```
привет, мир!
```

---

## Installation

Copy the file into your project folder or install as you prefer.

---

## Usage

### Command-line

The program reads one line, converts it, prints the converted result, and exits.


## How it works

How it works

This program is written in C and performs the conversion based on two fixed character arrays:

char alph1[100] = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?     ";
char alph2[100] = "ё1234567890-=йцукенгшщзхъфывапролджэячсмитьбю.Ё!\"№;%:?*()_+ЙЦУКЕНГШЩЗХЪ/ФЫВАПРОЛДЖЭЯЧСМИТЬБЮ,     ";


alph1 contains characters from the Latin QWERTY keyboard layout

alph2 contains the corresponding characters from the Russian keyboard layout

Characters share the same index in both arrays, forming a direct mapping

The program reads one input line and converts each character by scanning alph1:

For each character of the input:

It searches for the character in alph1

If found, it replaces it with the character at the same index from alph2

If a character does not exist in the mapping arrays (e.g., whitespace): the output will turn into pure chaos


---

## Edge cases & notes

---


## Contributing

Contributions are welcome. Suggested improvements:

---
