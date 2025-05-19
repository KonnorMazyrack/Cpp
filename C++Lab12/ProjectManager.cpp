#include "ProjectManager.h"
#include <iostream>

void ProjectManager::addProject(const std::string& name, const std::string& description, double budget) {
    Project project(name, description, budget);
    mProjects[name] = project;
}

void ProjectManager::removeProject(const std::string& name) {
    mProjects.erase(name);
}

Project* ProjectManager::findProject(const std::string& name) {
    auto it = mProjects.find(name);
    if (it != mProjects.end()) {
        return &(it->second);
    } else {
        return nullptr;
    }
}

void ProjectManager::displayProjectsLessThan(double budgetLimit) {
    for (const auto& projectPair : mProjects) {
        if (projectPair.second.getBudget() <= budgetLimit) {
            std::cout << "Project name: " << projectPair.first << ", description: "
                      << projectPair.second.getDescription() << ", budget: " << projectPair.second.getBudget() << std::endl;
        }
    }
}

void ProjectManager::displayAllProjects() {
    for (const auto& projectPair : mProjects) {
        std::cout << "Project name: " << projectPair.first << ", description: "
                  << projectPair.second.getDescription() << ", budget: " << projectPair.second.getBudget() << std::endl;
    }
}
