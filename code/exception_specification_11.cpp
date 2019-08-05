void foo1() throw(specificXcpt1, specificXcpt2); // deprecated
void foo2() throw(); // deprecated

void foo2() noexcept; // ab C++11	// KEINE Exceptions koennen geflogen kommen

void foo3();	// beliebige Exceptions muessen erwartet werden

bool a = noexcept(foo2); // returns true
bool b = noexcept(foo3); // returns false