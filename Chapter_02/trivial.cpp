int main() {
    // --- LEGAL VARIABLE NAMES ---
    int legalName = 10;
    double _score = 98.5;
    char user_choice = 'A';
    int count2 = 5;
    float MAX_VALUE = 100.0f;

    // --- ILLEGAL VARIABLE NAMES (Will trigger compiler errors if uncommented) ---
    
    // 1. Reserved Keyword as Identifier
    // int double = 0;        // Error: 'double' is a reserved type keyword.

    // 2. Starting with a Number
    // int 2ndPlayer = 2;     // Error: Identifiers cannot begin with a digit.

    // 3. Special Characters / Punctuation
    // double total$ = 50.0;   // Error: '$' is generally invalid (non-standard) in identifiers.
    // int user-age = 20;     // Error: Hyphen '-' is interpreted as a subtraction operator.

    // 4. Containing Spaces
    // int my variable = 4;   // Error: Space splits the declaration into two separate tokens.

    return 0;
}