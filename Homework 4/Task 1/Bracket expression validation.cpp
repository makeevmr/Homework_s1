#include <iostream>

typedef const char str16[16];

template<class Type>
struct CaseData {
    Type input;
    bool expected;
};


template<class Type>
bool testCase(bool(*func)(Type), CaseData<Type> data, bool &res) {
    res = func(data.input);
    return res == data.expected;
}

bool brackets_checker(const char *brackets_str) {
    int stack_length = 0;
    char stack[16];
    while (*brackets_str != '\0') {
        if (*brackets_str == '(' || *brackets_str == '{' || *brackets_str == '[') {
            stack[stack_length] = *brackets_str;
            ++brackets_str;
            ++stack_length;
        } else if (*brackets_str == ')' || *brackets_str == '}' || *brackets_str == ']') {
            if (*brackets_str == ')') {
                if (stack_length > 0 && stack[stack_length - 1] == '(') {
                    --stack_length;
                    ++brackets_str;
                } else {
                    return false;
                }
            }
            if (*brackets_str == '}') {
                if (stack_length > 0 && stack[stack_length - 1] == '{') {
                    --stack_length;
                    ++brackets_str;
                } else {
                    return false;
                }
            }
            if (*brackets_str == ']') {
                if (stack_length > 0 && stack[stack_length - 1] == '[') {
                    --stack_length;
                    ++brackets_str;
                } else {
                    return false;
                }
            }
        }
    }
    if (stack_length == 0) {
        return true;
    } else {
        return false;
    }
}

void brackets_checker_executor() {
    CaseData<str16> test_cases[] = {
            {"",               true},
            {"(",              false},
            {")",              false},
            {"()",             true},
            {")(",             false},
            {"()()",           true},
            {"(()",            false},
            {"())",            false},
            {"(())",           true},
            {")(()))",         false},
            {"(())((()())())", true},
            {"[{[{{(())}}]}]", true},
            {"[[(]]", false},
            {"[", false},
            {"{}[]()", true},
            {"{[]()(())}}", false},
            {"{(({[]})[])}", true},
            {"()(){}{}[][]", true}
    };
    const size_t cNumCases = sizeof(test_cases)/sizeof(CaseData<str16>);
    bool result = true;
    for (size_t iter=0; iter < cNumCases; ++iter) {
        bool curr_check;
        bool curr_test = testCase<str16>(
                brackets_checker,
                test_cases[iter],
                curr_check
        );
        std::cout << "test \"" << test_cases[iter].input << "\" is " << (curr_test ? "ok" : "failed") << '\n';
        std::cout << "\tresult: " << curr_check << " expected " << test_cases[iter].expected << '\n';
        result = result && curr_test;
    }
    std::cout << "Total result: " << result << '\n';
}