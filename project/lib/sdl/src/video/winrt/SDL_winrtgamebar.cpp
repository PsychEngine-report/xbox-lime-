#include "../../SDL_internal.h"

#if SDL_VIDEO_DRIVER_WINRT

/* SDL includes */
extern "C" {
#include "SDL_mouse.h"
#include "../SDL_sysvideo.h"
}
#include "SDL_winrtvideo_cpp.h"

/* This file is emptied to bypass compilation errors on modern Windows SDKs.
   The Game Bar is handled by the Xbox System UI anyway. */

void WINRT_InitGameBar(_THIS)
{
    // Do nothing
}

void WINRT_QuitGameBar(_THIS)
{
    // Do nothing
}

#endif /* SDL_VIDEO_DRIVER_WINRT */
