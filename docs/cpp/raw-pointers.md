---
title: Puntatori non elaborati (C++)
description: Come usare i puntatori non elaborati in C++
ms.date: 04/21/2020
helpviewer_keywords:
- pointers [C++]
no-loc:
- ':::no-loc(void):::'
- ':::no-loc(nullptr):::'
- ':::no-loc(const):::'
- ':::no-loc(char):::'
- ':::no-loc(new):::'
- ':::no-loc(delete):::'
ms.openlocfilehash: 53679559888191fe7f2aad7cb5a70d607974ae96
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233652"
---
# <a name="raw-pointers-c"></a>Puntatori non elaborati (C++)

Un *puntatore* è un tipo di variabile. Archivia l'indirizzo di un oggetto in memoria e viene usato per accedere a tale oggetto. Un *puntatore non elaborato* è un puntatore la cui durata non è controllata da un oggetto incapsulamento, ad esempio un [puntatore intelligente](smart-pointers-modern-cpp.md). A un puntatore non elaborato può essere assegnato l'indirizzo di un'altra variabile non puntatore oppure è possibile assegnargli un valore [:::no-loc(nullptr):::](:::no-loc(nullptr):::.md) . Un puntatore a cui non è stato assegnato un valore contiene dati casuali.

È anche possibile *dereferenziare* un puntatore per recuperare il valore dell'oggetto a cui punta. L' *operatore di accesso ai membri* fornisce l'accesso ai membri di un oggetto.

```cpp
    int* p = :::no-loc(nullptr):::; // declare pointer and initialize it
                      // so that it doesn't store a random address
    int i = 5;
    p = &i; // assign pointer to address of object
    int j = *p; // dereference p to retrieve the value at its address
```

Un puntatore può puntare a un oggetto tipizzato o a **`:::no-loc(void):::`** . Quando un programma alloca un oggetto nell' [heap](https://wikipedia.org/wiki/Heap) in memoria, riceve l'indirizzo di tale oggetto sotto forma di puntatore. Questi puntatori sono denominati *puntatori proprietari*. Un puntatore proprietario (o una copia di esso) deve essere usato per liberare in modo esplicito l'oggetto allocato dall'heap quando non è più necessario. Se non si libera la memoria, si verifica una *perdita di memoria*e il percorso di memoria non è disponibile per qualsiasi altro programma nel computer. La memoria allocata con **`:::no-loc(new):::`** deve essere liberata tramite **`:::no-loc(delete):::`** (o ** :::no-loc(delete)::: \[ ]**). Per ulteriori informazioni, vedere [ :::no-loc(new)::: :::no-loc(delete)::: operatori e](:::no-loc(new):::-and-:::no-loc(delete):::-operators.md).

```cpp
    MyClass* mc = :::no-loc(new)::: MyClass(); // allocate object on the heap
    mc->print(); // access class member
    :::no-loc(delete)::: mc; // :::no-loc(delete)::: object (please don't forget!)
```

Un puntatore (se non è dichiarato come **`:::no-loc(const):::`** ) può essere incrementato o decrementato in modo da puntare a un'altra posizione nella memoria. Questa operazione è denominata *aritmetica del puntatore*. Viene usato nella programmazione di tipo C per scorrere gli elementi nelle matrici o in altre strutture di dati. Non è possibile effettuare un **`:::no-loc(const):::`** puntatore per puntare a una posizione di memoria diversa e in questo senso è simile a un [riferimento](references-cpp.md). Per ulteriori informazioni, vedere [ :::no-loc(const)::: e puntatori volatili](:::no-loc(const):::-and-volatile-pointers.md).

```cpp
    // declare a C-style string. Compiler adds terminating '\0'.
    :::no-loc(const)::: :::no-loc(char):::* str = "Hello world";

    :::no-loc(const)::: int c = 1;
    :::no-loc(const)::: int* p:::no-loc(const)::: = &c; // declare a non-:::no-loc(const)::: pointer to :::no-loc(const)::: int
    :::no-loc(const)::: int c2 = 2;
    p:::no-loc(const)::: = &c2;  // OK p:::no-loc(const)::: itself isn't :::no-loc(const):::
    :::no-loc(const)::: int* :::no-loc(const)::: p:::no-loc(const):::2 = &c;
    // p:::no-loc(const):::2 = &c2; // Error! p:::no-loc(const):::2 is :::no-loc(const):::.
```

