#include <iostream>
#include <memory>

template <typename T>
class TreeNode {
public:
    T value;
    std::unique_ptr<TreeNode<T>> left;
    std::unique_ptr<TreeNode<T>> right;

    TreeNode(T val) : value(val), left(nullptr), right(nullptr) {}
};

template <typename T>
class BinaryTree {
public:
    std::unique_ptr<TreeNode<T>> root;

    BinaryTree() : root(nullptr) {}

    void insert(T value) {
        root = insert(std::move(root), value);
    }

    void inorderTraversal() const {
        inorderTraversal(root.get());
    }

private:
    std::unique_ptr<TreeNode<T>> insert(std::unique_ptr<TreeNode<T>> node, T value) {
        if (!node) {
            return std::make_unique<TreeNode<T>>(value);
        }
        if (value < node->value) {
            node->left = insert(std::move(node->left), value);
        } else {
            node->right = insert(std::move(node->right), value);
        }
        return node;
    }

    void inorderTraversal(const TreeNode<T>* node) const {
        if (!node) return;
        inorderTraversal(node->left.get());
        std::cout << node->value << " ";
        inorderTraversal(node->right.get());
    }
};

int main() {
    BinaryTree<int> tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    std::cout << "Inorder Traversal: ";
    tree.inorderTraversal();
    std::cout << std::endl;

    return 0;
}