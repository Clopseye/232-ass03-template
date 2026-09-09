//char * AUTHOR_NAME = (char *) "Jakub Pach";
//char * AUTHOR_AUTHORSHIP = (char *) "I acknowledge that I have worked on this assignment independently, except where explicitly noted and referenced. Any collaboration or use of external resources has been properly cited. I am fully aware of the consequences of academic dishonesty and agree to abide by the university's academic integrity policy. I understand the seriousness and implications of plagiarism.";


#include <stddef.h>
#include <stdio.h>

// ============================================================
// Node structure — used in challenges 03-06
// ============================================================


typedef struct Node {
    int value;
    struct Node *nextPtr;
} Node;

void  swap(int *a, int *b);
char* find_last_char(char *s);
void  link_three(Node *a, Node *b, Node *c);
void  remove_middle(Node *a, Node *b, Node *c);
void  remove_last(Node *b);
void  remove_first(Node *a);
void  swap_ptrs(int **a, int **b);
void  nullify(int **pp);
void  assign_bytes(long long *n);
int   sum_chain(Node *head);



void challenge01(void);
void challenge02(void);
void challenge03(void);
void challenge04(void);
void challenge05(void);
void challenge06(void);
void challenge07(void);
void challenge08(void);
void challenge09(void);
void challenge10(void);




// ============================================================
//  PART 1 — IMPLEMENTATIONS
//  Write your function implementations below.
// ============================================================


// ============================================================
// CHALLENGE 01 — swap via pointers
// ============================================================
//
// Write a function that swaps the VALUES of two integers.
// Receives two int pointers.
//
// Example:
//   int a = 5, b = 3;
//   swap(&a, &b);
//   // a == 3,  b == 5
//
// HINT:
//   You need a temporary variable.
//   Dereference the pointers to reach the values.
// ============================================================

void swap(int *a, int *b)
{
    // TODO
}


// ============================================================
// CHALLENGE 02 — find last character in a string
// ============================================================
//
// Walk the string using pointer arithmetic.
// Return a pointer to the LAST character before '\0'.
// Return NULL if the string is empty.
//
// Example:
//   char str[] = "hello";
//   char *p = find_last_char(str);
//   // *p == 'o'
//   // p  == str + 4
//
// HINT:
//   Check *(s + 1) to know when to stop.
//   Do NOT use array indexing [ ].
// ============================================================

char* find_last_char(char *s)
{
    // TODO
    return NULL;
}


// ============================================================
// CHALLENGE 03 — link three nodes:  a -> b -> c -> NULL
// ============================================================
//
// Connect three Node structs in order.
//
// Node structure:
//   typedef struct Node {
//       int value;
//       struct Node *nextPtr;
//   } Node;
//
// HINT:
//   Use the arrow operator:  a->nextPtr = ...
// ============================================================

void link_three(Node *a, Node *b, Node *c)
{
    // TODO
}


// ============================================================
// CHALLENGE 04 — remove the middle node
//
//   Before:  a -> b -> c -> NULL
//   After:   a -> c -> NULL
//            b disconnected (b->nextPtr == NULL)
//
// HINT:
//   Two assignments needed.
// ============================================================

void remove_middle(Node *a, Node *b, Node *c)
{
    // TODO
}


// ============================================================
// CHALLENGE 05 — remove the last node
//
//   Before:  a -> b -> c -> NULL
//   After:   a -> b -> NULL
//
// Note: only b is needed to solve this.
// ============================================================

void remove_last(Node *b)
{
    // TODO
}


// ============================================================
// CHALLENGE 06 — detach the first node
//
//   Before:  a -> b -> c -> NULL
//   After:   a -> NULL
//            b -> c -> NULL  (unchanged)
//
// Note: only a is needed to solve this.
// ============================================================

void remove_first(Node *a)
{
    // TODO
}


// ============================================================
// CHALLENGE 07 — swap two POINTERS using double pointers
// ============================================================
//
// Different from challenge 01.
// Here you swap what two pointers POINT TO, not the values.
//
// Example:
//   int x = 10, y = 20;
//   int *p = &x, *q = &y;
//   swap_ptrs(&p, &q);
//   // p now points to y  (*p == 20)
//   // q now points to x  (*q == 10)
//   // x == 10 and y == 20 — UNCHANGED
//
// HINT:
//   Temporary variable type is int*.
// ============================================================

void swap_ptrs(int **a, int **b)
{
    // TODO
}


// ============================================================
// CHALLENGE 08 — nullify a pointer via double pointer
// ============================================================
//
// Set the pointer that pp points to — to NULL.
//
// Example:
//   int x = 5;
//   int *p = &x;
//   nullify(&p);
//   // p  == NULL
//   // x  == 5  (unchanged)
//
// IMPORTANT:
//   If you only had int *p and wrote p = NULL inside a function,
//   the caller's p would be unchanged.
//   That is WHY we pass int **pp.
// ============================================================

