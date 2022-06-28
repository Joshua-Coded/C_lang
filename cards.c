//A counting game made in c

#include <stdio.h>

int main()
{

  char card_name[3];
  puts("Enter the card_name: ");
  scanf("%2s", card_name);

  int val = 0;

  // my conditions

  if(card_name[0] == 'K') {
    val = 10;
  } else if(card_name[0] == 'Q') {
    val = 10;
  } else if(card_name[0] == 'J') {
    val = 10;
  }else if(card_name[0] == 'A') {
    val = 11;
  }

  // check if the value is 3 to 6

  if((val > 2) && (val < 7))
    puts("Count has gone up");

  // otherwise check if the card was 10, J,Q, or K.
  else if(val == 10)
    puts("COunt has gone down");

  // the End
  return 0;

}
