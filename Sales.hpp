#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace Sales {
  class Team {
    private:
    string teamName;
    vector<string> teamMembers;
    string teamLocation;

    public:
    Team(string name, vector<string> members, string location) : teamName(name), teamMembers(members), teamLocation(location) {}

    string getTeamName() { return teamName; }
    string getMembers() { 
      string result;
      for (const auto& member : teamMembers) {
        result += member + " ";
      }
      return result;
    }
    void addMember(string member) { teamMembers.push_back(member); }

    void setTeamLocation(string location) { teamLocation = location; }
    string getTeamLocation() { return teamLocation; }
    
    void printTeamDetails() {
      cout << "Sales Team Name: " << getTeamName() << " Location: " << getTeamLocation() << " Members: " << getMembers() << endl;
    }

  };
}
