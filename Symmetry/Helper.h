#pragma once
#ifndef HELPER_H
#define HELPER_H
#include <armadillo>
#include <vector>
#include <map>
#include <SFML/Graphics.hpp>
enum AtomNumber {LP, H, He,
	Li, Be, B, C, N, O, F, Ne,
	Na, Mg, Al, Si, P, S, Cl, Ar, K, Ca, Ga = 31, Ge, As, Se, Br, Kr};

std::map<int, int> valenceElectrons = {
{AtomNumber::LP,0},
{AtomNumber::H, 1},
{AtomNumber::He, 2},
{AtomNumber::Li,1},
{AtomNumber::Be,2},
{AtomNumber::B,3},
{AtomNumber::C,4},
{AtomNumber::N,5},
{AtomNumber::O,6},
{AtomNumber::F,7},
{AtomNumber::Ne,8},
{AtomNumber::Na,1},
{AtomNumber::Mg,2},
{AtomNumber::Al,3},
{AtomNumber::Si,4},
{AtomNumber::P,5},
{AtomNumber::S,6},
{AtomNumber::Cl,7},
{AtomNumber::Ar,8},
{AtomNumber::K,1},
{AtomNumber::Ca,2},
{AtomNumber::Ga,3},
{AtomNumber::Ge,4},
{AtomNumber::As,5},
{AtomNumber::Se,6},
{AtomNumber::Br,7},
{AtomNumber::Kr,8},
};

#endif

