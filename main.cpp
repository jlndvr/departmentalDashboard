#include <iostream>
#include <vector>
#include "Marketing.hpp"
#include "Sales.hpp"

using namespace std;
using Marketing::Team; 

int main() {
    namespace audit = Marketing::Support;

    vector<string> marketingMembers;
    vector<string> salesMembers;

    Marketing::Team marketingTeam("Stellar Corp", marketingMembers, 500000);
    marketingTeam.addMember("Scott");
    marketingTeam.addMember("Nicole");
    marketingTeam.addMember("Artem");

    Sales::Team salesTeam("Stellar Corp", salesMembers, "London");
    salesTeam.addMember("Pratik");
    salesTeam.addMember("Emily");
    salesTeam.addMember("Clive");

    salesTeam.printTeamDetails();

    salesTeam.setTeamLocation("New York");
    
    salesTeam.printTeamDetails();

    audit::auditTeam(marketingTeam);

    return 0;
}
