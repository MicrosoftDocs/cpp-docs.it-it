---
title: Alias e typedef (C++)
ms.date: 11/04/2016
f1_keywords:
- typedef_cpp
ms.assetid: af1c24d2-4bfd-408a-acfc-482e264232f5
ms.openlocfilehash: 6054b7119614d9325bd099dd39b8aa1365d97ed7
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227673"
---
# <a name="aliases-and-typedefs-c"></a>Alias e typedef (C++)

È possibile usare una *dichiarazione di alias* per dichiarare un nome da usare come sinonimo di un tipo dichiarato in precedenza. (Questo meccanismo viene anche definito in modo informale come alias di *tipo*). È anche possibile usare questo meccanismo per creare un *modello di alias*, che può essere particolarmente utile per gli allocatori personalizzati.

## <a name="syntax"></a>Sintassi

```
using identifier = type;
```

## <a name="remarks"></a>Osservazioni

*identificatore*<br/>
Nome dell'alias.

*type*<br/>
Identificatore di tipo per il quale si crea un alias.

Un alias non introduce un nuovo tipo e non può modificare il significato di un nome di tipo esistente.

La forma più semplice di un alias è equivalente al **`typedef`** meccanismo di c++ 03:

```cpp
// C++11
using counter = long;

// C++03 equivalent:
// typedef long counter;
```

Entrambi consentono la creazione delle variabili di tipo contatore. Un'operazione particolarmente utile è un alias di tipo come questo per `std::ios_base::fmtflags`:

```cpp
// C++11
using fmtfl = std::ios_base::fmtflags;

// C++03 equivalent:
// typedef std::ios_base::fmtflags fmtfl;

fmtfl fl_orig = std::cout.flags();
fmtfl fl_hex = (fl_orig & ~std::cout.basefield) | std::cout.showbase | std::cout.hex;
// ...
std::cout.flags(fl_hex);
```

Gli alias funzionano anche con i puntatori a funzione, ma sono molto più leggibili del typedef equivalente:

```cpp
// C++11
using func = void(*)(int);

// C++03 equivalent:
// typedef void (*func)(int);

// func can be assigned to a function pointer value
void actual_function(int arg) { /* some code */ }
func fptr = &actual_function;
```

Una limitazione del **`typedef`** meccanismo è che non funziona con i modelli. Tuttavia, la sintassi di alias di tipo in C++11 consente la creazione di modelli di alias:

```cpp
template<typename T> using ptr = T*;

// the name 'ptr<T>' is now an alias for pointer to T
ptr<int> ptr_int;
```

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare un modello di alias con un allocatore personalizzato, in questo caso un tipo intero vettoriale. Per **`int`** creare un alias appropriato per nascondere gli elenchi di parametri complessi nel codice funzionale principale, è possibile sostituire qualsiasi tipo per. Usando l'allocatore personalizzato nel codice è possibile migliorare la leggibilità e ridurre il rischio di introdurre bug causati da errori di battitura.

```cpp
#include <stdlib.h>
#include <new>

template <typename T> struct MyAlloc {
    typedef T value_type;

    MyAlloc() { }
    template <typename U> MyAlloc(const MyAlloc<U>&) { }

    bool operator==(const MyAlloc&) const { return true; }
    bool operator!=(const MyAlloc&) const { return false; }

    T * allocate(const size_t n) const {
        if (n == 0) {
            return nullptr;
        }

        if (n > static_cast<size_t>(-1) / sizeof(T)) {
            throw std::bad_array_new_length();
        }

        void * const pv = malloc(n * sizeof(T));

        if (!pv) {
            throw std::bad_alloc();
        }

        return static_cast<T *>(pv);
    }

    void deallocate(T * const p, size_t) const {
        free(p);
    }
};

#include <vector>
using MyIntVector = std::vector<int, MyAlloc<int>>;

#include <iostream>

int main ()
{
    MyIntVector foov = { 1701, 1764, 1664 };

    for (auto a: foov) std::cout << a << " ";
    std::cout << "\n";

    return 0;
}
```

