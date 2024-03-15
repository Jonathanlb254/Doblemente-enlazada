#include <iostream>

// Definición de la estructura de un nodo, 
struct Node {
    int data;
    Node* prev;//Apunta al nodo anterior
    Node* next;//Apunta al nodo siguiente
};

// Función para sumar todos los nodos de la lista
int sumarLista(Node* head) {
    int suma = 0;
    Node* current = head;
while (current != NULL) {

        suma += current->data;
        current = current->next;
    }
    return suma;
}

// Función para encontrar el número mayor de la lista
int encontrarMayor(Node* head) {
    int mayor = head->data;
    Node* current = head->next;
    while (current != NULL) {
        if (current->data > mayor) {
            mayor = current->data;
        }
        current = current->next;
    }
    return mayor;
}

// Función para encontrar el número menor de la lista
int encontrarMenor(Node* head) {
    int menor = head->data;
    Node* current = head->next;
    while (current != NULL) {
        if (current->data < menor) {
            menor = current->data;
        }
        current = current->next;
    }
    return menor;
}

int main() {
    // Crear nodos
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;

    // Asignar valores a los nodos
    first->data = 1;
    first->prev = NULL;
    first->next = second;

    second->data = 2;
    second->prev = first;
    second->next = third;

    third->data = 10;
    third->prev = second;
    third->next = NULL;

    // Calcular la suma de los nodos
    std::cout << "La suma de los nodos es: " << sumarLista(first) << std::endl;

    // Encontrar el número mayor de la lista
    std::cout << "El nUmero mayor de la lista es: " << encontrarMayor(first) << std::endl;

    // Encontrar el número menor de la lista
    std::cout << "El nUmero menor de la lista es: " << encontrarMenor(first) << std::endl;

    // Liberar la memoria
    delete first;
    delete second;
    delete third;

    return 0;
}

