#pragma once
#include "Helper.h"
#include "Drawable.h"
#include "Molecule.h"
#ifndef ATOM_H
#define ATOM_H
class Atom: 
	public Drawable
{
public:
	Atom(Molecule* f); //sets as LP at 0,0,0 with father f
	Atom(Molecule* f, arma::fcolvec pos); //sets as LP at relative pos with father f
	Atom(Molecule* f, int atomicNumber); //sets as atomic number with father f
	Atom(Molecule* f, int atomicNumber, arma::fcolvec pos); 
	bool operator== (const Atom& right);
	bool operator!= (const Atom& right);
	int getAtomicNumber();
	arma::fcolvec getRelativePosition();
	
	void setPosition(arma::fcolvec pos); //set relative position
	void setAbsolutePosition(arma::fcolvec pos);
private:
	friend class SymmetryOperator;
	float radius = 1.f; //temporary
	Molecule* father;
	arma::fcolvec relativePosition = { 0,0,0 }; //position w/ respect to center atom, if applicable
	arma::fcolvec absolutePosition = { 0,0,0 }; //position on screen
	
};

#endif