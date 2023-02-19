/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        string binary_string = "";
        while(head != NULL) {
            binary_string = binary_string + to_string(head->val);
            head = head -> next;
        }

        return stoi(binary_string,0,2);
    }
};


/*The std::stoi() function in C++ is a standard library function that converts a string to an integer value. It takes three arguments:

The first argument is the string to convert to an integer.

The second argument is a pointer to a size_t variable that will be used to store the position of the first character that could not be converted to an integer. If this argument is nullptr, the function does not provide this information.

The third argument is the base of the number system in which the string is represented. For example, if the base is 10, the string is assumed to represent a decimal number. If the base is 16, the string is assumed to represent a hexadecimal number. If the base is 2, the string is assumed to represent a binary number.

In the code I provided, the std::stoi() function is called with the binary_string argument, which is the string representation of the binary number obtained by iterating through the linked list. The second argument is nullptr, indicating that the function should not provide the position of the first invalid character. The third argument is 2, indicating that the string represents a binary number.

The function then returns the resulting integer value, which is the decimal equivalent of the binary number represented by the linked list.

I hope that clears things up!*/