#include <gb/gb.h>
#include "graphics/Z94SNQ_splashscreen.h"

void main(void)
{
    DISPLAY_ON;
    SHOW_BKG;

    // Load & set background data
    set_bkg_data(0, Z94SNQ_splashscreen_TILE_COUNT, Z94SNQ_splashscreen_tiles);
    
    // Load tiles data
    set_bkg_tiles(0, 0, 20, 18, Z94SNQ_splashscreen_map);
}
