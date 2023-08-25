#include <stdio.h>
#include <stdlib.h>
void tik(int *ptr, int n);
void tak(int *ptr, int n);

int main() {

  int n = 0;
  int p[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  char tic[] = {' ', 'x', 'o'};
  tik(p, n);

  return 0;
}

void tik(int *ptr, int n) {
  char tic[] = {' ', 'x', 'o'};

  printf(" %c | %c | %c \n", tic[*(ptr + 0)], tic[*(ptr + 1)], tic[*(ptr + 2)]);
  printf("-----------\n");
  printf(" %c | %c | %c \n", tic[*(ptr + 3)], tic[*(ptr + 4)], tic[*(ptr + 5)]);
  printf("-----------\n");
  printf(" %c | %c | %c \n", tic[*(ptr + 6)], tic[*(ptr + 7)], tic[*(ptr + 8)]);
  printf("Enter a number from numpad :");
  scanf("%d", &n);

  switch (n) {
  case 7: {
    if (*(ptr + 0) == 2) {
      tik(ptr, n);
      break;
    } else {
      (*(ptr + 0)) = 1;
      break;
    }
  }
  case 8: {
    if (*(ptr + 1) == 2) {
      tik(ptr, n);
      break;
    } else {
      (*(ptr + 1)) = 1;
      break;
    }
  }
  case 9: {
    if (*(ptr + 2) == 2) {
      tik(ptr, n);
      break;
    } else {
      (*(ptr + 2)) = 1;
      break;
    }
  }
  case 4: {
    if (*(ptr + 3) == 2) {
      tik(ptr, n);
      break;
    } else {
      (*(ptr + 3)) = 1;
      break;
    }
  }
  case 5: {
    if (*(ptr + 4) == 2) {
      tik(ptr, n);
      break;
    } else {
      (*(ptr + 4)) = 1;
      break;
    }
  }
  case 6: {
    if (*(ptr + 5) == 2) {
      tik(ptr, n);
      break;
    } else {
      (*(ptr + 5)) = 1;
      break;
    }
  }
  case 1: {
    if (*(ptr + 6) == 2) {
      tik(ptr, n);
      break;
    } else {
      (*(ptr + 6)) = 1;
      break;
    }
  }
  case 2: {
    if (*(ptr + 7) == 2) {
      tik(ptr, n);
      break;
    } else {
      (*(ptr + 7)) = 1;
      break;
    }
  }
  case 3: {
    if (*(ptr + 8) == 2) {
      tik(ptr, n);
      break;
    } else {
      (*(ptr + 8)) = 1;
      break;
    }
  }
  }

  if ((*(ptr + 0) == 1 && *(ptr + 1) == 1 && *(ptr + 2) == 1) ||
      (*(ptr + 3) == 1 && *(ptr + 4) == 1 && *(ptr + 5) == 1) ||
      (*(ptr + 6) == 1 && *(ptr + 7) == 1 && *(ptr + 8) == 1) ||
      (*(ptr + 0) == 1 && *(ptr + 3) == 1 && *(ptr + 6) == 1) ||
      (*(ptr + 1) == 1 && *(ptr + 4) == 1 && *(ptr + 7) == 1) ||
      (*(ptr + 2) == 1 && *(ptr + 5) == 1 && *(ptr + 8) == 1) ||
      (*(ptr + 0) == 1 && *(ptr + 4) == 1 && *(ptr + 8) == 1) ||
      (*(ptr + 2) == 1 && *(ptr + 4) == 1 && *(ptr + 6) == 1)) {
    printf(" %c | %c | %c \n", tic[*(ptr + 0)], tic[*(ptr + 1)],
           tic[*(ptr + 2)]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", tic[*(ptr + 3)], tic[*(ptr + 4)],
           tic[*(ptr + 5)]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", tic[*(ptr + 6)], tic[*(ptr + 7)],
           tic[*(ptr + 8)]);
    printf("PLAYER 1 WON\n");
    exit(0);
  } else if ((*(ptr + 0)) != 0 && (*(ptr + 1)) != 0 && (*(ptr + 2)) != 0 &&
             (*(ptr + 3)) != 0 && (*(ptr + 4)) != 0 && (*(ptr + 5)) != 0 &&
             (*(ptr + 6)) != 0 && (*(ptr + 7)) != 0 && (*(ptr + 8)) != 0) {
    printf(" %c | %c | %c \n", tic[*(ptr + 0)], tic[*(ptr + 1)],
           tic[*(ptr + 2)]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", tic[*(ptr + 3)], tic[*(ptr + 4)],
           tic[*(ptr + 5)]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", tic[*(ptr + 6)], tic[*(ptr + 7)],
           tic[*(ptr + 8)]);
    printf("!! DRAW !!\n");
    exit(0);
  } else {
    tak(ptr, n);
  }
}
void tak(int *ptr, int n) {
  char tic[] = {' ', 'x', 'o'};
  printf(" %c | %c | %c \n", tic[*(ptr + 0)], tic[*(ptr + 1)], tic[*(ptr + 2)]);
  printf("-----------\n");
  printf(" %c | %c | %c \n", tic[*(ptr + 3)], tic[*(ptr + 4)], tic[*(ptr + 5)]);
  printf("-----------\n");
  printf(" %c | %c | %c \n", tic[*(ptr + 6)], tic[*(ptr + 7)], tic[*(ptr + 8)]);
  printf("Enter a number from numpad :");
  scanf("%d", &n);

  switch (n) {
  case 7: {
    if (*(ptr + 0) == 1) {
      tak(ptr, n);
      break;
    } else {
      (*(ptr + 0)) = 2;
      break;
    }
  }
  case 8: {
    if (*(ptr + 1) == 1) {
      tak(ptr, n);
      break;
    } else {
      (*(ptr + 1)) = 2;
      break;
    }
  }
  case 9: {
    if (*(ptr + 2) == 1) {
      tak(ptr, n);
      break;
    } else {
      (*(ptr + 2)) = 2;
      break;
    }
  }
  case 4: {
    if (*(ptr + 3) == 1) {
      tak(ptr, n);
      break;
    } else {
      (*(ptr + 3)) = 2;
      break;
    }
  }
  case 5: {
    if (*(ptr + 4) == 1) {
      tak(ptr, n);
      break;
    } else {
      (*(ptr + 4)) = 2;
      break;
    }
  }
  case 6: {
    if (*(ptr + 5) == 1) {
      tak(ptr, n);
      break;
    } else {
      (*(ptr + 5)) = 2;
      break;
    }
  }
  case 1: {
    if (*(ptr + 6) == 1) {
      tak(ptr, n);
      break;
    } else {
      (*(ptr + 6)) = 2;
      break;
    }
  }
  case 2: {
    if (*(ptr + 7) == 1) {
      tak(ptr, n);
      break;
    } else {
      (*(ptr + 7)) = 2;
      break;
    }
  }
  case 3: {
    if (*(ptr + 8) == 1) {
      tak(ptr, n);
      break;
    } else {
      (*(ptr + 8)) = 2;
      break;
    }
  }
  }

  if ((*(ptr + 0) == 2 && *(ptr + 1) == 2 && *(ptr + 2) == 2) ||
      (*(ptr + 3) == 2 && *(ptr + 4) == 2 && *(ptr + 5) == 2) ||
      (*(ptr + 6) == 2 && *(ptr + 7) == 2 && *(ptr + 8) == 2) ||
      (*(ptr + 0) == 2 && *(ptr + 3) == 2 && *(ptr + 6) == 2) ||
      (*(ptr + 1) == 2 && *(ptr + 4) == 2 && *(ptr + 7) == 2) ||
      (*(ptr + 2) == 2 && *(ptr + 5) == 2 && *(ptr + 8) == 2) ||
      (*(ptr + 0) == 2 && *(ptr + 4) == 2 && *(ptr + 8) == 2) ||
      (*(ptr + 2) == 2 && *(ptr + 4) == 2 && *(ptr + 6) == 2)) {
    printf(" %c | %c | %c \n", tic[*(ptr + 0)], tic[*(ptr + 1)],
           tic[*(ptr + 2)]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", tic[*(ptr + 3)], tic[*(ptr + 4)],
           tic[*(ptr + 5)]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", tic[*(ptr + 6)], tic[*(ptr + 7)],
           tic[*(ptr + 8)]);
    printf("PLAYER 2 WON\n");
    exit(0);
  } else if ((*(ptr + 0)) != 0 && (*(ptr + 1)) != 0 && (*(ptr + 2)) != 0 &&
             (*(ptr + 3)) != 0 && (*(ptr + 4)) != 0 && (*(ptr + 5)) != 0 &&
             (*(ptr + 6)) != 0 && (*(ptr + 7)) != 0 && (*(ptr + 8)) != 0) {
    printf(" %c | %c | %c \n", tic[*(ptr + 0)], tic[*(ptr + 1)],
           tic[*(ptr + 2)]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", tic[*(ptr + 3)], tic[*(ptr + 4)],
           tic[*(ptr + 5)]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", tic[*(ptr + 6)], tic[*(ptr + 7)],
           tic[*(ptr + 8)]);
    printf("!! DRAW !!\n");
    exit(0);
  } else {
    tik(ptr, n);
  }
}
