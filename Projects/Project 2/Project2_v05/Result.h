/* 
 * File:   Result.h
 * Author: Jason Handen
 * Created on May 31, 2021, 6:22 PM
 * Purpose: Result header file
 */

#ifndef RESULT_H
#define RESULT_H

#include "Round.h"

class Result{
    private:
        short rndTot;
        short wins=0;
        short losses=0;
        float player$=0;
    public:
        Round *round;
        class BadRoundCount{};

        Result();
        Result(short);
        ~Result();
        
        short getRndTot();
        short getWins();
        short getLosses();
        float getPlayer$();

        void setRndTot(short);
        void setWins(short);
        void setLosses(short);
        void setPlayer$(float);
        void addWin();
        void addLoss();
};

#endif /* RESULT_H */