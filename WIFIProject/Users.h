#pragma once
//Klasse User mit den Attribute: id, name, passwort und liste(bzw. Konto). Alle auﬂer id werden vom Admin zugewiesen und der User kann sp‰ter beliebig sein eigenes Passwort feststellen.
using namespace System;

public ref class Users
{
public:
	int id;
	String^ name;
	String^ passwort;
	int liste;
};
