#include <stdio.h>
#include <stdlib.h>

struct Question {
  char* question;
  char** options;
  int correctOption;
};
void printQuestion(struct Question q) {
  printf("%s\n", q.question);
  for (int i = 0; i < 4; i++) {
    printf("%d. %s\n", i + 1, q.options[i]);
  }


}

int main() {
	 printf("Welcome to Online Examination System \n");
  	int option;
    printf("Enter 0 for ADMIN \n");
    printf("Enter 1 for STUDENT\n");
  
    scanf("%d", &option);
  
    // Switch Statements
    switch (option) {
    case 0:
        exit(0);
  
    case 1:
        

struct Question {
  char* question;
  char** options;
  int correctOption;
};


}


	

  int numQuestions;
  printf("Enter the number of questions: ");
  scanf("%d", &numQuestions);

  struct Question questions[numQuestions];
  for (int i = 0; i < numQuestions; i++) {
    questions[i].options = (char**)malloc(4 * sizeof(char*));
    for (int j = 0; j < 4; j++) {
      questions[i].options[j] = (char*)malloc(100 * sizeof(char));
    }

    char question[100];
    printf("Enter question %d: ", i + 1);
    scanf(" %[^\n]", question);
    questions[i].question = question;

    for (int j = 0; j < 4; j++) {
      printf("Enter option %d for question %d: ", j + 1, i + 1);
      scanf(" %[^\n]", questions[i].options[j]);
    }

    printf("Enter the correct option number for question %d: ", i + 1);
    scanf("%d", &questions[i].correctOption);
  }

  int score = 0;
  for (int i = 0; i < numQuestions; i++) {
    printf("\n");
    printQuestion(questions[i]);
    printf("Enter your answer: ");
    int answer;
    scanf("%d", &answer);
    if (answer == questions[i].correctOption) {
      score++;
    }
  }

  printf("\nYour score: %d / %d\n", score, numQuestions);
  return 0;
}

  
   
