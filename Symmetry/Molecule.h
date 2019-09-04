#pragma once
#include "Drawable.h"
#include "Atom.h"
#ifndef MOLECULE_H
#define MOLECULE_H

class Molecule :
	public Drawable
{
public:
	Molecule(Atom* central, std::vector<Atom*> aux);
	void addAtom(Atom* atom);
	bool operator== (const Molecule& right);
	bool operator!= (const Molecule& right);
	arma::fcolvec getCenterPos();
	arma::fcolvec getRotation();

private:
	friend class SymmetryOperator;
	Atom* center;
	std::vector<Atom*> members = {center};
	arma::fcolvec rotation = { 0,0,0 };
	std::vector<std::tuple<arma::fcolvec, arma::fcolvec>> axes;
	std::vector<std::tuple<arma::fcolvec, arma::fcolvec, arma::fcolvec>> planes;

};

#endif