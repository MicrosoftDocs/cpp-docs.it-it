---
title: Puntatori non elaborati (C
description: Come utilizzare i puntatori non elaborati in C
ms.date: 04/21/2020
helpviewer_keywords:
- pointers [C++]
no-loc:
- void
- nullptr
- const
- char
- new
- delete
ms.openlocfilehash: 8ba188154d7395ce7be3878fa9dbee2fde08a130
ms.sourcegitcommit: 89d9e1cb08fa872483d1cde98bc2a7c870e505e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "82032096"
---
# <a name="raw-pointers-c"></a>Puntatori non elaborati (C

Un *puntatore* è un tipo di variabile. Memorizza l'indirizzo di un oggetto in memoria e viene utilizzato per accedere a tale oggetto. Un *puntatore non elaborato* è un puntatore la cui durata non è controllata da un oggetto incapsulante, ad esempio un [puntatore intelligente.](smart-pointers-modern-cpp.md) A un puntatore non elaborato può essere assegnato l'indirizzo di [nullptr](nullptr.md)un'altra variabile non puntatore oppure può essere assegnato un valore di . Un puntatore a cui non è stato assegnato un valore contiene dati casuali.

Un puntatore può anche essere *dereferenziato* per recuperare il valore dell'oggetto a cui punta. *L'operatore* di accesso ai membri fornisce l'accesso ai membri di un oggetto.

```cpp
    int* p = nullptr; // declare pointer and initialize it
                      // so that it doesn't store a random address
    int i = 5;
    p = &i; // assign pointer to address of object
    int j = *p; // dereference p to retrieve the value at its address
```

Un puntatore può puntare a **void** un oggetto tipizzato o a . Quando un programma alloca un oggetto [nell'heap](https://wikipedia.org/wiki/Heap) in memoria, riceve l'indirizzo di tale oggetto sotto forma di puntatore. Tali puntatori sono *denominati puntatori proprietari*. Un puntatore proprietario (o una copia di esso) deve essere utilizzato per liberare in modo esplicito l'oggetto allocato heap quando non è più necessario. La mancata liberazione della memoria comporta una *perdita*di memoria e rende tale posizione di memoria non disponibile per qualsiasi altro programma nel computer. La memoria **new** allocata utilizzando **delete** deve essere liberata utilizzando (or ** delete \[]**). Per ulteriori informazioni, vedere [ new e delete operatori](new-and-delete-operators.md).

```cpp
    MyClass* mc = new MyClass(); // allocate object on the heap
    mc->print(); // access class member
    delete mc; // delete object (please don't forget!)
```

Un puntatore (se non **const** è dichiarato come ) può essere incrementato o decrementato in modo da puntare a un'altra posizione in memoria. Questa operazione è *denominata aritmetica dei puntatori*. Viene utilizzato nella programmazione di tipo C per scorrere gli elementi in matrici o altre strutture di dati. Non **const** è possibile fare un puntatore in modo che punti a una posizione di memoria diversa e in tal senso è simile a un [riferimento](references-cpp.md). Per ulteriori informazioni, vedere [ const e puntatori volatili](const-and-volatile-pointers.md).

```cpp
    // declare a C-style string. Compiler adds terminating '\0'.
    const char* str = "Hello world";

    const int c = 1;
    const int* pconst = &c; // declare a non-const pointer to const int
    const int c2 = 2;
    pconst = &c2;  // OK pconst itself isn't const
    const int* const pconst2 = &c;
    // pconst2 = &c2; // Error! pconst2 is const.
```

Nei sistemi operativi a 64 bit, un puntatore ha una dimensione di 64 bit. La dimensione del puntatore di un sistema determina la quantità di memoria indirizzabile che può avere. Tutte le copie di un puntatore puntano alla stessa posizione di memoria. I puntatori (insieme ai riferimenti) vengono ampiamente utilizzati in C , per passare oggetti più grandi da e verso le funzioni. Questo perché è spesso più efficiente copiare l'indirizzo di un oggetto che copiare l'intero oggetto. Quando si definisce una **const** funzione, specificare i parametri del puntatore come a meno che non si desideri che la funzione modifichi l'oggetto. In generale, **const** i riferimenti sono il modo migliore per passare oggetti **nullptr** alle funzioni, a meno che il valore dell'oggetto non possa essere .

[I puntatori alle funzioni](#pointers_to_functions) consentono alle funzioni di essere passate ad altre funzioni e vengono utilizzate per i "callback" nella programmazione di tipo C.Pointers to functions enable functions to be passed to other functions and are used for "callbacks" in C-style programming. Per questo scopo, il linguaggio c'è il linguaggio [moderno](lambda-expressions-in-cpp.md) C.

## <a name="initialization-and-member-access"></a>Inizializzazione e accesso ai membri

Nell'esempio seguente viene illustrato come dichiarare, inizializzare e utilizzare un puntatore non elaborato. Viene inizializzato utilizzando **new** per puntare un oggetto allocato **delete** nell'heap, che è necessario in modo esplicito. L'esempio mostra anche alcuni dei pericoli associati ai puntatori non elaborati. (Ricordate, questo esempio è la programmazione di tipo C e non moderno c '!)

```cpp
#include <iostream>
#include <string>

class MyClass
{
public:
    int num;
    std::string name;
    void print() { std::cout << name << ":" << num << std::endl; }
};

// Accepts a MyClass pointer
void func_A(MyClass* mc)
{
    // Modify the object that mc points to.
    // All copies of the pointer will point to
    // the same modified object.
    mc->num = 3;
}

// Accepts a MyClass object
void func_B(MyClass mc)
{
    // mc here is a regular object, not a pointer.
    // Use the "." operator to access members.
    // This statement modifies only the local copy of mc.
    mc.num = 21;
    std::cout << "Local copy of mc:";
    mc.print(); // "Erika, 21"
}


int main()
{
    // Use the * operator to declare a pointer type
    // Use new to allocate and initialize memory
    MyClass* pmc = new MyClass{ 108, "Nick" };

    // Prints the memory address. Usually not what you want.
    std:: cout << pmc << std::endl;

    // Copy the pointed-to object by dereferencing the pointer
    // to access the contents of the memory location.
    // mc is a separate object, allocated here on the stack
    MyClass mc = *pmc;

    // Declare a pointer that points to mc using the addressof operator
    MyClass* pcopy = &mc;

    // Use the -> operator to access the object's public members
    pmc->print(); // "Nick, 108"

    // Copy the pointer. Now pmc and pmc2 point to same object!
    MyClass* pmc2 = pmc;

    // Use copied pointer to modify the original object
    pmc2->name = "Erika";
    pmc->print(); // "Erika, 108"
    pmc2->print(); // "Erika, 108"

    // Pass the pointer to a function.
    func_A(pmc);
    pmc->print(); // "Erika, 3"
    pmc2->print(); // "Erika, 3"

    // Dereference the pointer and pass a copy
    // of the pointed-to object to a function
    func_B(*pmc);
    pmc->print(); // "Erika, 3" (original not modified by function)

    delete(pmc); // don't forget to give memory back to operating system!
   // delete(pmc2); //crash! memory location was already deleted
}
```

## <a name="pointer-arithmetic-and-arrays"></a>Aritmetica dei puntatori e matrici

I puntatori e le matrici sono strettamente correlati. Quando una matrice viene passata per valore a una funzione, viene passata come puntatore al primo elemento. Nell'esempio seguente vengono illustrate le seguenti proprietà importanti di puntatori e matrici:

- l'operatore `sizeof` restituisce la dimensione totale in byte di una matrice
- per determinare il numero di elementi, dividere i byte totali per la dimensione di un elemento
- quando una matrice viene passata a una funzione, *decade* a un tipo di puntatore
- l'operatore `sizeof` quando applicato a un puntatore restituisce la dimensione del puntatore, 4 byte su x86 o 8 byte su x64

```cpp
#include <iostream>

void func(int arr[], int length)
{
    // returns pointer size. not useful here.
    size_t test = sizeof(arr);

    for(int i = 0; i < length; ++i)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{

    int i[5]{ 1,2,3,4,5 };
    // sizeof(i) = total bytes
    int j = sizeof(i) / sizeof(i[0]);
    func(i,j);
}
```

Alcune operazioni aritmetiche possonoconst essere utilizzate su puntatori non puntatori per farli puntare a un'altra posizione di memoria. I puntatori vengono incrementati **++** e **+=** **-=** decrementati utilizzando gli operatori , e . **--** Questa tecnica può essere utilizzata nelle matrici ed è particolarmente utile nei buffer di dati non tipizzati. Un ** void ** oggetto viene incrementato **char** della dimensione di un (1 byte). Un puntatore tipizzato viene incrementato in base alle dimensioni del tipo a cui punta.

Nell'esempio seguente viene illustrato come utilizzare l'aritmetica dei puntatori per accedere ai singoli pixel in una bitmap in Windows.The following example demonstrates how pointer arithmetic can be used to access individual pixels in a bitmap on Windows. Si noti **new** **delete** l'utilizzo di e , e dell'operatore di dereferenziazione.

```cpp
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{

    BITMAPINFOHEADER header;
    header.biHeight = 100; // Multiple of 4 for simplicity.
    header.biWidth = 100;
    header.biBitCount = 24;
    header.biPlanes = 1;
    header.biCompression = BI_RGB;
    header.biSize = sizeof(BITMAPINFOHEADER);

    constexpr int bufferSize = 30000;
    unsigned char* buffer = new unsigned char[bufferSize];

    BITMAPFILEHEADER bf;
    bf.bfType = 0x4D42;
    bf.bfSize = header.biSize + 14 + bufferSize;
    bf.bfReserved1 = 0;
    bf.bfReserved2 = 0;
    bf.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER); //54

    // Create a gray square with a 2-pixel wide outline.
    unsigned char* begin = &buffer[0];
    unsigned char* end = &buffer[0] + bufferSize;
    unsigned char* p = begin;
    constexpr int pixelWidth = 3;
    constexpr int borderWidth = 2;

    while (p < end)
    {
            // Is top or bottom edge?
        if ((p < begin + header.biWidth * pixelWidth * borderWidth)
            || (p > end - header.biWidth * pixelWidth * borderWidth)
            // Is left or right edge?
            || (p - begin) % (header.biWidth * pixelWidth) < (borderWidth * pixelWidth)
            || (p - begin) % (header.biWidth * pixelWidth) > ((header.biWidth - borderWidth) * pixelWidth))
        {
            *p = 0x0; // Black
        }
        else
        {
            *p = 0xC3; // Gray
        }
        p++; // Increment one byte sizeof(unsigned char).
    }

    ofstream wf(R"(box.bmp)", ios::out | ios::binary);

    wf.write(reinterpret_cast<char*>(&bf), sizeof(bf));
    wf.write(reinterpret_cast<char*>(&header), sizeof(header));
    wf.write(reinterpret_cast<char*>(begin), bufferSize);

    delete[] buffer; // Return memory to the OS.
    wf.close();
}
```

## <a name="opno-locvoid-pointers"></a>void- puntatori

Puntatore **void** a punta semplicemente a una posizione di memoria non elaborata. A volte è necessario ** void ** utilizzare i puntatori, ad esempio quando si passa tra il codice C e le funzioni C.

Quando si esegue il cast void di un puntatore tipizzato a un puntatore, il contenuto della posizione di memoria viene invariato. Tuttavia, le informazioni sul tipo vengono perse, in modo che non è possibile eseguire operazioni di incremento o decremento. È possibile eseguire il cast di `MyClass*` `void*` una posizione `MyClass*`di memoria, ad esempio da verso e viceversa in . Tali operazioni sono intrinsecamente soggette a errori e richiedono molta attenzione per evitare errori. Il linguaggio C' moderno void scoraggia l'uso di puntatori in quasi tutte le circostanze.

```cpp

//func.c
void func(void* data, int length)
{
    char* c = (char*)(data);

    // fill in the buffer with data
    for (int i = 0; i < length; ++i)
    {
        *c = 0x41;
        ++c;
    }
}

// main.cpp
#include <iostream>

extern "C"
{
    void func(void* data, int length);
}

class MyClass
{
public:
    int num;
    std::string name;
    void print() { std::cout << name << ":" << num << std::endl; }
};

int main()
{
    MyClass* mc = new MyClass{10, "Marian"};
    void* p = static_cast<void*>(mc);
    MyClass* mc2 = static_cast<MyClass*>(p);
    std::cout << mc2->name << std::endl; // "Marian"

    // use operator new to allocate untyped memory block
    void* pvoid = operator new(1000);
    char* pchar = static_cast<char*>(pvoid);
    for(char* c = pchar; c < pchar + 1000; ++c)
    {
        *c = 0x00;
    }
    func(pvoid, 1000);
    char ch = static_cast<char*>(pvoid)[0];
    std::cout << ch << std::endl; // 'A'
    operator delete(p);
}
```

## <a name="pointers-to-functions"></a><a name="pointers_to_functions"></a>Puntatori a funzioni

Nella programmazione di tipo C, i puntatori a funzione vengono utilizzati principalmente per passare funzioni ad altre funzioni. Questa tecnica consente al chiamante di personalizzare il comportamento di una funzione senza modificarla. Nel linguaggio c'è moderno, le [espressioni lambda](lambda-expressions-in-cpp.md) forniscono la stessa funzionalità con maggiore indipendenza dai tipi e altri vantaggi.

Una dichiarazione di puntatore a funzione specifica la firma che la funzione a cui punta deve avere:A function pointer declaration specifies the signature that the pointed-to function must have:

```cpp
// Declare pointer to any function that...

// ...accepts a string and returns a string
string (*g)(string a);

// has no return value and no parameters
void (*x)();

// ...returns an int and takes three parameters
// of the specified types
int (*i)(int i, string s, double d);
```

Nell'esempio seguente `combine` viene illustrata una funzione che `std::string` accetta come `std::string`parametro qualsiasi funzione che accetta un e restituisce un oggetto . A seconda della funzione passata a `combine`, antepone o aggiunge una stringa.

```cpp
#include <iostream>
#include <string>

using namespace std;

string base {"hello world"};

string append(string s)
{
    return base.append(" ").append(s);
}

string prepend(string s)
{
    return s.append(" ").append(base);
}

string combine(string s, string(*g)(string a))
{
    return (*g)(s);
}

int main()
{
    cout << combine("from MSVC", append) << "\n";
    cout << combine("Good morning and", prepend) << "\n";
}
```

## <a name="see-also"></a>Vedere anche

[Puntatori](smart-pointers-modern-cpp.md)
intelligenti[Operatore di riferimento indiretto:](indirection-operator-star.md)<br/>
[Operatore address-of: &](address-of-operator-amp.md)</br>
[Bentornato a C .](welcome-back-to-cpp-modern-cpp.md)
