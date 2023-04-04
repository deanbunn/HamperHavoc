#include <string>
#include "contestant.h"

//Default Constructor
Contestant::Contestant(){}

//Constructor with Display Name Provided
Contestant::Contestant(std::string s_displayname){ m_displayname = s_displayname; }

//ID Methods
void Contestant::setID(int s_id){m_id = s_id;}
int Contestant::getID(){return m_id;}

//Strength Methods
void Contestant::setStr(int s_str){m_strength = s_str;}
int Contestant::getStr(){return m_strength;}

//Dexterity Methods
void Contestant::setDex(int s_dex){m_dexterity = s_dex;}
int Contestant::getDex() { return m_dexterity; }

//Constitution Methods
void Contestant::setCon(int s_con) { m_constitution = s_con; }
int Contestant::getCon() { return m_constitution; }

//Intelligence Methods
void Contestant::setInt(int s_int) { m_intelligence = s_int; }
int Contestant::getInt() { return m_intelligence; }

//Wisdom Methods
void Contestant::setWis(int s_wis) { m_wisdom = s_wis; }
int Contestant::getWis() { return m_wisdom; }

//Charisma Methods
void Contestant::setChr(int s_chr) { m_charisma = s_chr; }
int Contestant::getChr() { return m_charisma; }

//DisplayName Methods
void Contestant::setDisplayName(std::string s_displayname) { m_displayname = s_displayname; }
std::string Contestant::getDisplayName() { return m_displayname; }

//Combined Stat Blocks
int Contestant::getCombinedStatBlock(){ return m_strength + m_dexterity + m_constitution + m_intelligence + m_wisdom + m_charisma; }