function containsKey(head, key) {
    let temp = head;
    while (temp !== null) {
        if (temp.data === key) {
            return true;
        }
        temp = temp.next;
    }
    return false;
}
