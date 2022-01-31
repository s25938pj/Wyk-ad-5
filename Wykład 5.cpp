#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::swap;

auto print(vector<int>vec) -> void
{
    for (auto e : vec)
    {
        cout << e << ' ';
    }
    cout << endl;
}

auto main() -> int
{
    auto str = string("Ala ma kota");
    auto str2 = string("Kot");
    //cout << str << '\n';
    //cout << str[0] << '\n';
    //cout << str[1] << '\n';
    //cout << str[2] << '\n';
    //cout << str[3] << '\n';

    //Sprawdzanie ktory string jest krotszy
    /*
    if (str.length() < str2.length())
    {
        cout << "abc" << endl;
    }
    else
    {
        cout << "def" << endl;
    }
    */

    //Niepoprawne (dlugi kod)
   /*
   cout << str2[0] << '\n';
   cout << str2[1] << '\n';
   cout << str2[2] << '\n';

   cout << str[0] << '\n';
   cout << str[1] << '\n';
   cout << str[2] << '\n';
   cout << str[4] << '\n';
   cout << str[5] << '\n';
   cout << str[6] << '\n';
   cout << str[7] << '\n';
   cout << str[8] << '\n';
   cout << str[9] << '\n';
   cout << str[10] << '\n';
   */
   //może być też <= 10
/* for (auto i = 0; i < str.size(); i++)
 {
     cout << str[i] << '\n';
 }
 */
 /*
 for (auto i = 0; i < str.size(); i += 2)
 {
     cout << str[i] << ' ';
     }

 for (auto i = 0; i < str.size(); i += 2)
     if (i % 2 == 0)
     {
         {
         cout << str[i] << ' ';
         }
     }
     */
    //auto ints = vector<int>{ 1,2,3,4,5 };

    //cout << ints[0] << ' ';
    //cout << ints[1] << ' ';
    //cout << ints[2] << ' ';
    //cout << ints[3] << ' ';
    //cout << ints[4] << ' ';

    /*
    for (auto i = 0; i < ints.size(); i++)
    {
        cout << ints[i] << ' ';
    }
    */

    /*
    for (auto element : ints)
    {
        cout << element << ' ';
    }

    auto names = vector<string>{ "Ala", "Maciek", "Filip", "Pawel" };
        for (auto name : names)
        {
            cout << name << ' ';
        }
        */
    
    
    //auto ints = vector<int>{ 1,2,8,0,3,4,5 };

    /*
    auto current_min = ints[0];
    for (auto new_element : ints)
    {
        if (new_element < current_min)
        {
            current_min = new_element;
        }
    }
    cout << current_min;
    */

    /*
    auto to_find = -2;
    auto is_present = false;

    for (auto element : ints)
    {
        if (element == to_find)
        {
            is_present = true;
        }
    }
    if (is_present)
    {
        cout << "There is a " << to_find << endl;
    }
    else
    {
        cout << "There isn't any" << to_find << endl;
    }
    */
    auto ints = vector<int>{ 1,2,3,4,5,6 };
    print(ints);
    ints.push_back(7); // dodawanie na koncu wektorów elementu 7
    print(ints);
    ints.pop_back(); 
    print(ints);

    //reverse(ints.begin(), ints.end()); - odwracanie tablicy wektorów
    /*
    for (auto i = ints.size() - 1; i >= 0; i--)
    {
        cout << ints[i] << ' ';
    }
    */
    /*
    for (auto i = 0; i < ints.size() / 2; i++)
    {
        swap(ints[i], ints[ints.size() - 1 - i]);
        auto tmp = ints[i];
        ints[i] = ints[ints.size() - 1 - i];
        ints[ints.size() - 1 - i] = tmp;
    }
    */
    print(ints);
}