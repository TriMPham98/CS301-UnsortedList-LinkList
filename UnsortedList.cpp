

template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    head = nullptr;
    currPos = nullptr;
}

template<class T>
void UnsortedList<T>::MakeEmpty() {

}

template<class T>
bool UnsortedList<T>::IsFull() const {
    return false;
}

template<class T>
int UnsortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool UnsortedList<T>::Contains(T someItem) {
    return false;
}

template<class T>
void UnsortedList<T>::AddItem(T item) {
    Node * nodeToInsert = new Node;
    nodeToInsert->value = item;
    nodeToInsert->next = head;
    head = nodeToInsert;
    ++length;
}

template<class T>
void UnsortedList<T>::DeleteItem(T item) {

}

template<class T>
void UnsortedList<T>::ResetIterator() {

}

template<class T>
T UnsortedList<T>::GetNextItem() {
    return T();
}
