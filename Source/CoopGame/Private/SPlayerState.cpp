// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerState.h"

void ASPlayerState::AddScore(float ScoreDelta)
{
	// Score += ScoreDelta <- 이것도 실행이 된긴한다. 왜 되는 건지는 모르겠다.
	float CurrentScore = GetScore() + ScoreDelta;
	SetScore(CurrentScore);
}
