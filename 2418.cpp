//  Sort the People
 vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

         map<int, string>mp;
        vector<string>v;

        for(int i=0; i < size(names); i++) {
            mp[heights[i]] = names[i];
        }
            
        for (auto i = mp.rbegin(); i != mp.rend(); i++) {
            v.push_back(i->second);
        }
        return v;
    
    }

//     This program sorts the people based on their heights and returns their names in the sorted order. The program takes two input arrays: "names" and "heights".

// The "names" array holds the names of people and the "heights" array holds the heights of the corresponding people. Here, "names" is a vector of strings and "heights" is a vector of integers.

// The first step of the program is to create a "map" called "mp". The map "mp" maps the heights to the names. For each height in the "heights" array, the program sets the corresponding name in the "names" array as the value in the map "mp". This way, the map "mp" now holds the names of people sorted based on their heights.

// The next step of the program is to loop through the map "mp". For each height in the map, the program adds the corresponding name to a vector "v". The loop uses "auto i = mp.begin(); i != mp.end(); i++" to iterate through the map "mp". The "->second" of each iteration gives the name associated with the height and the "push_back" method adds this name to the end of the vector "v".

// Finally, the program returns the vector "v" which now holds the names of people sorted based on their heights. The sorting is done by using the map "mp" which maps the heights to the names. The map "mp" automatically sorts the elements based on the key (height) in ascending order, which ensures that the names in the vector "v" are also sorted based on the heights.

// This program is an example of using maps to sort elements based on their keys and returning the values in the sorted order.