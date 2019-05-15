#ifndef CHARACTER_CPP
#define CHARACTER_CPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>

using namespace std;

class Character{

private:

long long int Strength;
long long int Agility;
long long int Intelligence;
long long int Vitality;
long long int Max_HP;
long long int HP;
long long int Max_MP;
long long int MP;
long long int Concentration;
long long int Boost;
long long int Stamina;
long long int Defense;
long long int Perception;
long long int Fire_Defense;
long long int Water_Defense;
long long int Ice_Defense;
long long int Wind_Defense;
long long int Earth_Defense;
long long int Lightning_Defense;
long long int Light_Defense;
long long int Dark_Defense;
long long int Attack_Speed;
long long int Cast_Speed;
long long int Movement_Speed;


public:

// Setters

void SetStrength(long str){
    Strength = str;
}

void SetAgility(long agi){
    Agility = agi;
}

void SetIntelligence(long intel){
    Intelligence = intel;
}

void SetVitality(long vit){
    Vitality = vit;
}

void SetMaxHP(long mhp){
    Max_HP = mhp;
}

void SetHP(long hp){
    HP = hp;
}

void SetMaxMP(long mmp){
    Max_MP = mmp;
}

void SetMP(long mp){
    MP = mp;
}

void SetConcentration(long concen){
    Concentration = concen;
}

void SetBoost(long boost){
    Boost = boost;
}

void SetStamina(long sta){
    Stamina = sta;
}

void SetDefense(long def){
    Defense = def;
}

void SetPerception(long per){
    Perception = per;
}

void SetFireDefense(long fDef){
    Fire_Defense = fDef;
}

void SetWaterDefense(long watDef){
    Water_Defense = watDef;
}

void SetIceDefense(long iDef){
    Ice_Defense = iDef;
}

void SetWindDefense(long windDef){
    Wind_Defense = windDef;
}

void SetEarthDefense(long eDef){
    Earth_Defense = eDef;
}

void SetLightningDefense(long ltngDef){
    Lightning_Defense = ltngDef;
}

void SetLightDefense(long litDef){
    Light_Defense = litDef;
}

void SetDarkDefense(long drkDef){
    Dark_Defense = drkDef;
}

void SetAttackSpeed(long attSpd){
    Attack_Speed = attSpd;
}

void SetCastSpeed(long cstSpd){
    Cast_Speed = cstSpd;
}

void SetMovementSpeed(long mvmSpd){
    Movement_Speed = mvmSpd;
}

// Getters

long long int GetStrength(){
    return Strength;
}

long long int SetAgility(){
    return Agility;
}

long long int SetIntelligence(){
    return Intelligence;
}

long long int SetVitality(){
    return Vitality;
}

long long int SetMaxHP(){
    return Max_HP;
}

long long int SetHP(){
    return HP;
}

long long int SetMaxMP(){
    return Max_MP;
}

long long int SetMP(){
    return MP;
}

long long int SetConcentration(){
    return Concentration;
}

long long int SetBoost(){
    return Boost;
}

long long int SetStamina(){
    return Stamina;
}

long long int SetDefense(){
    return Defense;
}

long long int SetPerception(){
    return Perception;
}

long long int SetFireDefense(){
    return Fire_Defense;
}

long long int SetWaterDefense(){
    return Water_Defense;
}

long long int SetIceDefense(){
    return Ice_Defense;
}

long long int SetWindDefense(){
    return Wind_Defense;
}

long long int SetEarthDefense(){
    return Earth_Defense;
}

long long int SetLightningDefense(){
    return Lightning_Defense;
}

long long int SetLightDefense(){
    return Light_Defense;
}

long long int SetDarkDefense(){
    return Dark_Defense;
}

long long int SetAttackSpeed(){
    return Attack_Speed;
}

long long int SetCastSpeed(){
    return Cast_Speed;
}

long long int SetMovementSpeed(){
    return Movement_Speed;
}

};

#endif