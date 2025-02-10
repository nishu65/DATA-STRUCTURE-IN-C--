#include <iostream>

class tree {
private:
    struct leave {
        int data;
        leave* left;
        leave* right;
    };
    leave* root;

    void destroy_tree(leave* leaf) {
        if (leaf != nullptr) {
            destroy_tree(leaf->left);
            destroy_tree(leaf->right);
            delete leaf;
        }
    }

public:
    tree() {
        root = nullptr;
    }

    void insert(int data) {
        leave* newleave = new leave;
        newleave->data = data;
        newleave->left = nullptr;
        newleave->right = nullptr;

        if (root == nullptr) {
            root = newleave;
        } else {
            leave* current = root;
            leave* parent = nullptr;

            while (current != nullptr) {
                parent = current;
                if (newleave->data > current->data) {
                    current = current->right;
                } else {
                    current = current->left;
                }
            }

            if (newleave->data < parent->data) {
                parent->left = newleave;
            } else {
                parent->right = newleave;
            }
        }
    }

    void display() {
        ino(root);
    }

    void ino(leave* root) {
        if (root != nullptr) {
            ino(root->left);
            std::cout << root->data << std::endl;
            ino(root->right);
        }
    }

    ~tree() {
        destroy_tree(root);
    }
};

int main() {
    tree t;
    t.insert(10);
    t.insert(5);
    t.insert(15);
    t.insert(3);
    t.insert(7);
    t.insert(12);
    t.insert(17);
    t.display();
    return 0;
}