#include <bits/stdc++.h>
using namespace std;

// blob is a node here
struct blob
{
  int data;
  struct blob *next;
};

// ende is the last in the list.

struct blob *Empty(struct blob *ende, int data)
{

  if (ende != NULL)
    return ende;

  struct blob *temp = (struct blob *)malloc(sizeof(struct blob));

  temp->data = data;
  ende = temp;

  ende->next = ende;
  return ende;
}

struct blob *Begin(struct blob *ende, int data)
{
  if (ende == NULL)
    return Empty(ende, data);
  struct blob *temp = (struct blob *)malloc(sizeof(struct blob));
  temp->data = data;
  temp->next = ende->next;
  ende->next = temp;
  return ende;
}

struct blob *End(struct blob *ende, int data)
{
  if (ende == NULL)
    return Empty(ende, data);

  struct blob *temp = (struct blob *)malloc(sizeof(struct blob));
  temp->data = data;
  temp->next = ende->next;
  ende->next = temp;
  ende = temp;
  return ende;
}

struct blob *addAfter(struct blob *ende, int data, int item)
{
  if (ende == NULL)
    return NULL;
  struct blob *temp, *p;
  p = ende->next;
  do
  {
    if (p->data == item)
    {
      temp = (struct blob *)malloc(sizeof(struct blob));
      temp->data = data;
      temp->next = p->next;
      p->next = temp;
      if (p == ende)
        ende = temp;
      return ende;
    }
    p = p->next;
  } while (p != ende->next);
  cout << item << " not present in the list." << endl;
  return ende;
}

void Print(struct blob *ende)
{
  struct blob *p;

  if (ende == NULL)
  {
    cout << "List is empty." << endl;
    return;
  }

  p = ende->next;

  do
  {
    cout << p->data << "->";
    p = p->next;
  } while (p != ende->next);
    cout << p->data;
    cout<<endl;
}

int main()
{
  struct blob *ende = NULL;
  ende = Empty(ende, 7);
  ende = Begin(ende, 5);
  ende = Begin(ende, 3);
  ende = Begin(ende, 1);
  ende = End(ende, 9);
  ende = End(ende, 12);
  ende = End(ende, 10000000);
  ende = addAfter(ende, 10, 8);
  Print(ende);
  return 0;
}