```Output
1701 1764 1664
```

## <a name="typedefs"></a>Typedef

Una **`typedef`** dichiarazione introduce un nome che, all'interno dell'ambito, diventa un sinonimo del tipo fornito dalla parte della dichiarazione di *tipo* .

È possibile usare le dichiarazioni typedef per costruire nomi più brevi o più significativi per i tipi già definiti dal linguaggio o per i tipi dichiarati. I nomi di typedef consentono di incapsulare dettagli di implementazione che possono cambiare.

Diversamente dalle **`class`** **`struct`** dichiarazioni,, **`union`** e, le **`enum`** **`typedef`** dichiarazioni non introducono nuovi tipi, ma introducono nuovi nomi per i tipi esistenti.

I nomi dichiarati utilizzando **`typedef`** occupano lo stesso spazio dei nomi degli altri identificatori (ad eccezione delle etichette di istruzione). Tali nomi pertanto non possono usare lo stesso identificatore di un nome dichiarato in precedenza, tranne che in una dichiarazione di tipo classe. Prendere in considerazione gli esempi seguenti:

```cpp
// typedef_names1.cpp
// C2377 expected
typedef unsigned long UL;   // Declare a typedef name, UL.
int UL;                     // C2377: redefined.
```

Le regole per nascondere i nomi relative ad altri identificatori regolano anche la visibilità dei nomi dichiarati tramite **`typedef`** . Di conseguenza, l'esempio seguente è valido in C++.

```cpp
// typedef_names2.cpp
typedef unsigned long UL;   // Declare a typedef name, UL
int main()
{
   unsigned int UL;   // Redeclaration hides typedef name
}

// typedef UL back in scope
```

```cpp
// typedef_specifier1.cpp
typedef char FlagType;

int main()
{
}

void myproc( int )
{
    int FlagType;
}
```

Quando si dichiara un identificatore in ambito locale dello stesso nome di un typedef o quando si dichiara un membro di una struttura o un'unione nello stesso ambito o in un ambito interno, l'identificatore di tipo deve essere specificato. Ad esempio:

```cpp
typedef char FlagType;
const FlagType x;
```

Per riutilizzare il nome `FlagType` per un identificatore, un membro della struttura o un membro dell'unione, deve essere fornito il tipo:

```cpp
const int FlagType;  // Type specifier required
```

Non è sufficiente dire

```cpp
const FlagType;      // Incomplete specification
```

perché `FlagType` viene usato per far parte del tipo e non un identificatore che viene ridichiarato. Questa dichiarazione si suppone essere una dichiarazione non consentita quale

```cpp
int;  // Illegal declaration
```

È possibile dichiarare qualsiasi tipo con typedef, incluso il puntatore, la funzione e i tipi di matrice. È possibile dichiarare un nome di typedef per un puntatore a un tipo di unione o di struttura prima di definire il tipo di struttura o di unione, purché la definizione abbia la stessa visibilità della dichiarazione.

### <a name="examples"></a>Esempi

Un uso delle **`typedef`** dichiarazioni è quello di rendere le dichiarazioni più uniformi e compatti. Ad esempio:

```cpp
typedef char CHAR;          // Character type.
typedef CHAR * PSTR;        // Pointer to a string (char *).
PSTR strchr( PSTR source, CHAR target );
typedef unsigned long ulong;
ulong ul;     // Equivalent to "unsigned long ul;"
```

Per usare **`typedef`** per specificare tipi fondamentali e derivati nella stessa dichiarazione, è possibile separare i dichiaratori con virgole. Ad esempio:

```cpp
typedef char CHAR, *PSTR;
```

L'esempio seguente fornisce il tipo `DRAWF` per una funzione che non restituisce alcun valore e accetta due argomenti int:

```cpp
typedef void DRAWF( int, int );
```

Dopo l' **`typedef`** istruzione precedente, la dichiarazione

