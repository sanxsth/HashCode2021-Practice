#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

/*
    Use a trie to assign unique numbers for each ingredient

    Keep a queue of pizzas

    - Process the pizzas one by one
        - Assign pizza to a team that gives the maximum distinctness
            - Prioritize 4, 3, 2
        - Re-evaluate the priority of pizzas with similar ingredients
    
    - Process the pizzas and teams not filled
        - Demote all teams that are not filled as much as required
            - Provided there is a slot
        - All the teams that are left over
            -  greedily distribute pizzas
        - If any unfilled teams or half-fileld teams, ignore
*/

int main() {
}
