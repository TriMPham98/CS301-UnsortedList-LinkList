

template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    head = nullptr;
    currPos = nullptr;
}

template<class T>
UnsortedList<T>::UnsortedList(const UnsortedList<T> &otherList) {
//    length = otherList.length;
//
//    if (otherList.head == nullptr) {
//        head = nullptr;
//        return;
//    }
//
//    head = new Node;
//    head = otherList.head->value;
//    head->next = nullptr;
//
//    Node *ptr1 = otherList.head->next;
//    Node *ptr2 = head;
//
//    while (ptr1 != nullptr) {
//        ptr2->next = new Node;
//        (ptr2->next)->value = ptr1->value;
//        (ptr2->next)->next = nullptr;
//        ptr1 = ptr1->next;
//        ptr2 = ptr2->next;
//    }
}

template<class T>
UnsortedList<T>::~UnsortedList() {
    MakeEmpty();
}

template<class T>
void UnsortedList<T>::MakeEmpty() {
    while (head != nullptr) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    length = 0;
}

template<class T>
bool UnsortedList<T>::IsFull() const {
//    try {
//        Node *temp = new Node;
//        delete temp;
//    }
//    catch (std::bad_alloc error) { // Not able to allocate memory
//        return true;
//    }
//    return false;
}

template<class T>
int UnsortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool UnsortedList<T>::Contains(T someItem) {

}

template<class T>
void UnsortedList<T>::AddItem(T item) {
    Node *nodeToInsert = new Node;
    nodeToInsert->value = item;
    nodeToInsert->next = head;
    head = nodeToInsert;
    ++length;
}

template<class T>
void UnsortedList<T>::DeleteItem(T item) {
    Node *currN = head;
    Node *prevN = nullptr;

    while (currN != nullptr) {
        if (currN->value == item) {
            if (prevN != nullptr) {
                prevN->next = currN->next;
            } else {
                head = currN->next;
            }
            delete currN;
            --length;
            break;
        }
        prevN = currN;
        currN = currN->next;
    }
}

template<class T>
void UnsortedList<T>::ResetIterator() {
    currPos = head;
}

template<class T>
T UnsortedList<T>::GetNextItem() {
    T itemToReturn = currPos->value;
    currPos = currPos->next;
    return itemToReturn;
}


