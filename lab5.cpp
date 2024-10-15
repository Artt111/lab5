#include <iostream>  
#include <cstring>   

// Ֆունկցիա, որն իրականացնում է Run-Length կոդավորումը
void runLengthEncode(const std::string &input, std::string &output) {
    int count;  
    int length = input.length();  

    // Ցիկլ՝ յուրաքանչյուր նիշի վրա անցնելու համար
    for (int i = 0; i < length; i++) {
        count = 1;  

        // Ստուգում է, արդյոք հաջորդ նիշը նույնն է, ինչ ընթացիկը
        while (i + 1 < length && input[i] == input[i + 1]) {
            count++;  
            i++;      
        }

        // Ավելացնում է ընթացիկ նիշը և նրա քանակը արդյունքի մեջ
        output += input[i] + std::to_string(count);
    }
}

int main() {
    std::string input = "aaabbbccdaa"; 
    std::string output;  

    
    runLengthEncode(input, output);

    
    std::cout << "Input: " << input << std::endl;
    std::cout << "Encoded: " << output << std::endl;

    return 0;  
}

