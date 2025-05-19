#include "Project.h"

Project::Project() : mBudget(0) {}

Project::Project(const std::string& name, const std::string& description, double budget)
    : mName(name), mDescription(description), mBudget(budget) {}

const std::string& Project::getName() const {
    return mName;
}

const std::string& Project::getDescription() const {
    return mDescription;
}

double Project::getBudget() const {
    return mBudget;
}

void Project::setName(const std::string& name) {
    mName = name;
}

void Project::setDescription(const std::string& description) {
    mDescription = description;
}

void Project::setBudget(double budget) {
    mBudget = budget;
}
