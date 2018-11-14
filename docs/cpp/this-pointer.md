---
title: Puntatore this
ms.date: 11/04/2016
f1_keywords:
- this_cpp
helpviewer_keywords:
- nonstatic member functions [C++]
- pointers, to class instance
- this pointer
ms.assetid: 92e3256a-4ad9-4d46-8be1-d77fad90791f
ms.openlocfilehash: 586ed9d7e07165af71eeb2ee7ab22aba9570bcd3
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51328877"
---
# <a name="this-pointer"></a>Puntatore this

Il **ciò** puntatore è un puntatore accessibile solo all'interno di funzioni membro non statico di una **classe**, **struct**, o **unione** tipo. Viene puntato l'oggetto per il quale è chiamata la funzione membro. Le funzioni membro statiche non hanno una **ciò** puntatore.

## <a name="syntax"></a>Sintassi

```
this
this->member-identifier
```

## <a name="remarks"></a>Note

Un oggetto **ciò** puntatore non fa parte dell'oggetto stesso; e non viene rilevato nel risultato di una **sizeof** istruzione sull'oggetto. Al contrario, quando una funzione membro non statica viene chiamata per un oggetto, l'indirizzo dell'oggetto viene passato dal compilatore alla funzione come argomento nascosto. Ad esempio, la seguente chiamata di funzione:

```cpp
myDate.setMonth( 3 );
```

può essere interpretata come segue:

```cpp
setMonth( &myDate, 3 );
```

L'indirizzo dell'oggetto è disponibile all'interno della funzione membro come il **ciò** puntatore. La maggior parte degli utilizzi degli **ciò** sono implicite. È possibile, sebbene non sia necessario, usare in modo esplicito **ciò** quando si fa riferimento ai membri della classe. Ad esempio:

```cpp
void Date::setMonth( int mn )
{
   month = mn;            // These three statements
   this->month = mn;      // are equivalent
   (*this).month = mn;
}
```

L'espressione `*this` viene in genere usata per restituire l'oggetto corrente da una funzione membro:

```cpp
return *this;
```

Il **ciò** puntatore viene usato anche per autoriferimenti:

```cpp
if (&Object != this) {
// do not execute in cases of self-reference
```

> [!NOTE]
>  Poiché il **ciò** puntatore non è modificabile, le assegnazioni ai **ciò** non sono consentiti. Precedenti implementazioni di C++ consentivano le assegnazioni ai **ciò**.

In alcuni casi, il **ciò** puntatore viene utilizzato direttamente, ad esempio, per manipolare dati autoreferenziali strutture, in cui è necessario l'indirizzo dell'oggetto corrente.

## <a name="example"></a>Esempio

```cpp
// this_pointer.cpp
// compile with: /EHsc

#include <iostream>
#include <string.h>

using namespace std;

class Buf
{
public:
    Buf( char* szBuffer, size_t sizeOfBuffer );
    Buf& operator=( const Buf & );
    void Display() { cout << buffer << endl; }

private:
    char*   buffer;
    size_t  sizeOfBuffer;
};

Buf::Buf( char* szBuffer, size_t sizeOfBuffer )
{
    sizeOfBuffer++; // account for a NULL terminator

    buffer = new char[ sizeOfBuffer ];
    if (buffer)
    {
        strcpy_s( buffer, sizeOfBuffer, szBuffer );
        sizeOfBuffer = sizeOfBuffer;
    }
}

Buf& Buf::operator=( const Buf &otherbuf )
{
    if( &otherbuf != this )
    {
        if (buffer)
            delete [] buffer;

        sizeOfBuffer =  strlen( otherbuf.buffer ) + 1;
        buffer = new char[sizeOfBuffer];
        strcpy_s( buffer, sizeOfBuffer, otherbuf.buffer );
    }
    return *this;
}

int main()
{
    Buf myBuf( "my buffer", 10 );
    Buf yourBuf( "your buffer", 12 );

    // Display 'my buffer'
    myBuf.Display();

    // assignment opperator
    myBuf = yourBuf;

    // Display 'your buffer'
    myBuf.Display();
}
```

```Output
my buffer
your buffer
```

## <a name="type-of-the-this-pointer"></a>Tipo di puntatore this

Il **ciò** tipo di puntatore può essere modificato nella dichiarazione di funzione per il **const** e **volatile** parole chiave. Per dichiarare una funzione con associati gli attributi di una o più di queste parole chiave, aggiungere le parole chiave dopo l'elenco di argomenti della funzione.

Si consideri l'esempio seguente:

```cpp
// type_of_this_pointer1.cpp
class Point
{
    unsigned X() const;
};
int main()
{
}
```

Il codice precedente dichiara una funzione membro, `X`, in cui la **ciò** puntatore viene considerato come un **const** puntatore a un **const** oggetto. Combinazioni di *cv-mod-list* opzioni possono essere usate, ma viene sempre modificato l'oggetto a cui punta **ciò**, non il **ciò** puntatore stesso. Di conseguenza, la dichiarazione seguente dichiara funzione `X`; il **questo** puntatore è un **const** puntatore a un **const** oggetto:

```cpp
// type_of_this_pointer2.cpp
class Point
{
    unsigned X() const;
};
int main()
{
}
```

Il tipo della **ciò** in un funzione membro è descritto dalla sintassi seguente, dove *cv-qualifier-list* è determinato dal dichiaratore di funzioni membro e può essere **const**oppure **volatile** (o entrambi), e *di tipo classe* è il nome della classe:

*tipo di classe [cv-qualifier-list]* **&#42; const questo**

In altre parole, **ciò** è sempre un puntatore const; non può essere riassegnato.  Il **const** oppure **volatile** qualificatori utilizzati nella dichiarazione di funzione membro si applicano all'istanza della classe a cui fa riferimento **questo** nell'ambito di tale funzione.

Nella tabella seguente vengono descritto in modo più dettagliato il funzionamento di tali modificatori.

### <a name="semantics-of-this-modifiers"></a>Semantica dei modificatori this

|Modificatore|Significato|
|--------------|-------------|
|**const**|Non è possibile modificare i dati dei membri; non è possibile richiamare funzioni membro che non sono **const**.|
|**volatile**|I dati dei membri vengono caricati dalla memoria tutte le volte in cui si accede alla memoria stessa e determinate ottimizzazioni vengono disabilitate.|

È un errore per passare un **const** oggetto a una funzione membro che non è **const**. Analogamente, è possibile passare un **volatili** oggetto a una funzione membro che non è **volatile**.

Funzioni membro dichiarate come **const** non è possibile modificare i dati dei membri, ovvero in tali funzioni, il **ciò** puntatore è un puntatore a una **const** oggetto.

> [!NOTE]
>  Costruttori e distruttori non possono essere dichiarati come **const** oppure **volatile**. Possono, tuttavia, essere richiamati su **const** oppure **volatile** oggetti.

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)