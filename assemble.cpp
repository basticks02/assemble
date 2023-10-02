#include <iostream>
#include <fstream> 
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string file_path = "participants_responses.csv";
    ifstream csv_file(file_path);
    if (!csv_file.is_open()) {
        cerr << "Error: Could not open file " << file_path << endl;
        return 1;
    }

    vector<string> participant_names;
    string line;
    while (getline(csv_file, line)) {
        
        if (line.find("Full Name") != string::npos) {
            continue;  
        }
        size_t comma_pos = line.find(',');
        if (comma_pos != string::npos) {
            participant_names.push_back(line.substr(0, comma_pos));
        }
    }
    csv_file.close();

    random_shuffle(participant_names.begin(), participant_names.end());

    vector<pair<string, string>> pairs;
    for (size_t i = 0; i < participant_names.size(); i += 2) {
        if (i + 1 < participant_names.size()) {
            pairs.push_back(make_pair(participant_names[i], participant_names[i + 1]));
        } else {
            pairs.push_back(make_pair(participant_names[i], "No partner available"));
        }
    }

    for (const auto& pair : pairs) {
        cout << "Pair: " << pair.first << " and " << pair.second << endl;
    }

    return 0;
}
