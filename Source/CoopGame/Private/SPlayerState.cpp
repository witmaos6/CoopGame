// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerState.h"

void ASPlayerState::AddScore(float ScoreDelta)
{
	// Score += ScoreDelta <- �̰͵� ������ �ȱ��Ѵ�. �� �Ǵ� ������ �𸣰ڴ�.
	float CurrentScore = GetScore() + ScoreDelta;
	SetScore(CurrentScore);
}
