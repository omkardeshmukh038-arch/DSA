# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: ListNode | None) -> ListNode | None:

        if head == None:
            return head

        temp = head
        prev = head

        while temp is not None and temp.next is not None:
            temp = temp.next

            if(temp.val != prev.val):
                prev.next = temp
                prev = temp


        prev.next = None

        return head

        