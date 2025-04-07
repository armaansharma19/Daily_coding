package Treess;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

class Node {
    int data;
    Node left, right;

    Node(int data) {
        this.data = data;
        left = right = null;
    }
}

public class leftView {

    // This is the function you need to implement
    public static void printLeftView(Node root) {
        // Write your logic here
       // ArrayList<Integer> li=new ArrayList<>();
        Queue<Node> q=new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                Node temp=q.poll();
                if(i==size-1){
                   // li.add(temp.data);
                    System.out.println(temp.data);
                }
               if(temp.left!=null)q.add(temp.left);
               if(temp.right!=null)q.add(temp.right);
            }
        }
    }

    public static void main(String[] args) {
        // Creating a sample binary tree:
        //         1
        //       /   \
        //      2     3
        //     / \     \
        //    4   5     6
        //   /
        //  7

        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.right.right = new Node(6);
        root.left.left.left = new Node(7);

        // Call your function here
        System.out.println("Left view of the binary tree is:");
        printLeftView(root);
    }
}
