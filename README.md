#include <iostream>
#include <unordered_map>
#include <string>

class InMemoryDB {
private:
    std::unordered_map<std::string, std::string> tempData;
    std::unordered_map<std::string, std::string> committedData;

public:
    void set(const std::string& key, const std::string& value) {
        tempData[key] = value;
        std::cout << "Staged: " << key << " = " << value << std::endl;
    }

    void commit() {
        for (const auto& pair : tempData) {
            committedData[pair.first] = pair.second;
        }
        tempData.clear();
        std::cout << "Changes committed.\n";
    }

    void showCommitted() const {
        std::cout << "Committed Data:\n";
        for (const auto& pair : committedData) {
            std::cout << pair.first << " = " << pair.second << std::endl;
        }
    }
};

int main() {
    InMemoryDB db;
    db.set("username", "coder123");
    db.set("email", "coder@example.com");

    db.commit();  // Save changes

    db.showCommitted();  // Display committed data

    return 0;
}

