#include <malloc.h>
#include <stdio.h>

struct ListNode {
 	int val;     
	struct ListNode *next;
};


void swap(struct ListNode **tree, int i, int j) {
    struct ListNode *tmp = tree[i];
    tree[i] = tree[j];
    tree[j] = tmp;
}

void heapify(struct ListNode **tree, int n, int i) {
    /* 本函数从上到下依次将最大值下沉，即最小堆实现 */
    if (i >= n) return;  // 叶子节点超界
    int minIdx = i;  // 最小节点索引
    int left = 2 * i + 1, right = 2 * i + 2;  // 左右孩子节点索引
    if (left < n && tree[left]->val < tree[minIdx]->val) {
        minIdx = left;
    }
    if (right < n && tree[right]->val < tree[minIdx]->val) {
        minIdx = right;
    }
    if (minIdx != i) {
        /* 如果当前节点不是最小堆，交换然后依次递归下去构建最小堆 */
        swap(tree, i, minIdx);
        heapify(tree, n, minIdx);  // 注意传参是minIdx继续整理堆
    }
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
    int i, j, k;
    // 1.特判空列表
    if (listsSize < 1 || lists == NULL) return NULL;  // [[]]不能判断
    // 2.构建最小堆实现
    struct ListNode **tree = (struct ListNode**)malloc(sizeof(struct ListNode*) * listsSize);
    for ( i = 0, j = listsSize, k = 0; i < j; i++) {
        if (!lists[i]) listsSize--;  // NULL
        else tree[k++] = lists[i];
    }
    if (listsSize <= 0) return NULL;
    int idx = ((listsSize - 1) - 1) / 2;  // 获取最后一个叶子节点下标
    for (; idx >= 0; idx--) heapify(tree, listsSize, idx);
    /* 3.堆进行维护，每次“替换”最小值
    * 如果空表，移到最后对剩下元素维护堆，直到最后堆的大小为0结束。
    */
    struct ListNode *dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *prev = dummy, *curr;
    while (listsSize > 0) {
        /* 每次从堆顶取最小元素的节点出来，然后构建链表后整理堆
        * 1.如果当前堆顶元素无后续节点，那么将其与最后idx交换，下次整理堆数量-1
        * 2.如果当前堆顶元素有后继节点，那么继续构建表后整理堆。
        * 整理堆永远是从0号位置开始，只是整理数量listsSize下降而已。
        */
        curr = tree[0];
        if (curr->next == NULL) {
            swap(tree, listsSize - 1, 0);  // 与最后一位交换
            listsSize--;  // 下次整理堆数量减少1
        } else tree[0] = tree[0]->next;
        prev->next = curr;
        prev = curr;
        heapify(tree, listsSize, 0);
    }
    return dummy->next;
}

int main()
{
    
}

