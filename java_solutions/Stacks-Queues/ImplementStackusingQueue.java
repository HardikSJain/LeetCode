import java.util.*;

/* 
Runtime: 0 ms, faster than 100.00% of Java online submissions for Implement Stack using Queues.
Memory Usage: 41.1 MB, less than 76.05% of Java online submissions for Implement Stack using Queues.
*/

class ImplementStackusingQueue {
    
    private Queue<Integer> queue = new LinkedList<>();
    
    public ImplementStackusingQueue() {
        
    }
    
    public void push(int x) {
        queue.add(x);
        for(int i = 1; i < queue.size(); i++){
            queue.add(queue.remove());
        }
    }
    
    public int pop() {
        return queue.remove();
    }
    
    public int top() {
        if(!queue.isEmpty()){
            return queue.peek();
        }else{
            return -1;
        }
    }
    
    public boolean empty() {
        return queue.isEmpty();
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */