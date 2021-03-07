# A Super Simple Hex/Dec/Binary converter on the command line

I shamelessly ripped the code from here as a starting point:
https://aticleworld.com/c-program-to-convert-hexadecimal-to-decimal/

# The Plan

To basically turn this rupped code into a super simple command line tool which does basically only two things:

- Detects input numbers and shows their equivalents (b00010001 detected by leading b, 0xFF by leading 0x, decimal is regular int and octal is ??? who the fuck uses octal???)
- Is a simple never ending game that prints a number in one format and demands it returned in another. High Scores! Leaderboards!! Feature Creep!!

# Installation

For now there aint none. Download it, compile it, place it in your PATH.

# Usage

For now it's just the program from the site above, so you enter a hex number and it gets converted to decimal.

# TODO

- Add a loop to continue the program until a quit command - [x]
- Oh god fix the loop its incrementing the answers in some wild way - [ ]
- MAke quit command work - [ ]
- Add octal and binary to output - [ ]
- Add input choice so you can input any one and get the conversion from any of the others. - [ ]
