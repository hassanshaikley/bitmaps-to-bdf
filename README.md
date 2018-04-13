# bitmaps-to-bmp

I use this to create my own custom pixelated fonts out of bitmaps

You can use this to generate your own fonts.

## How to run

    > make

    > (cat header.txt ; ./font-gen) > [filename].bdf


This generator uses the upper case fonts for the lowercase ones as well.

## How to create your own fonts

Modify the .h file, which consists of several bitmaps.

Then compile.

Then run 

    > (cat header.txt ; ./font-gen) > [filename].bdf


