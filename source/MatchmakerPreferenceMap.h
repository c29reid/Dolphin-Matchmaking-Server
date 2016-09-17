#pragma once

#include "stdafx.h"
#include <vector>
#include <string>

class MatchmakerPreferenceMap
{
public:
	MatchmakerPreferenceMap();
	
	

private:
	

};


enum compareOps {L, LE, G, GE};

class BasePreference
{
public:
	BasePreference() { }
	int prefValue;
	compareOps compareType;

	bool preferenceIsMet(int compareValue) {
		bool isMet = false;

		switch (this->compareType) {
		case L:		isMet = (this->prefValue < compareValue);	break;
		case LE:	isMet = (this->prefValue <= compareValue);	break;
		case G:		isMet = (this->prefValue > compareValue);	break;
		case GE:	isMet = (this->prefValue >= compareValue);	break;
		default:	break;
		}
		return isMet;
	}

private:
	
};

class Pref_PlayerLimit : public BasePreference
{
public:
	Pref_PlayerLimit(int pV) {
		this->prefValue = pV;
		this->compareType = LE;
	}
};
class Pref_PlayerMinimum : public BasePreference
{
public:
	Pref_PlayerMinimum(int pV) {
		this->prefValue = pV;
		this->compareType = LE;
	}
};

class Pref_PlayerMaxPing : public BasePreference
{
public:
	Pref_PlayerMaxPing(int pV) {
		this->prefValue = pV;
		this->compareType = LE;
	}
};