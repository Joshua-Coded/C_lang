/* this is a deck game for everyone created by joshua Alana
 *created 2022/6/28
 */

#include <stdio.h>

int main()
{
  //my first variable
  int decks;
  puts("Enter a number of decks");
  scanf("%d", &decks);
  
  if(decks < 1) {

  puts("That is not a valid number of decks");
  return 1;
}

printf("There are %i cards\n", (decks * 52 ));

return 0;
}


  
