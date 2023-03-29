#include <iostream>
#include "QueueType.cpp"
using namespace std;

int main(){
    int n;
    cout << "How many types of Coin you have: ";
    cin >> n;

    QueType<int> coins, counts;

    int arr[n], x;
    cout << "Enter coins: ";
    for(int i=0; i<n; i++){
        cin >> x;
        arr[i] = x;
        coins.Enqueue(x);
        counts.Enqueue(1);
    }

    int amount;
    cout << "Enter total amount: ";
    cin >> amount;

    int coin, coin_count = -1;
    while(true){
        coins.Dequeue(coin);
        counts.Dequeue(coin_count);
        if(coin == amount){
            break;
        }else{
            coin_count++;
            for(int i=0; i<n; i++){
                coins.Enqueue(arr[i] + coin);
                counts.Enqueue(coin_count);
            }
        }
    }

    cout << "Required coins: " << coin_count << endl;

    return 0;
}
