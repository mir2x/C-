#include<iostream>
#include<unordered_map>
#include<string>

int main() {
    std::unordered_map<std::string, int> umap;
    umap["A"] = 10;
    umap["B"] = 20;
    umap["C"] = 30;
    //Size
    std::cout << "Size: " << umap.size() << "\n";
    // Is Empty
    std::cout << "Is Empty? " << umap.empty() << "\n";
    // Find
    auto it = umap.find("B");
    // Insert
    umap.insert(std::make_pair("D", 60));
    umap["E"] = 70;
    // Erase
    umap.erase("D");
    // Value of a key
    std::cout << umap.at("A") << "\n";
    std::cout << umap["A"] << "\n";
    std::cout << umap.operator[]("A") << "\n";
    // Print all value
    for(auto it = umap.begin(); it != umap.end(); it++) {
        std::cout << it->first << ":" << it->second << "\n";
    }
    umap.clear();
    return 0;
}