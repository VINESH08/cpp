#include <iostream>
using namespace std;
class eci
{
protected:
    int candidate_id[20], vote_count[20] = {0}, voters_count, candi_count, k;
};
class chennai : public eci
{
public:
    void chennaiele()
    {
        cout << "enter the number of voters in chennai:" << endl;
        cin >> voters_count;
        cout << "enter the number of candidates in chennai:" << endl;
        cin >> candi_count;
        vote_count[candi_count];
        cout << "enter the id of competators:" << endl;
        for (int i = 0; i < candi_count; i++)
        {
            cin >> candidate_id[i];
        }
        for (int i = 0; i < voters_count; i++)
        {
            cout << "enter the voter id you want to vote from 1 to " << candi_count << endl;
            cin >> k;
            vote_count[k - 1]++;
        }
    }
    void chennaires()
    {
        int max = vote_count[0], index;
        for (int i = 1; i < candi_count; i++)
        {
            if (vote_count[i] > max)
            {
                max = vote_count[i];
                index = i;
            }
        }
        cout << "the winner for chennai election is candidate with id:" << index + 1 << endl;
    }
};
int main()
{
    chennai cheobj;
    cheobj.chennaiele();
    cheobj.chennaires();
    return 0;
}