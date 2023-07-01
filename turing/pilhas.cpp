/* 
    Números inteiros: os números são adicionados à pilha para serem somados posteriormente.
    "C": remove o último número adicionado à pilha.
    "D": duplica o último número adicionado à pilha.
    "+": adiciona à pilha a soma dos dois últimos números adicionados.

    Input: "5 2 C D +"
    Output: 30
*/

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <vector>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> points;
        for (const string& op : ops) {
            if (op == "C") {
                points.pop();
            } else if (op == "D") {
                points.push(points.top() * 2);
            } else if (op == "+") {
                int last = points.top();
                points.pop();
                int secondLast = points.top();
                points.push(last);
                points.push(last + secondLast);
            } else {
                points.push(stoi(op));
            }
        }

        int sum = 0;
        while (!points.empty()) {
            sum += points.top();
            points.pop();
        }
        return sum;
    }
};

int main() {
    vector<string> items;
    string item;

    string line;
    getline(cin, line);
    istringstream is(line);

    while (is >> item) {
        items.push_back(item);
    }

    Solution solution;

    cout << solution.calPoints(items) << endl;

    return 0;
}
