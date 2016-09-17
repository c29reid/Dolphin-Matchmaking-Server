#pragma once

#include "stdafx.h"
#include <map>

// TODO: Deal with PING
enum prefTypes { STARTFLAG, PARTYSIZE, MAXPLAYERS, MINPLAYERS, ENDFLAG };

class PreferenceList
{
public:
	PreferenceList(){
		for(int i = STARTFLAG + 1; i < ENDFLAG; i++){
			prefTypes pT = (prefTypes)i;
			prefList[pT] = false;
			prefListVals[pT] = -1;
		}
	}

	void setPreference(prefTypes pT, bool setTo, int prefVal){
		prefList[pT] = setTo;
		prefListVals[pT] = setTo ? prefVal : -1;
	}
	int hasPreference(prefTypes pT) const{
		return prefListVals.at(pT);
	}
	bool preferenceConditionMet(prefTypes pT, int condition) const{
		bool conditionMet = false;
		int prefVal = prefListVals.at(pT);
		if(prefVal == -1) return true;

		switch(pT){
			//case PING: 				conditionMet = (prefVal <= condition); break;
			case PARTYSIZE: 	conditionMet = (prefVal == condition); break;
			case MAXPLAYERS: 	conditionMet = (prefVal <= condition); break;
			case MINPLAYERS: 	conditionMet = (prefVal >= condition); break;
			default: 					conditionMet = false; 								 break;
		}
		return conditionMet;
	}

	friend bool operator==(const PreferenceList& pl1, const PreferenceList& pl2){
		bool matchedPrefs = true;

		for(int i = STARTFLAG + 1; i < ENDFLAG; i++){
			prefTypes pT = (prefTypes)i;
			if(!pl1.preferenceConditionMet(pT, pl2.hasPreference(pT))){
				return false;
			}
		}
		return matchedPrefs;
	}

	std::map<prefTypes, bool> prefList;
	std::map<prefTypes, int> prefListVals;

private:
	

};