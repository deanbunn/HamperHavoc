#ifndef CONTESTANT_H
#define CONTESTANT_H

#include <string>

class Contestant
{
    private:
        int m_id;
        int m_strength;
        int m_dexterity;
        int m_constitution;
        int m_intelligence;
        int m_wisdom;
        int m_charisma;
        std::string m_displayname;

    public:
        //ID Methods
        void setID(int s_id);
        int getID(){return m_id;}

        //Strength Methods
        void setStr(int s_str);
        int getStr(){return m_strength;}

        //Dexterity Methods
        void setDex(int s_dex);
        int getDex(){return m_dexterity;}

        //Constitution Methods
        void setCon(int s_con);
        int getCon(){return m_constitution;}

        //Intelligence Methods
        void setInt(int s_int);
        int getInt(){return m_intelligence;}

        //Wisdom Methods
        void setWis(int s_wis);
        int getWis(){return m_wisdom;}

        //Charisma Methods
        void setChr(int s_chr);
        int getChr(){return m_charisma;}
    
        //DisplayName Methods
        void setDisplayName(std::string s_displayname);
        std::string getDisplayName(){return m_displayname;}

};


#endif