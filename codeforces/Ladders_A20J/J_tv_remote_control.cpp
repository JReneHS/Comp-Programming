#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int num_buttons;
    cin>>num_buttons;
    
    vector<int>not_work{};
    for(auto i = 0; i < num_buttons; ++i){
        int button;
        cin>>button;
        not_work.push_back(button);
    }
    int channel_to_get;
    cin>>channel_to_get;
    
    vector<int> candidate_distance;
    for(auto channel = 0; channel < 1000; ++channel){
        auto str = to_string(channel);
        bool in_possible = true;
        for(auto button:not_work){
            for(char digit:str){
                if((digit - '0')==button){
                    in_possible = false;
                }
            }
        }
        if(in_possible){
            auto distance = abs(channel - channel_to_get);
            candidate_distance.push_back(distance);
        }
    }
    auto result = *min_element(
        begin(candidate_distance),
        end(candidate_distance));
    cout<<result<<endl;
    return 0;
}
