#include "ProjectManager.h"
#include <iostream>

int main() {
    ProjectManager projectManager;
    projectManager.addProject("A", "2D Game that looks similar to Mario", 10000.0);
    projectManager.addProject("B", "Tic Tac Toe", 20000.0);
    projectManager.addProject("C", "Tetris", 30000.0);

    // Search for a project by name
    std::cout << "Enter a project name to search for: ";
    std::string projectName;
    std::cin >> projectName;
    Project* project = projectManager.findProject(projectName);
    if (project) {
        std::cout << "Project found: " << project->getDescription() << std::endl;
    } else {
        std::cout << "Project not found." << std::endl;
    }
    // Display all projects with a budget less than or equal to a specified value
    std::cout << "Enter a budget limit to display projects below: ";
    double budgetLimit;
    std::cin >> budgetLimit;
    std::cout << "ALL PROJECTS BELOW THE GIVEN VALUE:\n";
    projectManager.displayProjectsLessThan(budgetLimit);

    std::cout << "ALL PROJECTS:\n";
    // Display all projects using an iterator
    projectManager.displayAllProjects();

    // Remove a project by name
    std::cout << "Enter a project name to remove: ";
    std::cin >> projectName;
    projectManager.removeProject(projectName);

    // Display all projects again to verify that the project was removed
    projectManager.displayAllProjects();

    return 0;
}
