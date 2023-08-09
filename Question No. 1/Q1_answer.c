#include <stdio.h>
#include <stdlib.h>

typedef enum TypeTag {
  ADD,
  SUB,
  MUL,
  DIV,
  FIB,
  NULL_TYPE
} TypeTag;

typedef struct Node {
  TypeTag type;
  int value;
  struct Node *next;
} Node;

Node *makeFunc(TypeTag type, int a, int b) {
  Node *node = malloc(sizeof(Node));
  node->type = type;

  switch (type) {
    case ADD:
      node->value = a + b;
      break;
    case SUB:
      node->value = b - a;
      break;
    case MUL:
      node->value = a * b;
      break;
    case DIV:
      if (b != 0) {
        node->value = a / b;
      } else {
        printf("Error: Division by zero\n");
        free(node);
        return node;
      }
      break;
    case FIB:
      node->value = a;
      break;
    default:
      node->value = 0;
      break;
  }

  node->next = NULL;
  return node;
}

void calc(Node *node) {
  switch (node->type) {
    case ADD:
      printf("add : %d\n", node->value);
      break;
    case SUB:
      printf("sub : %d\n", node->value);
      break;
    case MUL:
      printf("mul : %d\n", node->value);
      break;
    case DIV:
      printf("div : %d\n", node->value);
      break;
    case FIB:
      printf("fibo : %d\n", fibonacci(node->value));
      break;
    default:
      break;
  }
}

int fibonacci(int n) {
  if (n < 0) {
    return fibonacci(-n);
  } else {
    int dp[n + 1];
    dp[1] = 0;
    dp[2] = 1;
    for (int i = 3; i <= n; i++) {
      dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
  }
}


int main() {
  Node *add = makeFunc(ADD, 10, 6);
  Node *mul = makeFunc(MUL, 5, 4);
  Node *sub = makeFunc(SUB, mul->value, add->value);
  Node *fibo = makeFunc(FIB, sub->value, 0);
  
  calc(add);
  calc(mul);
  calc(sub);
  calc(fibo);
 
 

  free(add);
  free(mul);
  free(sub);
  free(fibo);
  

  return 0;
}