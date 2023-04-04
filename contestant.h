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
        //Default Constructor
        Contestant();

        //Constructor with DisplayName Provided
        Contestant(std::string s_displayname);

        //ID Methods
        void setID(int s_id);
        int getID();

        //Strength Methods
        void setStr(int s_str);
        int getStr();

        //Dexterity Methods
        void setDex(int s_dex);
        int getDex();

        //Constitution Methods
        void setCon(int s_con);
        int getCon();

        //Intelligence Methods
        void setInt(int s_int);
        int getInt();

        //Wisdom Methods
        void setWis(int s_wis);
        int getWis();

        //Charisma Methods
        void setChr(int s_chr);
        int getChr();
    
        //DisplayName Methods
        void setDisplayName(std::string s_displayname);
        std::string getDisplayName();

};


#endif