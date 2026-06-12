class listnode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def sawp(prev, a, b):
    temp = b.next
    b.next = a
    a.next = temp
    prev.next = b


a = listnode(3)
a.next = listnode(4)
a.next.next = listnode(5)
a.next.next.next = listnode(6)
head=listnode(0)
head.next=a
temp = a
sawp(head,a, a.next)
while temp:
    print(temp.val)
    temp = temp.next

