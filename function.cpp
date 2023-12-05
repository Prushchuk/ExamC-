#include "function.h"


void add_task(Task tasks[], int& task_count) {
	if (task_count >= 100) {
		cout << "Limit\n";
		return;
	}
	cout << "Enter name: ";
	cin >> tasks[task_count].name;

    cout << "Enter priority: ";
    cin >> tasks[task_count].priority;

    cout << "Enter opus: ";
    cin >> tasks[task_count].opus;

	cout << "Enter data and 4as: ";
	cin >> tasks[task_count].datatime;

	task_count++;
}

void delete_task(Task tasks[], int& task_count, int index) {
	if (index < 0 || index >= task_count) {
		cout << "Error!";
		return;
	}

	for (int i = index; i < task_count - 1; i++)
	{
		tasks[i] = tasks[i + 1];
	}
	task_count--;
}

void edit_task(Task tasks[], int& task_count, int index) {
	if (index < 0 || index >= task_count) {
		cout << "Error!";
		return;
	}

	cout << "Enter name: ";
	cin >> tasks[task_count].name;

	cout << "Enter priority: ";
	cin >> tasks[task_count].priority;

	cout << "Enter opus: ";
	cin >> tasks[task_count].opus;

	cout << "Enter data and 4as: ";
	cin >> tasks[task_count].datatime;

}


void display_task(Task tasks[], int task_count) {
	for (int i = 0; i < task_count; i++)
	{
		cout << "Task: " << i + 1 << ":\n";
		cout << "Name: " << tasks[task_count].name << endl;
		cout << "Priority: " << tasks[task_count].priority << endl;
		cout << "Opus: " << tasks[task_count].opus << endl;
		cout << "Data&Time: " << tasks[task_count].datatime << endl;
		cout << "\n\n\n\n";
	}
}