#ifndef PROJECTMANAGER_H
#define PROJECTMANAGER_H

#include "Project.h"
#include <map>

class ProjectManager {
public:
    void addProject(const std::string& name, const std::string& description, double budget);
    void removeProject(const std::string& name);
    Project* findProject(const std::string& name);
    void displayProjectsLessThan(double budgetLimit);
    void displayAllProjects();

private:
    std::map<std::string, Project> mProjects;
};

#endif
