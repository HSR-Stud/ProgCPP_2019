/*
 * stack.cpp
 *
 *  Created on: 21.05.2013
 *      Author: rbondere
 */

template<typename ElemType, int size>
Stack<ElemType, size>::Stack() :
  top(0), error(false)
{
}

template<typename ElemType, int size>
void Stack<ElemType, size>::push(const ElemType& e)
{
  error = top == size;
  if (!error)
  {
    elems[top] = e;
    top++;
  }
}

template<typename ElemType, int size>
ElemType Stack<ElemType, size>::pop()
{
  error = top == 0;
  if (!error)
  {
    --top;
    return elems[top];
  }
  else
    return 0;
}

template<typename ElemType, int size>
ElemType Stack<ElemType, size>::peek() const
{
  error = top == 0;
  if (!error)
    return elems[top - 1];
  else
    return 0;
}

template<typename ElemType, int size>
bool Stack<ElemType, size>::isEmpty() const
{
  return top == 0;
}

template<typename ElemType, int size>
bool Stack<ElemType, size>::wasError() const
{
  return error;
}