#include "Scores.h"

Scores::Scores() {
	SetScores(0);
	SetScoresAlg(0);
}

Scores::~Scores() {}

int Scores::GetScores() {
	return _scores;
}

void Scores::SetScores(int _Scores) {
	Scores::_scores = _Scores;
	notify();
}

void Scores::AddPoint(int points) {

	SetScores(GetScores() + points);

	notify();
}
int Scores::GetScoresAlg() {
	return _scoresAlg;
}

void Scores::SetScoresAlg(int _ScoresAlg) {
	Scores::_scoresAlg = _ScoresAlg;
	notify();
}

void Scores::AddPointAlg(int points) {

	SetScoresAlg(GetScoresAlg() + points);

	notify();
}

void Scores::LessPointAlg(int points) {

	SetScoresAlg(GetScoresAlg() - points);

	notify();
}

void Scores::addObserver(Observer<int>* obs) {
	Observable<int>::addObserver(obs);
}

void Scores::removeObserver(Observer<int>* obs) {
	Observable<int>::removeObserver(obs);
}

Event<int>* Scores::getEvent() {
	return new Event<int>((int*)this->GetScores());
}

