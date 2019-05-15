#ifndef CHARACTER_CPP
#define CHARACTER_CPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>

using namespace std;

class Character{

private:

string First_Name;
string Mid_Name;
string Last_Name;
string Nickname;
int Gender_Val;
string Gender_Name;
bool Right_Handed;
int Rage_Val;
int Calm_Val;
int Sad_Val;
int Happy_Val;

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

void SetFirstName(string n){
    First_Name = n;
}

void SetMidName(string m){
    Mid_Name = m;
}

void SetLastName(string l){
    Last_Name = l;
}

void SetNickName(string n){
    Nickname = n;
}

void SetGender(int g, string n){
    Gender_Val = g;
    Gender_Name = n;
    switch (g)
    {
    case 0:
        Gender_Name = "None";
        break;
    case 1:
        Gender_Name = "Male";
        break;
    case 2:
        Gender_Name = "Female";
        break;
    default:
        break;
    }
}

void SetStrength(long long int str){
    Strength = str;
}

void SetAgility(long long int agi){
    Agility = agi;
}

void SetIntelligence(long long int intel){
    Intelligence = intel;
}

void SetVitality(long long int vit){
    Vitality = vit;
}

void SetMaxHP(long long int mhp){
    Max_HP = mhp;
}

void SetHP(long long int hp){
    HP = hp;
}

void SetMaxMP(long long int mmp){
    Max_MP = mmp;
}

void SetMP(long long int mp){
    MP = mp;
}

void SetConcentration(long long int concen){
    Concentration = concen;
}

void SetBoost(long long int boost){
    Boost = boost;
}

void SetStamina(long long int sta){
    Stamina = sta;
}

void SetDefense(long long int def){
    Defense = def;
}

void SetPerception(long long int per){
    Perception = per;
}

void SetFireDefense(long long int fDef){
    Fire_Defense = fDef;
}

void SetWaterDefense(long long int watDef){
    Water_Defense = watDef;
}

void SetIceDefense(long long int iDef){
    Ice_Defense = iDef;
}

void SetWindDefense(long long int windDef){
    Wind_Defense = windDef;
}

void SetEarthDefense(long long int eDef){
    Earth_Defense = eDef;
}

void SetLightningDefense(long long int ltngDef){
    Lightning_Defense = ltngDef;
}

void SetLightDefense(long long int litDef){
    Light_Defense = litDef;
}

void SetDarkDefense(long long int drkDef){
    Dark_Defense = drkDef;
}

void SetAttackSpeed(long long int attSpd){
    Attack_Speed = attSpd;
}

void SetCastSpeed(long long int cstSpd){
    Cast_Speed = cstSpd;
}

void SetMovementSpeed(long long int mvmSpd){
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