Nei sistemi operativi a 64 bit un puntatore ha una dimensione di 64 bit. Una dimensione del puntatore del sistema determina la quantità di memoria indirizzabile che può avere. Tutte le copie di un puntatore puntano alla stessa posizione di memoria. I puntatori (insieme ai riferimenti) vengono ampiamente usati in C++ per passare oggetti di dimensioni maggiori da e verso funzioni. Questo perché è spesso più efficiente copiare l'indirizzo di un oggetto rispetto a copiare l'intero oggetto. Quando si definisce una funzione, specificare i parametri del puntatore come, **`:::no-loc(const):::`** a meno che non si intenda modificare l'oggetto nella funzione. In generale, **`:::no-loc(const):::`** i riferimenti rappresentano il modo migliore per passare gli oggetti alle funzioni, a meno che il valore dell'oggetto non possa essere **`:::no-loc(nullptr):::`** .

I [puntatori alle funzioni](#pointers_to_functions) consentono di passare le funzioni ad altre funzioni e vengono usate per "callback" nella programmazione di tipo C. Il linguaggio C++ moderno usa le [espressioni lambda](lambda-expressions-in-cpp.md) a questo scopo.

## <a name="initialization-and-member-access"></a>Inizializzazione e accesso ai membri

Nell'esempio seguente viene illustrato come dichiarare, inizializzare e utilizzare un puntatore non elaborato. Viene inizializzata usando **`:::no-loc(new):::`** per puntare a un oggetto allocato nell'heap, che è necessario in modo esplicito **`:::no-loc(delete):::`** . Nell'esempio vengono inoltre illustrati alcuni dei pericoli associati ai puntatori non elaborati. (Tenere presente che questo esempio è la programmazione di tipo C e non il linguaggio C++ moderno).

```cpp
#include <iostream>
#include <string>

class MyClass
{
public:
    int num;
    std::string name;
    :::no-loc(void)::: print() { std::cout << name << ":" << num << std::endl; }
};

// Accepts a MyClass pointer
:::no-loc(void)::: func_A(MyClass* mc)
{
    // Modify the object that mc points to.
    // All copies of the pointer will point to
    // the same modified object.
    mc->num = 3;
}

// Accepts a MyClass object
:::no-loc(void)::: func_B(MyClass mc)
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
    // Use :::no-loc(new)::: to allocate and initialize memory
    MyClass* pmc = :::no-loc(new)::: MyClass{ 108, "Nick" };

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

    :::no-loc(delete):::(pmc); // don't forget to give memory back to operating system!
   // :::no-loc(delete):::(pmc2); //crash! memory location was already :::no-loc(delete):::d
}
```

## <a name="pointer-arithmetic-and-arrays"></a>Matrici e aritmetiche del puntatore

I puntatori e le matrici sono strettamente correlati. Quando una matrice viene passata per valore a una funzione, viene passata come puntatore al primo elemento. Nell'esempio seguente vengono illustrate le seguenti proprietà importanti di puntatori e matrici:

- l' **`sizeof`** operatore restituisce la dimensione totale in byte di una matrice
- per determinare il numero di elementi, dividere i byte totali per la dimensione di un elemento
- Quando una matrice viene passata a una funzione, *decade* in un tipo di puntatore
- l' **`sizeof`** operatore quando viene applicato a un puntatore restituisce le dimensioni del puntatore, 4 byte su x86 o 8 byte in x64

```cpp
#include <iostream>

:::no-loc(void)::: func(int arr[], int length)
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

È possibile utilizzare determinate operazioni aritmetiche sui :::no-loc(const)::: puntatori per fare in modo che puntino a un'altra posizione di memoria. I puntatori vengono incrementati e decrementati tramite **++** gli **+=** **-=** operatori, e **--** . Questa tecnica può essere utilizzata nelle matrici ed è particolarmente utile nei buffer di dati non tipizzati. Un oggetto **:::no-loc(void):::\*** viene incrementato delle dimensioni di un **`:::no-loc(char):::`** (1 byte). Un puntatore tipizzato viene incrementato in base alla dimensione del tipo a cui punta.

Nell'esempio seguente viene illustrato come utilizzare l'aritmetica dei puntatori per accedere ai singoli pixel in una bitmap in Windows. Si noti l'utilizzo di **`:::no-loc(new):::`** e e **`:::no-loc(delete):::`** dell'operatore di dereferenziazione.

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

    :::no-loc(const):::expr int bufferSize = 30000;
    unsigned :::no-loc(char):::* buffer = :::no-loc(new)::: unsigned :::no-loc(char):::[bufferSize];

    BITMAPFILEHEADER bf;
    bf.bfType = 0x4D42;
    bf.bfSize = header.biSize + 14 + bufferSize;
    bf.bfReserved1 = 0;
    bf.bfReserved2 = 0;
    bf.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER); //54

    // Create a gray square with a 2-pixel wide outline.
    unsigned :::no-loc(char):::* begin = &buffer[0];
    unsigned :::no-loc(char):::* end = &buffer[0] + bufferSize;
    unsigned :::no-loc(char):::* p = begin;
    :::no-loc(const):::expr int pixelWidth = 3;
    :::no-loc(const):::expr int borderWidth = 2;

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
        p++; // Increment one byte sizeof(unsigned :::no-loc(char):::).
    }

    ofstream wf(R"(box.bmp)", ios::out | ios::binary);

    wf.write(reinterpret_cast<:::no-loc(char):::*>(&bf), sizeof(bf));
    wf.write(reinterpret_cast<:::no-loc(char):::*>(&header), sizeof(header));
    wf.write(reinterpret_cast<:::no-loc(char):::*>(begin), bufferSize);

    :::no-loc(delete):::[] buffer; // Return memory to the OS.
    wf.close();
}
```

## <a name="no-locvoid-pointers"></a>:::no-loc(void):::* puntatori

Un puntatore a **`:::no-loc(void):::`** punta semplicemente a una posizione di memoria non elaborata. Talvolta è necessario usare **:::no-loc(void):::\*** i puntatori, ad esempio quando si passa tra il codice C++ e le funzioni C.

Quando viene eseguito il cast di un puntatore tipizzato a un :::no-loc(void)::: puntatore, il contenuto della posizione di memoria è invariato. Tuttavia, le informazioni sul tipo vengono perse, pertanto non è possibile eseguire operazioni di incremento o decremento. È possibile eseguire il cast di una posizione di memoria, ad esempio da `MyClass*` a **`:::no-loc(void):::*`** e viceversa `MyClass*` . Tali operazioni sono intrinsecamente soggette a errori e richiedono una grande attenzione per gli :::no-loc(void)::: errori. Il linguaggio C++ moderno sconsiglia l'utilizzo di :::no-loc(void)::: puntatori in quasi tutte le circostanze.

```cpp

//func.c
:::no-loc(void)::: func(:::no-loc(void):::* data, int length)
{
    :::no-loc(char):::* c = (:::no-loc(char):::*)(data);

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
    :::no-loc(void)::: func(:::no-loc(void):::* data, int length);
}

class MyClass
{
public:
    int num;
    std::string name;
    :::no-loc(void)::: print() { std::cout << name << ":" << num << std::endl; }
};

int main()
{
    MyClass* mc = :::no-loc(new)::: MyClass{10, "Marian"};
    :::no-loc(void):::* p = static_cast<:::no-loc(void):::*>(mc);
    MyClass* mc2 = static_cast<MyClass*>(p);
    std::cout << mc2->name << std::endl; // "Marian"

    // use operator :::no-loc(new)::: to allocate untyped memory block
    :::no-loc(void):::* p:::no-loc(void)::: = operator :::no-loc(new):::(1000);
    :::no-loc(char):::* p:::no-loc(char)::: = static_cast<:::no-loc(char):::*>(p:::no-loc(void):::);
    for(:::no-loc(char):::* c = p:::no-loc(char):::; c < p:::no-loc(char)::: + 1000; ++c)
    {
        *c = 0x00;
    }
    func(p:::no-loc(void):::, 1000);
    :::no-loc(char)::: ch = static_cast<:::no-loc(char):::*>(p:::no-loc(void):::)[0];
    std::cout << ch << std::endl; // 'A'
    operator :::no-loc(delete):::(p);
}
```

## <a name="pointers-to-functions"></a><a name="pointers_to_functions"></a>Puntatori a funzioni

Nella programmazione di tipo C, i puntatori a funzione vengono usati principalmente per passare funzioni ad altre funzioni. Questa tecnica consente al chiamante di personalizzare il comportamento di una funzione senza modificarla. Nel linguaggio C++ moderno, le [espressioni lambda](lambda-expressions-in-cpp.md) forniscono la stessa funzionalità con maggiore indipendenza dai tipi e altri vantaggi.

Una dichiarazione del puntatore a funzione specifica la firma che la funzione di riferimento deve avere:

```cpp
// Declare pointer to any function that...

// ...accepts a string and returns a string
string (*g)(string a);

// has no return value and no parameters
:::no-loc(void)::: (*x)();

// ...returns an int and takes three parameters
// of the specified types
int (*i)(int i, string s, double d);
```

Nell'esempio seguente viene illustrata una funzione `combine` che accetta come parametro qualsiasi funzione che accetta un oggetto `std::string` e restituisce un oggetto `std::string` . A seconda della funzione passata a `combine` , viene anteposta o accodata una stringa.

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
 [Operatore di riferimento indiretto: *](indirection-operator-star.md)<br/>
[Operatore address-of: &](address-of-operator-amp.md)</br>
[C++](welcome-back-to-cpp-modern-cpp.md)
