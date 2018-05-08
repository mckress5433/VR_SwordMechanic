// Fill out your copyright notice in the Description page of Project Settings.

#include "User.h"

AUser::AUser()
{

}

void AUser::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Begin Play called from User class c++."));
}