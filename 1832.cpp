bool isPangram(string sentence) {
    unordered_set<char> st(sentence.begin(), sentence.end());
    return st.size() >= 26;
}
// Explanation:

// We create an unordered_set named st from the characters in sentence. 
// This ensures that only unique characters are stored in the set.

// We then check if the size of the set st is equal to or greater than 26, 
// which is the number of letters in the English alphabet.

// If the size of the set is equal to or greater than 26,
//  then the sentence contains every letter of the English alphabet at least once, so we return true.

// If the size of the set is less than 26, 
// then some letter of the English alphabet is missing, so we return false.