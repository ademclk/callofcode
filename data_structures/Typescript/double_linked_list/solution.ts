/** to run this file
 * npx ts-node ./data_structures/double_linked_list/solution.ts
 */

class DoublyLinkedNode<E> {
  constructor(
    public data: E,
    public next: DoublyLinkedNode<E> | null = null,
    public prev: DoublyLinkedNode<E> | null = null
  ) {}
}

interface IDoublyLinkedList<E> {
  insertAfter(node: DoublyLinkedNode<E>, newNode: DoublyLinkedNode<E>): void;
  insertBefore(node: DoublyLinkedNode<E>, newNode: DoublyLinkedNode<E>): void;
  insertBeginning(newNode: DoublyLinkedNode<E>): void;
  insertEnd(newNode: DoublyLinkedNode<E>): void;
  remove(node: DoublyLinkedNode<E>): void;
  traverseForward(): void;
  traverseBackward(): void;
}

class DoublyLinkedList<E> implements IDoublyLinkedList<E> {
  private firstNode: DoublyLinkedNode<E> | null = null;
  private lastNode: DoublyLinkedNode<E> | null = null;

  constructor() {}

  public insertAfter(node: DoublyLinkedNode<E>, newNode: DoublyLinkedNode<E>): void {
    newNode.prev = node;
    if (node.next === null) {
      newNode.next = null;
      this.lastNode = newNode;
    } else {
      newNode.next = node.next;
      node.next.prev = newNode;
    }
    node.next = newNode;
  }

  public insertBefore(node: DoublyLinkedNode<E>, newNode: DoublyLinkedNode<E>): void {
    newNode.next = node;
    if (node.prev == null) {
      newNode.prev = null;
      this.firstNode = newNode;
    } else {
      newNode.prev = node.prev;
      node.prev.next = newNode;
    }
    node.prev = newNode;
  }

  public insertBeginning(newNode: DoublyLinkedNode<E>): void {
    if (!this.firstNode) {
      this.firstNode = newNode;
      this.lastNode = newNode;
      newNode.prev = null;
      newNode.next = null;
    } else {
      this.insertBefore(this.firstNode, newNode);
    }
  }

  public insertEnd(newNode: DoublyLinkedNode<E>): void {
    if (this.lastNode === null) {
      this.insertBeginning(newNode);
    } else {
      this.insertAfter(this.lastNode, newNode);
    }
  }

  public remove(node: DoublyLinkedNode<E>): void {
    if (!node.prev) {
      this.firstNode = node.next;
    } else {
      node.prev.next = node.next;
    }

    if (!node.next) {
      this.lastNode = node.prev;
    } else {
      node.next.prev = node.prev;
    }
  }

  private traverse(isForward: boolean): void {
    let current = isForward ? this.firstNode : this.lastNode;
    const temp = new Array<E>();
    while (current) {
      temp.push(current.data);
      current = isForward ? current.next : current.prev;
    }

    console.log(temp.map((data) => `-> ${data}`).join(''));
  }

  public traverseForward(): void {
    this.traverse(true);
  }

  public traverseBackward(): void {
    this.traverse(false);
  }
}

const linkedList = new DoublyLinkedList<number>();
const node1 = new DoublyLinkedNode<number>(1);
const node2 = new DoublyLinkedNode<number>(2);
const node3 = new DoublyLinkedNode<number>(3);
const node4 = new DoublyLinkedNode<number>(4);
const node5 = new DoublyLinkedNode<number>(5);

linkedList.insertBeginning(node1);
linkedList.insertAfter(node1, node2);
linkedList.insertBefore(node2, node3);
linkedList.insertEnd(node4);
linkedList.insertEnd(node5);

linkedList.remove(node4);

linkedList.traverseForward();
linkedList.traverseBackward();
