void foo1() throw(specificXcpt1, specificXcpt2);
// die zwei angegebenen Exceptions muessen vom Aufrufer von
// foo1() erwartet werden.

void foo2() throw();	// KEINE Exceptions koennen geflogen kommen

void foo3();	// beliebige Exceptions muessen erwartet werden