#include <string>
#include "contestant.h"

class Contestant
{
    private:
        int m_id {0};
        int m_strength {0};
        int m_dexterity {0};
        int m_constitution {0};
        int m_intelligence {0};
        int m_wisdom {0};
        int m_charisma {0};
        std::string m_displayname{""};

    public:
        //ID Methods
        void setID(int s_id){m_id = s_id;}
        int getID(){return m_id;}

        //Strength Methods
        void setStr(int s_str){m_strength = s_str;}
        int getStr(){return m_strength;}

        //Dexterity Methods
        void setDex(int s_dex){m_dexterity = s_dex;}
        int getDex(){return m_dexterity;}

        //Constitution Methods
        void setCon(int s_con){m_constitution = s_con;}
        int getCon(){return m_constitution;}

        //Intelligence Methods
        void setInt(int s_int){m_intelligence = s_int;}
        int getInt(){return m_intelligence;}

        //Wisdom Methods
        void setWis(int s_wis){m_wisdom = s_wis;}
        int getWis(){return m_wisdom;}

        //Charisma Methods
        void setChr(int s_chr){m_charisma = s_chr;}
        int getChr(){return m_charisma;}
    
        //DisplayName Methods
        void setDisplayName(std::string s_displayname){m_displayname = s_displayname;}
        std::string getDisplayName(){return m_displayname;}

};