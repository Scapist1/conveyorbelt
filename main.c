#include <stdio.h>
#include <string.h>
#include <strings.h>
#define partNumber 3
bool askingAgain = 1;

char buff[100];
char parts[partNumber][15] = {"hydraulic pump", "PLC module", "servo motor"};
char special[2][35] = {"Do you actually have any parts?",
                       "Is there anything in stock at all?"};

int main(void) {
  printf("%s", "Aloha! - Welcome to the spare parts inventory\n\n");

  while (askingAgain == 1) {
    printf("Which part do you need?\t>>\t"); // prompt a question

    fgets(buff, sizeof(buff), stdin);
    puts("");
    int stringcount = strlen(buff);
    buff[stringcount - 1] = '\0'; // cut of a

    if ((strcmp(buff, "hydraulic pump") == 0) ||
        (strcmp(buff, "PLC module") == 0) ||
        (strcmp(buff, "servo motor") == 0)) {

      printf("I've got %s here for you, bye!\n", buff);

      askingAgain = 0;
    } else if ((strcmp(buff, "Do you actually have any parts?") == 0) ||
               (strcmp(buff, "Is there anything in stock at all?") == 0)) {
      printf("We have %d part(s)!\n\n", partNumber);
      for (int i = 0; i < partNumber; i++) {
        printf("%s\n", parts[i]);
      }
    } else {
      printf("I am afraid we don't have any %s in the inventory :(\n\n", buff);
    }
  }
}
