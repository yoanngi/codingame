#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// 100 % de reussite au test

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
**/
void depla_simple(int x, int y, int initx, int inity)
{
  while (1)
  {
    if (x > initx)
      printf("E\n");
    else if (x < initx)
      printf("W\n");
    else if (y > inity)
      printf("S\n");
    else
      printf("N\n");
  }
}

void deplacement_p(int x,int y, int inix, int iniy)
{
  int a;
  int b;

  a = x;
  b = y;
  while ((a != inix) || (b != inix))
  {
    if ((a == inix) || (b == iniy))
      depla_simple(a,b,inix, iniy);
    else if ((a > inix) && (b > iniy))
      printf("SE\n");
    else if ((a < inix) && (b < iniy))
      printf("NE\n");
    else if ((a > inix) && (b < iniy))
      printf("NW\n");
    else if ((a < inix) && (b > iniy))
      printf("SW\n");
    a++;
    b--;
  }
//  depla_simple(a, b);
}

int main(void)
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    scanf("%d%d%d%d", &lightX, &lightY, &initialTX, &initialTY);

// Perso
    int *cal_y;
    int *cal_x;
    cal_y = initialTY - lightY;
    cal_x = initialTX - lightX;

// game loop
    while (1)
    {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        scanf("%d", &remainingTurns);
        if ((cal_x == 0) || (cal_y == 0))
          depla_simple(lightX, lightY, initialTX, initialTY);
        else
          deplacement_p(lightX, lightY, initialTX, initialTY);
    }
// Write an action using printf(). DON'T FORGET THE TRAILING \n
// To debug: fprintf(stderr, "Debug messages...\n");

// A single line providing the move to be made: N NE E SE S SW W or NW
//    printf("E\n");
    return (0);
}
