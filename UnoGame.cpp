/* Copyright August 2021, Nasir Khurshid. All rights reserved. */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool canPlay(vector<string> hand, string face){
    if(face.length() != 0 && hand.size() != 0){
        int faceNum=face[face.length()-1], handNum;
        string faceColor="";
        for(int i=0; i<face.length()-2; i++){
            faceColor += face[i];
        }
        for(int j=0; j<hand.size(); j++){
            string card = hand[j];
            string handColor = "";
            handNum = card[card.length()-1];
            if(handNum == faceNum){
                return true;
            }
            for(int k=0; k<card.length()-2; k++){
                handColor += card[k];
            }
            if(handColor == faceColor){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<string> hand = {"yellow 3", "yellow 7", "blue 8", "red 9", "red 2"};
    string face1 = "yellow 1", face2 = "blue 1", face3 = "blue 8", face4 = "orange 1";
    cout << "Can play? : " << canPlay(hand, face1) << endl;
    cout << "Can play? : " << canPlay(hand, face2) << endl;
    cout << "Can play? : " << canPlay(hand, face3) << endl;
    cout << "Can play? : " << canPlay(hand, face4) << endl;
    return 0;
}
