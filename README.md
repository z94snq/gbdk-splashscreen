# gbdk-splashscreen
GBDK splashscreen application

## Build Instructions
Place gbdk for Windows in the `C:\gbdk` directory, then run this command in PowerShell:

```
C:\gbdk\bin\lcc.exe -c -o main.o main.c
C:\gbdk\bin\lcc.exe -c -o Z94SNQ_splashscreen.o Z94SNQ_splashscreen.c
C:\gbdk\bin\lcc.exe -o rom.gb main.o Z94SNQ_splashscreen.o
```

or just run `build.ps1`

This will create `rom.gb`, which can be loaded into an emulator or flashcart.

## Convert PNG into GBDK asset
```
C:\gbdk\bin\png2asset.exe .\Z94SNQ_splashscreen.png -map -keep_palette_order -noflip
```

## Resources
- GBDK: https://github.com/gbdk-2020/gbdk-2020
- Aseprite: https://www.aseprite.org/
- png2asset Tutorial: https://laroldsretrogameyard.com/tutorials/gb/png2asset-graphics-creation-for-gbdk-2020
- Drawing Tutorial: https://laroldsretrogameyard.com/tutorials/gb/drawing-on-the-background-and-window-layers
