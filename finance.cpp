/**
* Problem Link: 
*/
#include <bits/stdc++.h>

using namespace std;

void print_account(double age, double salary, double investment, double principal, double royalty) {
    cout << "Age: " << age << "\n";
    cout << "Salary: " << salary << ", Investment: " << investment << "\n";
    cout << "Principal: " << principal << "\n";
    cout << "Royalty: " << royalty << "\n";
    cout << "Worth: " << royalty + principal << "\n";
    cout << "-------------------------------------------------------------\n";
}

int main() {
    freopen("in", "r", stdin), freopen("out", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    double starting_age = 22;
    double salary = 0.13, appraisal_rates = 0.10;
    double principal = 0, return_rates = 0.20, net_principal = 0;
    double num_years = 80, year = 0;
    double invest_rate = 0.3;
    double investment = 0;
    double age, marriage_age = 26, retirement_age = 50;
    bool retired = 0;
    double royalty = 1, royalty_interest_rate = 0.15;
    while(year <= num_years) {
        age = starting_age + year;
        if(!retired) {
            if(age <= marriage_age) {
                invest_rate = 0.3;
            } else {
                invest_rate = 0.3;
            }
        }
        if(age > retirement_age && !retired) {
            retired = 1;
            salary *= -1;
            invest_rate = 1;
        }
        investment = salary * invest_rate;
        print_account(age, salary, investment, principal, royalty);
        year++;
        net_principal = (principal + investment);
        principal = (1 + return_rates) * net_principal;
        royalty = (1 + royalty_interest_rate) * royalty;
        salary = (1 + appraisal_rates) * salary;
    }
    return 0;
}