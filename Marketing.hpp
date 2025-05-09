#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace Marketing {
  class Team {

    private:
    string teamName;
    vector<string> teamMembers;
    double teamBudget;

    public:
    Team(string name, vector<string> members, int budget) : teamName(name), teamMembers(members), teamBudget(budget) {}
    
    string getName() { return teamName; }
    
    void addMember(string member) { teamMembers.push_back(member); }

    int getMemberCount() { return teamMembers.size(); }
    
    void setBudget(double newBudget) { teamBudget = newBudget; }
    double getBudget() { return teamBudget; }
     

  };
  
  namespace Support {
    void auditTeam(Team team) {
      cout << "Auditing Marketing Team: " << team.getName() << " Number of Members: " << team.getMemberCount() << " Team Budget: $" << team.getBudget() << " Audit complete!" << endl;
    }
  }

}
