How to run:

    > make

    > (cat header.txt ; ./font-gen) > 5x5.bdf

This outputs a file 5x5.bdf, which is a beautiful pixelated bitmap font!

-

You can use this to generate fonts you design as bitmaps.

This generator uses the upper case fonts for the lowercase ones as well.

Modify the .h file, which consists of several bitmaps.

Then compile.

Then run 

    > (cat header.txt ; ./font-gen) > target_file.bdf


