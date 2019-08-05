try
{
... // Code, der eine Exception auswerfen koennte
}
catch (const MyExceptionClass& exc)
{
... // wenn ein Objekt der Klasse MyExceptionClass oder einer Unterklasse
// davon ausgeworfen wurde, dann kann dieser Handler das Objekt fangen
}
// u.U. weitere Catches