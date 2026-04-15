#include<bits/stdc++.h>
using namespace std;

class Card 
{
private:
    string rank;
    string suit;
    bool faceUp;
public:
    int compareTo(Card c) { return 0; }
    void flip() { faceUp = !faceUp; }
};

class Hand 
{
private:
    vector<Card> cards; // size 2
    int value;
public:
    int compareTo(Hand h) { return 0; }
};

class Player 
{
protected:
    string name;
    int chips;
    int bet;
    Hand hand;
    bool isInPlay;
    int betAmount;
public:
    void doBet(int amount) {}
    void check() {}
    void call() {}
    void fold() {}
    void clear() {}
    void raise(int amount) {}
    virtual void makeMove() = 0; // Để phân biệt Human và Computer
};

class HumanPlayer : public Player 
{
public:
    void makeMove() override 
    {
        // Logic cho người chơi thật
    }
};

class ComputerPlayer : public Player 
{
private:
    int difficulty;
public:
    void makeMove() override 
    {
        // Logic cho AI
    }
};

class Deck 
{
private:
    vector<Card> cards; // size 52
public:
    void deal(Player* p) {}
    void reset() {}
    void shuffle() {}
    Card topCard() { return cards.back(); }
};

class PokerGame 
{
private:
    vector<Player*> players; // 2..8
    int currentPlayer;
    Deck deck;
    int round;
public:
    void playRound() 
    {
        // Logic vòng chơi
    }
};