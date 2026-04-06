// https://leetcode.com/problems/valid-parentheses/

bool isValid(char* s) {
    int p = 0;
    while ( *s != '\0' ) {
        if ( *s == '(' ) {
            p += 1;
        } else if ( *s == ')' ) {
            p -= 1;
        }
        if ( p < 0 ) {
            return false;
        }
        s++;
    }
    return p == 0;
}
