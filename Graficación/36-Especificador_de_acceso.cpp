class MyClass {
    public:    // Especificador de acceso público
        int x; // Atributo público
    private:   // Especificador de acceso privado
        int y; // atributo privado
};

int main()
{
    MyClass myObj;

    myObj.x = 25; // Permitido (public)
    myObj.y = 50; // No permitido (private)

    return 0;
}