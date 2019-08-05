/*
 * caughtAll.cpp
 *
 *  Created on: 19.05.2015
 *      Author: rbondere
 */

#include <iostream>
#include <string>

class Xcpt
{
  public:
    Xcpt(const std::string text = "");
    const std::string& getDiagStr() const;
  private:
    std::string diagStr;
};

using namespace std;
Xcpt::Xcpt(const string text) :
  diagStr(text)
{
}

const string& Xcpt::getDiagStr() const
{
  return diagStr;
}

void allocateFoo(int arg)
{
  cout << "A" << arg << endl;
  if (arg == 0)
    throw Xcpt("B");
  else if (arg == 2)
  {
    throw (2.0);
  }
    cout << "C" << endl;
}

int main()
{
  cout << "D" << endl;
  for (int i = 0; i < 3; i++)
  {
    try
    {
      cout << "E" << endl;
      allocateFoo(i);
      cout << "F" << endl;
    }
    catch (const int e)
    {
      cout << "G" << e << endl;
    }
    catch (const Xcpt& e)
    {
      cout << e.getDiagStr() << endl;
    }
    catch (...)
    {
      cout << "Caught all" << endl;
    }
    cout << "H" << endl;
  }
  cout << "I" << endl;
  return 0;
}
