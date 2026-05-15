int p1, p2, p3;

    cout << "Enter score of Player 1: ";
    cin >> p1;

    cout << "Enter score of Player 2: ";
    cin >> p2;

    cout << "Enter score of Player 3: ";
    cin >> p3;

    if (p1 > p2 && p1 > p3) {
        cout << "Player 1 is the winner";
    }
    else if (p2 > p1 && p2 > p3) {
        cout << "Player 2 is the winner";
    }
    else if (p3 > p1 && p3 > p2) {
        cout << "Player 3 is the winner";
    }
    else if (p1 == p2 && p1 > p3) {
        cout << "Player 1 and Player 2 are tied for the lead";
    }
    else if (p1 == p3 && p1 > p2) {
        cout << "Player 1 and Player 3 are tied for the lead";
    }
    else if (p2 == p3 && p2 > p1) {
        cout << "Player 2 and Player 3 are tied for the lead";
    }
    else {
        cout << "All three players are tied";
    }