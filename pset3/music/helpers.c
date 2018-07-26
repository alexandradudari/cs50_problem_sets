// Helper functions for music

#include <cs50.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // TODO
    int numerator = atoi(&fraction[0]);
    int denominator = atoi(&fraction[2]);
    int dur = (numerator * 8) / denominator;
    return dur;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    double freq = 0.0;
    int octave = note[strlen(note) - 1];
    octave -= 48;
    // TODO
    //Determine note letter
    switch (note[0])
    {
        case 'C' :
            freq = 440.0 / (pow(2.0, (9.0 / 12.0)));
            break;
        case 'D' :
            freq = 440.0 / (pow(2.0, (7.0 / 12.0)));
            break;
        case 'E' :
            freq = 440.0 / (pow(2.0, (5.0 / 12.0)));
            break;
        case 'F' :
            freq = 440.0 / (pow(2.0, (4.0 / 12.0)));
            break;
        case 'G' :
            freq = 440.0 / (pow(2.0, (2.0 / 12.0)));
            break;
        case 'A' :
            freq = 440.0;
            break;
        case 'B' :
            freq = 440.0 * (pow(2.0, (2.0 / 12.0)));
            break;
        default:
            return 0;
    }

    if (octave > 4)
    {
        for (int i = 0; i < octave - 4; i++)
        {
            freq *= 2;
        }
    }
    if (octave < 4)
    {
        for (int i = 0; i < 4 - octave; i++)
        {
            freq /= 2;
        }
    }

    //final adjusment for sharp or flat
    if (note[1] == '#')
    {
        freq *= pow(2.0, (1.0 / 12.0));
    }
    if (note[1] == 'b')
    {
        freq /= pow(2.0, (1.0 / 12.0));
    }

    return round(freq);
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    //if s represents a rest, returns true; otherwise, return false;
    if (s[0] == '\0')
    {
        return true;
    }
    return false;
}
