/*
  Test WAV Volume.c

  Play back a .wav file and try a few different volume settings.   
  
  http://learn.parallax.com/C/Simple-Devices-Propeller-C/play-wav-files
*/

#include "simpletools.h"
#include "wavplayer.h"

int main()                                    // Main function
{
  int DO = 22, CLK = 23, DI = 24, CS = 25;    // SD I/O pins
  sd_mount(DO, CLK, DI, CS);                  // Mount SD card
  
  const char levels[] = {"levels.wav"};       // Set up levels string
  wav_play(levels);                           // Pass to wav playwer
  
  wav_volume(6);                              // Adjust volume
  pause(5000);                                // Play for 5 s
  wav_volume(4);                              // Repeat twice more
  pause(5000);
  wav_volume(8); 
  pause(5000);

  wav_stop();                                 // Stop playing
}