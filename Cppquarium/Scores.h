#ifndef SCORES_H
#define SCORES_H

#include "Observable.hpp"
#include <iostream>

class Scores : public Observable<int> {
public:
	Scores();
	virtual ~Scores();
	void AddPoint(int points);
	int _scores;
	int GetScores();
	void SetScores(int scores);
	void AddPointAlg(int points);
	void LessPointAlg(int points);
	int _scoresAlg;
	int GetScoresAlg();
	void SetScoresAlg(int scores);
	void addObserver(Observer<int>* obs);
	void removeObserver(Observer<int>* obs);
protected:
	Event<int>* getEvent();
};

#endif //SCORES_H