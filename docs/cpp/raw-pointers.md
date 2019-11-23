---
title: Puntatori non elaborati (C++)
description: Come utilizzare i puntatori non elaborati inC++
ms.date: 11/19/2019
helpviewer_keywords:
- pointers [C++]
ms.openlocfilehash: 9ea498c254bc37dc8dc550232127cb2db3bc0886
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74250660"
---
# <a name="raw-pointers-c"></a>Puntatori non elaborati (C++)

Un puntatore è un tipo di variabile che archivia l'indirizzo di un oggetto in memoria e viene usato per accedere a tale oggetto. Un *puntatore non elaborato* è un puntatore la cui durata non è controllata da un oggetto incapsulante, ad esempio un [puntatore intelligente](smart-pointers-modern-cpp.md). A un puntatore non elaborato può essere assegnato l'indirizzo di un'altra variabile non puntatore oppure è possibile assegnargli un valore [nullptr](nullptr.md). Un puntatore a cui non è stato assegnato un valore contiene dati casuali.

È anche possibile *dereferenziare* un puntatore per recuperare il valore dell'oggetto a cui punta. L' *operatore di accesso ai membri* fornisce l'accesso ai membri di un oggetto.

```cpp
    int* p = nullptr; // declare pointer and initialize it
                      // so that it doesn't store a random address
    int i = 5;
    p = &i; // assign pointer to address of object
    int j = *p; // dereference p to retrieve the value at its address

```

Un puntatore può puntare a un oggetto tipizzato o a **void**. Quando un programma alloca un nuovo oggetto nell' [heap](https://wikipedia.org/wiki/Heap) in memoria, riceve l'indirizzo di tale oggetto sotto forma di puntatore. Questi puntatori sono denominati *puntatori proprietari*; per eliminare in modo esplicito l'oggetto allocato dall'heap quando non è più necessario, è necessario usare un puntatore proprietario (o una copia di esso). Se non si elimina la memoria, si verifica una *perdita di memoria* e il percorso di memoria non è disponibile per qualsiasi altro programma nel computer. Per ulteriori informazioni, vedere [operatori new e Delete](new-and-delete-operators.md).

```cpp

    MyClass* mc = new MyClass(); // allocate object on the heap
    mc->print(); // access class member
    delete mc; // delete object (please don't forget!)
```

Un puntatore (se non è dichiarato come **const**) può essere incrementato o decrementato in modo che punti a una nuova posizione in memoria. Questa operazione viene definita *aritmetica dei puntatori* e viene utilizzata nella programmazione di tipo C per scorrere gli elementi nelle matrici o in altre strutture di dati. Non è possibile effettuare un puntatore **const** per puntare a una posizione di memoria diversa e in questo senso è molto simile a un [riferimento](references-cpp.md). Per ulteriori informazioni, vedere la pagina relativa ai [puntatori const e volatile](const-and-volatile-pointers.md).

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

Nei sistemi operativi a 64 bit un puntatore ha una dimensione di 64 bit. una dimensione del puntatore del sistema determina la quantità di memoria indirizzabile che può avere. Tutte le copie di un puntatore puntano alla stessa posizione di memoria. I puntatori (insieme ai riferimenti) vengono usati in modo C++ estensivo in per passare oggetti di dimensioni maggiori da e verso funzioni perché è in genere molto più efficiente copiare l'indirizzo a 64 bit di un oggetto rispetto alla copia di un intero oggetto. Quando si definisce una funzione, specificare i parametri del puntatore come **const** a meno che non si desideri che la funzione modifichi l'oggetto. In generale, i riferimenti **const** rappresentano il modo migliore per passare gli oggetti alle funzioni, a meno che il valore dell'oggetto non possa essere **nullptr**.

