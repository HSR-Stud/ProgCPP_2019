// Datei: Stack.cpp 
// implementiert Stackoperationen
// R. Bonderer, 26.03.2019

#include "Stack.h"

Stack::Stack()
  : top(0), error(false)
{
}

void Stack::push(int e)
{
  error = isFull();
  if (!error)
  {
    elem[top] = e;
    ++top;
  }
}

int Stack::pop()
{
  error = isEmpty();
  if (!error)
  {
    --top;
  }
  return elem[top];
}

int Stack::peek() const
{
  error = isEmpty();
  if (!error)
    return elem[top-1];
  else
    return elem[top];
}

bool Stack::isEmpty() const
{
  return top == 0;
}

bool Stack::isFull() const
{
  return top == maxElems;
}

bool Stack::wasError() const
{
  return error;
}