```cpp
DRAWF box;
```

sarà equivalente alla dichiarazione

```cpp
void box( int, int );
```

**`typedef`** viene spesso combinato con **`struct`** per dichiarare e assegnare un nome ai tipi definiti dall'utente:

```cpp
// typedef_specifier2.cpp
#include <stdio.h>

typedef struct mystructtag
{
    int   i;
    double f;
} mystruct;

int main()
{
    mystruct ms;
    ms.i = 10;
    ms.f = 0.99;
    printf_s("%d   %f\n", ms.i, ms.f);
}
```

```Output
10   0.990000
```

### <a name="re-declaration-of-typedefs"></a>Ridichiarazione di typedef

La **`typedef`** dichiarazione può essere usata per dichiarare nuovamente lo stesso nome per fare riferimento allo stesso tipo. Ad esempio:

```cpp
// FILE1.H
typedef char CHAR;

// FILE2.H
typedef char CHAR;

// PROG.CPP
#include "file1.h"
#include "file2.h"   // OK
```

Programma *PROG. CPP* include due file di intestazione, entrambi contenenti **`typedef`** dichiarazioni per il nome `CHAR` . Se entrambe le dichiarazioni si riferiscono allo stesso tipo, tale ridichiarazione è accettabile.

Un oggetto **`typedef`** non può ridefinire un nome dichiarato in precedenza come tipo diverso. Se quindi *file2. H* contiene

```cpp
// FILE2.H
typedef int CHAR;     // Error
```

il compilatore genera un errore a causa dei tentativi di ridichiarare il nome `CHAR` per fare riferimento a un tipo diverso. Questo consente di estendere i costrutti come:

```cpp
typedef char CHAR;
typedef CHAR CHAR;      // OK: redeclared as same type

typedef union REGS      // OK: name REGS redeclared
{                       //  by typedef name with the
    struct wordregs x;  //  same meaning.
    struct byteregs h;
} REGS;
```

### <a name="typedefs-in-c-vs-c"></a>typedef in C++ rispetto a C

L'utilizzo dell' **`typedef`** identificatore con i tipi di classe è supportato in gran parte grazie alla procedura ANSI C relativa alla dichiarazione di strutture senza nome nelle **`typedef`** dichiarazioni. Ad esempio, molti programmatori C utilizzano le operazioni seguenti:

```cpp
// typedef_with_class_types1.cpp
// compile with: /c
typedef struct {   // Declare an unnamed structure and give it the
                   // typedef name POINT.
   unsigned x;
   unsigned y;
} POINT;
```

Il vantaggio di questo tipo di dichiarazione è che consente dichiarazioni quali:

```cpp
POINT ptOrigin;
```

invece di:

```cpp
struct point_t ptOrigin;
```

In C++, la differenza tra i **`typedef`** nomi e i tipi reali (dichiarati con le **`class`** **`struct`** **`union`** parole chiave,, e **`enum`** ) è più distinta. Sebbene la procedura C relativa alla dichiarazione di una struttura senza nome in un' **`typedef`** istruzione continui a funzionare, non fornisce alcun vantaggio per la notazione in c.

```cpp
// typedef_with_class_types2.cpp
// compile with: /c /W1
typedef struct {
   int POINT();
   unsigned x;
   unsigned y;
} POINT;
```

Nell'esempio precedente viene dichiarata una classe denominata `POINT` usando la sintassi della classe senza nome **`typedef`** . `POINT` viene considerato come un nome di classe; tuttavia, le restrizioni seguenti vengono applicate ai nomi introdotti nel modo seguente:

- Il nome (il sinonimo) non può essere visualizzato dopo un **`class`** **`struct`** prefisso, o **`union`** .

- Il nome non può essere usato come nome del distruttore o del costruttore all'interno di una dichiarazione di classe.

In breve, questa sintassi non fornisce alcun meccanismo per l'ereditarietà, la costruzione o la distruzione.
