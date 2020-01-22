---
title: Puntatore this
description: Il puntatore this è un puntatore generato dal compilatore all'oggetto corrente nelle funzioni membro non statiche.
ms.date: 01/22/2020
f1_keywords:
- this_cpp
helpviewer_keywords:
- nonstatic member functions [C++]
- pointers, to class instance
- this pointer
ms.assetid: 92e3256a-4ad9-4d46-8be1-d77fad90791f
no-loc:
- this
- class
- struct
- union
- sizeof
- const
- volatile
ms.openlocfilehash: 58bba2edd7a457c624b747b5a65d209995852848
ms.sourcegitcommit: a930a9b47bd95599265d6ba83bb87e46ae748949
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2020
ms.locfileid: "76518335"
---
# <a name="opno-locthis-pointer"></a>Puntatore this

Il puntatore **this** è un puntatore accessibile solo all'interno delle funzioni membro non statiche di un tipo **class** , **struct** o **union** . Viene puntato l'oggetto per il quale è chiamata la funzione membro. Le funzioni membro statiche non hanno un puntatore **this** .

## <a name="syntax"></a>Sintassi

```cpp
this
this->member-identifier
```

## <a name="remarks"></a>Note

Il puntatore **this** di un oggetto non fa parte dell'oggetto stesso. Non si riflette nel risultato di un'istruzione **sizeof** sull'oggetto. Quando una funzione membro non statica viene chiamata per un oggetto, il compilatore passa l'indirizzo dell'oggetto alla funzione come argomento nascosto. Ad esempio, la seguente chiamata di funzione:

```cpp
myDate.setMonth( 3 );
```

può essere interpretato come:

```cpp
setMonth( &myDate, 3 );
```

L'indirizzo dell'oggetto è disponibile all'interno della funzione membro come puntatore **this** . La maggior parte degli utilizzi del puntatore **this** è implicita. È lecito, anche se non necessario, utilizzare una **this** esplicita per fare riferimento ai membri del class. Ad esempio:

```cpp
void Date::setMonth( int mn )
{
   month = mn;            // These three statements
   this->month = mn;      // are equivalent
   (*this).month = mn;
}
```

L'espressione `*this` viene in genere utilizzata per restituire l'oggetto corrente da una funzione membro:

```cpp
return *this;
```

Il puntatore **this** viene usato anche per evitare il riferimento automatico:

```cpp
if (&Object != this) {
// do not execute in cases of self-reference
```

> [!NOTE]
> Poiché il puntatore **this** non è modificabile, le assegnazioni al puntatore **this** non sono consentite. Implementazioni precedenti dell' C++ assegnazione consentita a **this** .

Occasionalmente, il puntatore **this** viene usato direttamente, ad esempio per modificare le strutture di dati autoreferenziali, in cui l'indirizzo dell'oggetto corrente è obbligatorio.

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

    // assignment operator
    myBuf = yourBuf;

    // Display 'your buffer'
    myBuf.Display();
}
```

```Output
my buffer
your buffer
```

## <a name="type-of-the-opno-locthis-pointer"></a>Tipo di puntatore this

Il tipo di puntatore **this** può essere modificato nella dichiarazione di funzione dalle parole chiave **const** e **volatile** . Per dichiarare una funzione con uno di questi attributi, aggiungere la parola chiave (s) dopo l'elenco di argomenti della funzione.

Si consideri un esempio:

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

Il codice precedente dichiara una funzione membro, `X`, in cui il puntatore **this** viene considerato come un puntatore **const** a un oggetto **const** . È possibile utilizzare combinazioni di opzioni *CV-mod-list* , ma è sempre necessario modificare l'oggetto a cui punta il puntatore **this** , non il puntatore stesso. Nella dichiarazione seguente viene dichiarata la funzione `X`, in cui il puntatore **this** è un puntatore **const** a un oggetto **const** :

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

Il tipo di **this** in una funzione membro è descritto dalla sintassi seguente. *CV-Qualifier-list* è determinato dal dichiaratore della funzione membro. Può essere **const** o **volatile** (o entrambi). *class-Type* è il nome del class:

[*CV-Qualifier-list*] const *di tipoclass* **\* this**

In altre parole, il puntatore **this** è sempre un puntatore di const. Non può essere riassegnata.  I qualificatori **const** o **volatile** usati nella dichiarazione di funzione membro si applicano all'istanza di class a cui punta il puntatore **this** nell'ambito di tale funzione.

Nella tabella seguente vengono descritto in modo più dettagliato il funzionamento di tali modificatori.

### <a name="semantics-of-opno-locthis-modifiers"></a>Semantica dei modificatori di this

|Modificatore|Significato|
|--------------|-------------|
|**const**|Impossibile modificare i dati dei membri. non è possibile richiamare funzioni membro che non sono **const** .|
|**volatile**|I dati dei membri vengono caricati dalla memoria ogni volta che viene eseguito l'accesso; Disabilita determinate ottimizzazioni.|

È un errore passare un oggetto **const** a una funzione membro che non è **const** .

Analogamente, è anche un errore passare un oggetto **volatile** a una funzione membro che non è **volatile** .

Le funzioni membro dichiarate come **const** non possono modificare i dati dei membri, in tali funzioni, il puntatore **this** è un puntatore a un oggetto **const** .

> [!NOTE]
> I costruttori e i distruttori non possono essere dichiarati come **const** o **volatile** . Tuttavia, possono essere richiamati su oggetti **const** o **volatile** .

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)
