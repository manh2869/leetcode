class Listnode:
    def __init__(self, val, next=None):
        self.val = val
        self.next = next


def deleteDuplicates(head):
    temp = head
    if temp == None:
        return head
    while temp.next != None and temp.next != None:
        if temp.val == temp.next.val:
            temp.next = temp.next.next
        else:
            temp = temp.next
    return head


a = Listnode(12)
b = Listnode(16)
c = Listnode(16)
d = Listnode(16)
e = Listnode(18)
a.next = b
b.next = c
c.next = d
d.next = e


temp = deleteDuplicates(a)
while temp != None:
    print(temp.val)
    temp = temp.next
