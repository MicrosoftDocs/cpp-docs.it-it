---
title: 'Puntatore :::no-loc(this):::'
description: "Il :::no-loc(this)::: puntatore è un puntatore generato dal compilatore all'oggetto corrente nelle funzioni membro non statiche."
ms.date: 01/22/2020
f1_keywords:
- :::no-loc(this):::_cpp
helpviewer_keywords:
- nonstatic member functions [C++]
- 'pointers, to :::no-loc(class)::: instance'
- ':::no-loc(this)::: pointer'
ms.assetid: 92e3256a-4ad9-4d46-8be1-d77fad90791f
no-loc:
- ':::no-loc(this):::'
- ':::no-loc(class):::'
- ':::no-loc(struct):::'
- ':::no-loc(union):::'
- ':::no-loc(sizeof):::'
- ':::no-loc(const):::'
- ':::no-loc(volatile):::'
ms.openlocfilehash: c851beaba7fe1091ffd7827714f90307303058c1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225826"
---
# <a name="no-locthis-pointer"></a>Puntatore :::no-loc(this):::

Il **`:::no-loc(this):::`** puntatore è un puntatore accessibile solo all'interno delle funzioni membro non statiche di **`:::no-loc(class):::`** un **`:::no-loc(struct):::`** tipo, o **`:::no-loc(union):::`** . Viene puntato l'oggetto per il quale è chiamata la funzione membro. Le funzioni membro statiche non hanno un **`:::no-loc(this):::`** puntatore.

## <a name="syntax"></a>Sintassi

```cpp
:::no-loc(this):::
:::no-loc(this):::->member-identifier
```

## <a name="remarks"></a>Osservazioni

Il puntatore di un oggetto **`:::no-loc(this):::`** non fa parte dell'oggetto stesso. Non si riflette nel risultato di un' **`:::no-loc(sizeof):::`** istruzione sull'oggetto. Quando una funzione membro non statica viene chiamata per un oggetto, il compilatore passa l'indirizzo dell'oggetto alla funzione come argomento nascosto. Ad esempio, la seguente chiamata di funzione:

```cpp
myDate.setMonth( 3 );
```

può essere interpretato come:

```cpp
setMonth( &myDate, 3 );
```

L'indirizzo dell'oggetto è disponibile all'interno della funzione membro come **`:::no-loc(this):::`** puntatore. La maggior parte degli **`:::no-loc(this):::`** utilizzi del puntatore sono impliciti. È lecito, sebbene non necessario, usare un oggetto esplicito **`:::no-loc(this):::`** quando si fa riferimento ai membri di :::no-loc(class)::: . Ad esempio:

```cpp
void Date::setMonth( int mn )
{
   month = mn;            // These three statements
   :::no-loc(this):::->month = mn;      // are equivalent
   (*:::no-loc(this):::).month = mn;
}
```

L'espressione **`*:::no-loc(this):::`** viene in genere utilizzata per restituire l'oggetto corrente da una funzione membro:

```cpp
return *:::no-loc(this):::;
```

Il **`:::no-loc(this):::`** puntatore viene usato anche per evitare il riferimento automatico:

```cpp
if (&Object != :::no-loc(this):::) {
// do not execute in cases of self-reference
```

> [!NOTE]
> Poiché il **`:::no-loc(this):::`** puntatore è non modificabile, **`:::no-loc(this):::`** non sono consentite assegnazioni al puntatore. Le implementazioni precedenti di C++ consentivano l'assegnazione a **`:::no-loc(this):::`** .

Occasionalmente, il **`:::no-loc(this):::`** puntatore viene usato direttamente, ad esempio per modificare i dati autoreferenziali :::no-loc(struct)::: URES, in cui l'indirizzo dell'oggetto corrente è obbligatorio.

## <a name="example"></a>Esempio

