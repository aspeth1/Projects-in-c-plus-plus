#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

template <typename Q>
        class Queue{
        public:
            vector<Q> queue;
            double count;

            Queue();
            void add_item(Q str);
            void removeFirstItem();
            double getFirstItem();
            double getLastItem();
            double getLength();
            ~Queue();

        private:

            Q t;
        };

template <typename Q>
Queue<Q>::Queue() = default;

template <typename Q>
void Queue<Q>::add_item(Q str) {
    this->t = str;
    queue.push_back(t);
}

template <typename Q>
void Queue<Q>::removeFirstItem(){
    if(queue.size() == 0){
        throw runtime_error("Queue is empty!");
    }else{
        queue.erase(queue.begin());
    }

}

template <typename Q>
double Queue<Q>::getFirstItem() {
    if(queue.size() <= 0){
        throw runtime_error("Queue is empty!");
    }else{
        return queue.front();
    }
}

template <typename Q>
double Queue<Q>::getLastItem() {
    if(queue.size() == 0){
        throw runtime_error("Queue is empty!");
    }else{
        return queue.back();
    }


}

template <typename Q>
double Queue<Q>::getLength() {
    if(queue.size() == 0){
        throw runtime_error("Queue is empty!");
    }
    count = queue.size();
    return count;
}

template <typename Q>
Queue<Q>::~Queue() = default;


int main() {

    try{
        Queue<int> que;

        cout << "First item in the queue is: " << que.getFirstItem() << endl;
        cout << "Last item in the queue is: " << que.getLastItem() << endl;
        cout << "There are " << que.getLength() << " items in the queue" << endl;
    }catch(runtime_error& e){
        cerr << e.what() << endl;
    }



    return 0;
}
