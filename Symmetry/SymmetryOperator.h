#pragma once
#ifndef SYMMETRYOPERATOR_H
#define SYMMETRYOPERATOR_H
#include "Helper.h"
#include "Atom.h"
#include "Molecule.h"

class SymmetryOperator
{
public:
	SymmetryOperator* Initialize();
	SymmetryOperator* getInstance();
	Atom* identity(Atom* input);
	Atom* rotation(Atom* input, int n, std::tuple<arma::fcolvec, arma::fcolvec> axis); //perform n-fold rotation about axis. axis is a 2-tuple of column vectors representing points
	Atom* reflection(Atom* input, std::tuple<arma::fcolvec, arma::fcolvec, arma::fcolvec> plane); //perform mirror across plane. plane is 3-tuple of column vectors representing points
	Atom* inversion(Atom* input); //perform inversion
	Atom* improper(Atom* input, int n, std::tuple<arma::fcolvec, arma::fcolvec> axis); // perform n-fold improper rotation about axis. see rotation comment for axis info
	Molecule* identity(Molecule* input);
	Molecule* rotation(Molecule* input, int n, std::tuple<arma::fcolvec, arma::fcolvec> axis); //perform n-fold rotation about axis. axis is a 2-tuple of column vectors representing points
	Molecule* reflection(Molecule* input, std::tuple<arma::fcolvec, arma::fcolvec, arma::fcolvec> plane); //perform mirror across plane. plane is 3-tuple of column vectors representing points
	Molecule* inversion(Molecule* input); //perform inversion
	Molecule* improper(Molecule* input, int n, std::tuple<arma::fcolvec, arma::fcolvec> axis); // perform n-fold improper rotation about axis. see rotation comment for axis info

private:

};

#endif