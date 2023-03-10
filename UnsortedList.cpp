template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    head = nullptr;
    currPos = nullptr;
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
    try {
        Node *temp = new Node;
        delete temp;
    } catch (std::bad_alloc error) {
        return true;
    }
    return false;
}

template<class T>
int UnsortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool UnsortedList<T>::Contains(T someItem) {
    Node *currN = head;
    while (currN != nullptr) {
        if (currN->value == someItem) {
            return true;
        }
        currN = currN->next;
    }
    return false;
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
    if (currPos == nullptr || currPos->next == nullptr) {
        throw "Out of bounds";
    }
    T itemToReturn = currPos->value;
    currPos = currPos->next;
    return itemToReturn;
}