void nullify(int **pp)
{
    // TODO
}


// ============================================================
// CHALLENGE 09 — assign bytes 1..8 via cast pointer
// ============================================================
//
// A long long is exactly 8 bytes.
// Access those bytes one by one using a cast pointer.
//
// Example:
//   long long n = 0;
//   assign_bytes(&n);
//   // byte 0 == 1, byte 1 == 2, ..., byte 7 == 8
//
// HINT:
//   Cast n to unsigned char*.
//   p[i]  is identical to  *(p + i).
//   Because p is unsigned char*, each step is exactly 1 byte.
//   This is the same technique as the crème de la crème example.
// ============================================================

void assign_bytes(long long *n)
{
    // TODO
}


// ============================================================
// CHALLENGE 10 — traverse and sum
// ============================================================
//
// Follow nextPtr from head until NULL.
// Return the sum of all value fields.
//
// Example:
//   a(1) -> b(2) -> c(3) -> NULL
//   sum_chain(&a) returns 6
//
// HINT:
//   Node *cur = head;
//   while (cur != NULL) { ... }
// ============================================================

int sum_chain(Node *head)
{
    // TODO
    return 0;
}


// ============================================================
//  PART 2 — CHALLENGES
//
//  For each challenge:
//  1. Set up variables on the stack.
//  2. Call your function.
//  3. Use TEST_ASSERT_EQUAL / TEST_ASSERT_NULL /
//     TEST_ASSERT_EQUAL_PTR to verify the result.
//
//  The challenge is COMPLETE when all assertions pass.
// ============================================================


void challenge01(void)
{
    int a = 5, b = 3;
    int *pa = &a;
    int *pb = &b;

    swap(pa, pb);

    TEST_ASSERT_EQUAL(3, a);
    TEST_ASSERT_EQUAL(5, b);
}


void challenge02(void)
{
    // TODO
    // Hint:
    //   char str[] = "hello";
    //   char *p = find_last_char(str);
    //   TEST_ASSERT_EQUAL('o', *p);
    //   TEST_ASSERT_EQUAL_PTR(str + 4, p);
    //
    // Also test the empty string case:
    //   char empty[] = "";
    //   TEST_ASSERT_NULL(find_last_char(empty));
}


void challenge03(void)
{
    // TODO
    // Hint:
    //   Node a, b, c;
    //   a.value = 1; a.nextPtr = NULL;
    //   b.value = 2; b.nextPtr = NULL;
    //   c.value = 3; c.nextPtr = NULL;
    //
    //   link_three(&a, &b, &c);
    //
    //   TEST_ASSERT_EQUAL_PTR(&b, a.nextPtr);
    //   TEST_ASSERT_EQUAL_PTR(&c, b.nextPtr);
    //   TEST_ASSERT_NULL(c.nextPtr);
}


void challenge04(void)
{
    // TODO
    // Hint: build a->b->c first, then remove_middle
    // Check: a->nextPtr == &c
    //        b->nextPtr == NULL
}


void challenge05(void)
{
    // TODO
    // Hint: build a->b->c first, then remove_last(&b)
    // Check: b->nextPtr == NULL
    //        a->nextPtr == &b  (unchanged)
}


void challenge06(void)
{
    // TODO
    // Hint: build a->b->c first, then remove_first(&a)
    // Check: a->nextPtr == NULL
    //        b->nextPtr == &c  (unchanged)
}


void challenge07(void)
{
    // TODO
    // Hint:
    //   int x = 10, y = 20;
    //   int *p = &x, *q = &y;
    //   swap_ptrs(&p, &q);
    //   TEST_ASSERT_EQUAL_PTR(&y, p);
    //   TEST_ASSERT_EQUAL_PTR(&x, q);
    //   TEST_ASSERT_EQUAL(10, x);  // unchanged
    //   TEST_ASSERT_EQUAL(20, y);  // unchanged
}


void challenge08(void)
{
    // TODO
    // Hint:
    //   int x = 5;
    //   int *p = &x;
    //   nullify(&p);
    //   TEST_ASSERT_NULL(p);
    //   TEST_ASSERT_EQUAL(5, x);  // unchanged
}


void challenge09(void)
{
    // TODO
    // Hint:
    //   long long n = 0;
    //   assign_bytes(&n);
    //   unsigned char *p = (unsigned char *)&n;
    //   TEST_ASSERT_EQUAL(1, p[0]);
    //   TEST_ASSERT_EQUAL(8, p[7]);
}


void challenge10(void)
{
    // TODO
    // Hint:
    //   Node a, b, c;
    //   a.value = 1; a.nextPtr = NULL;
    //   b.value = 2; b.nextPtr = NULL;
    //   c.value = 3; c.nextPtr = NULL;
    //   link_three(&a, &b, &c);
    //   TEST_ASSERT_EQUAL(6, sum_chain(&a));
}