I [puntatori alle funzioni](#pointers_to_functions) consentono di passare le funzioni ad altre funzioni e vengono usate per "callback" nella programmazione di tipo C. Il C++ moderno usa le [espressioni lambda](lambda-expressions-in-cpp.md) a questo scopo.

## <a name="initialization-and-member-access"></a>Inizializzazione e accesso ai membri

Nell'esempio seguente viene illustrato come dichiarare un puntatore non elaborato e inizializzarlo con un oggetto allocato nell'heap e come utilizzarlo. Vengono inoltre illustrati alcuni dei pericoli associati ai puntatori non elaborati. (Tenere presente che si tratta di una programmazione di tipo C C++e non moderna).

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
    func_A(mc);
    pmc->print(); // "Erika, 3"
    pmc2->print(); // "Erika, 3"

    // Dereference the pointer and pass a copy
    // of the pointed-to object to a function
    func_B(*mc);
    pmc->print(); // "Erika, 3" (original not modified by function)

    delete(pmc); // don't forget to give memory back to operating system!
   // delete(pmc2); //crash! memory location was already deleted
}
```

## <a name="pointer-arithmetic-and-arrays"></a>Matrici e aritmetiche del puntatore

I puntatori e le matrici sono strettamente correlati. Quando una matrice viene passata per valore a una funzione, viene passata come puntatore al primo elemento. Nell'esempio seguente vengono illustrate le seguenti proprietà importanti di puntatori e matrici:

- l'operatore `sizeof` restituisce la dimensione totale in byte di una matrice
- per determinare il numero di elementi, dividere i byte totali per la dimensione di un elemento
- Quando una matrice viene passata a una funzione, *decade* in un tipo di puntatore
- l'operatore `sizeof` quando viene applicato a un puntatore restituisce le dimensioni del puntatore, 4 byte su x86 o 8 byte in x64

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

È possibile eseguire determinate operazioni aritmetiche su puntatori non const per fare in modo che puntino a una nuova posizione di memoria. Un puntatore può essere incrementato e decrementato utilizzando gli operatori **++** , **+=** , **-=** e **--** . Questa tecnica può essere utilizzata nelle matrici ed è particolarmente utile nei buffer di dati non tipizzati. Un **void\*** incrementi delle dimensioni di un **carattere** (1 byte). Un puntatore tipizzato viene incrementato in base alla dimensione del tipo a cui punta.

Nell'esempio seguente viene illustrato come utilizzare l'aritmetica dei puntatori per accedere ai singoli pixel in una bitmap in Windows. Si noti l'uso di **New** e **Delete**e l'operatore di dereferenziazione. 

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

## <a name="void-pointers"></a>puntatori void *

Un puntatore a **void** fa semplicemente riferimento a una posizione di memoria non elaborata. A volte è necessario usare i puntatori **void\*** , ad esempio quando si passa C++ tra il codice e le funzioni C. 

Quando viene eseguito il cast di un puntatore tipizzato a un puntatore void, il contenuto della posizione di memoria non viene modificato, ma le informazioni sul tipo vengono perse, in modo che non sia possibile eseguire operazioni di incremento o decremento. È possibile eseguire il cast di una posizione di memoria, ad esempio da MyClass * a void * e viceversa, a MyClass *. Tali operazioni sono intrinsecamente soggette a errori e richiedono molta attenzione per evitare errori. Modern C++ sconsiglia l'utilizzo di puntatori void, a meno che non sia assolutamente necessario.

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
    for(char* c = static_cast<char*>(pvoid); pvoid < &pvoid + 1000; ++c)
    {
        *c = 0x00;
    }
    func(pvoid, 1000);
    char ch = static_cast<char*>(pvoid)[0];
    std::cout << ch << std::endl; // 'A'
    operator delete(p);
}
```

## <a name="pointers_to_functions"></a>Puntatori a funzioni

Nella programmazione di tipo C, i puntatori a funzione vengono usati principalmente per passare funzioni ad altre funzioni. In questo scenario, il chiamante può personalizzare il comportamento di una funzione senza modificarlo. Nel moderno C++, le [espressioni lambda](lambda-expressions-in-cpp.md) forniscono la stessa funzionalità con maggiore indipendenza dai tipi e altri vantaggi.

Una dichiarazione del puntatore a funzione specifica la firma che la funzione di riferimento deve avere:

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

Nell'esempio seguente viene illustrata una funzione `combine` che accetta come parametro qualsiasi funzione che accetta una `std::string` e restituisce un `std::string`. A seconda della funzione passata a `combine` verrà anteposto o accodata una stringa.

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

[Puntatori intelligenti](smart-pointers-modern-cpp.md)
[operatore di riferimento indiretto: *](indirection-operator-star.md)<br/>
[Operatore address-of: &](address-of-operator-amp.md)</br>
[BentornatiC++](welcome-back-to-cpp-modern-cpp.md)