```cpp
// :::no-loc(this):::_pointer.cpp
// compile with: /EHsc

#include <iostream>
#include <string.h>

using namespace std;

:::no-loc(class)::: Buf
{
public:
    Buf( char* szBuffer, size_t sizeOfBuffer );
    Buf& operator=( :::no-loc(const)::: Buf & );
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

Buf& Buf::operator=( :::no-loc(const)::: Buf &otherbuf )
{
    if( &otherbuf != :::no-loc(this)::: )
    {
        if (buffer)
            delete [] buffer;

        sizeOfBuffer =  strlen( otherbuf.buffer ) + 1;
        buffer = new char[sizeOfBuffer];
        strcpy_s( buffer, sizeOfBuffer, otherbuf.buffer );
    }
    return *:::no-loc(this):::;
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

## <a name="type-of-the-no-locthis-pointer"></a>Tipo di :::no-loc(this)::: puntatore

Il **`:::no-loc(this):::`** tipo del puntatore può essere modificato nella dichiarazione di funzione dalle **`:::no-loc(const):::`** **`:::no-loc(volatile):::`** parole chiave e. Per dichiarare una funzione con uno di questi attributi, aggiungere la parola chiave (s) dopo l'elenco di argomenti della funzione.

Si consideri un esempio:

```cpp
// type_of_:::no-loc(this):::_pointer1.cpp
:::no-loc(class)::: Point
{
    unsigned X() :::no-loc(const):::;
};
int main()
{
}
```

Il codice precedente dichiara una funzione membro, `X` , in cui il **`:::no-loc(this):::`** puntatore viene considerato come un **`:::no-loc(const):::`** puntatore a un **`:::no-loc(const):::`** oggetto. È possibile utilizzare combinazioni di opzioni *CV-mod-list* , ma è sempre necessario modificare l'oggetto a cui punta il **`:::no-loc(this):::`** puntatore, non il puntatore stesso. La dichiarazione seguente dichiara la funzione `X` , in cui il **`:::no-loc(this):::`** puntatore è un **`:::no-loc(const):::`** puntatore a un **`:::no-loc(const):::`** oggetto:

```cpp
// type_of_:::no-loc(this):::_pointer2.cpp
:::no-loc(class)::: Point
{
    unsigned X() :::no-loc(const):::;
};
int main()
{
}
```

Il tipo di **`:::no-loc(this):::`** in una funzione membro è descritto dalla sintassi seguente. *CV-Qualifier-list* è determinato dal dichiaratore della funzione membro. Può essere **`:::no-loc(const):::`** o **`:::no-loc(volatile):::`** (o entrambi). * :::no-loc(class)::: -Type* è il nome dell'oggetto :::no-loc(class)::: :

[*CV-Qualifier-list*] * :::no-loc(class)::: -tipo* ** \* :::no-loc(const)::: :::no-loc(this)::: **

In altre parole, il **`:::no-loc(this):::`** puntatore è sempre un :::no-loc(const)::: puntatore. Non può essere riassegnata.  I **`:::no-loc(const):::`** **`:::no-loc(volatile):::`** qualificatori o utilizzati nella dichiarazione di funzione membro si applicano all' :::no-loc(class)::: istanza **`:::no-loc(this):::`** di a cui punta il puntatore, nell'ambito di tale funzione.

Nella tabella seguente vengono descritto in modo più dettagliato il funzionamento di tali modificatori.

### <a name="semantics-of-no-locthis-modifiers"></a>Semantica dei :::no-loc(this)::: modificatori

|Modificatore|Significato|
|--------------|-------------|
|**`:::no-loc(const):::`**|Impossibile modificare i dati dei membri. non è possibile richiamare funzioni membro che non sono **`:::no-loc(const):::`** .|
|**`:::no-loc(volatile):::`**|I dati dei membri vengono caricati dalla memoria ogni volta che viene eseguito l'accesso; Disabilita determinate ottimizzazioni.|

Il passaggio di un **`:::no-loc(const):::`** oggetto a una funzione membro non è un errore **`:::no-loc(const):::`** .

Analogamente, è anche un errore passare un **`:::no-loc(volatile):::`** oggetto a una funzione membro che non lo è **`:::no-loc(volatile):::`** .

Le funzioni membro dichiarate come **`:::no-loc(const):::`** non possono modificare i dati dei membri, in tali funzioni, il **`:::no-loc(this):::`** puntatore è un puntatore a un **`:::no-loc(const):::`** oggetto.

> [!NOTE]
> Con :::no-loc(struct)::: ORS e de :::no-loc(struct)::: ORS non può essere dichiarato come **`:::no-loc(const):::`** o **`:::no-loc(volatile):::`** . Tuttavia, possono essere richiamati sugli **`:::no-loc(const):::`** **`:::no-loc(volatile):::`** oggetti o.

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)
