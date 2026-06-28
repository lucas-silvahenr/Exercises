class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def printList(ListNode):
    while ListNode is not None:
        print(f"{ListNode.val}", end="")
        if ListNode.next is not None:
            print("->", end="")
        ListNode = ListNode.next
    print()

def addTwoNumbers(l1, l2):
    """
    :type l1: Optional[ListNode]
    :type l2: Optional[ListNode]
    :rtype: Optional[ListNode]
    """
    dummy = ListNode()
    current = dummy
    carry = 0

    while l1 or l2 or carry:
        val1 = l1.val if l1 else 0
        val2 = l2.val if l2 else 0

        total = val1 + val2 + carry
        carry = total // 10

        current.next = ListNode(total % 10)
        current = current.next

        if l1:
            l1 = l1.next
        if l2:
            l2 = l2.next

    return dummy.next


node1 = ListNode(2)
node1.next = ListNode(4)
node1.next.next = ListNode(3)

node2 = ListNode(val=5, next=ListNode(val=6, next=ListNode(val=4)))

print("Expected: 708")
printList(addTwoNumbers(node1, node2))
