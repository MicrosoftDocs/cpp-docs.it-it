---
title: const (C++)
ms.date: 11/04/2016
f1_keywords:
- const_cpp
helpviewer_keywords:
- const keyword [C++]
ms.assetid: b21c0271-1ad0-40a0-b21c-5e812bba0318
ms.openlocfilehash: cc1f117cc5f26edf9cd85461281b925c97fa5225
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180304"
---
# <a name="const-c"></a>const (C++)

Quando si modifica una dichiarazione di dati, la parola chiave **const** specifica che l'oggetto o la variabile non è modificabile.

## <a name="syntax"></a>Sintassi

```
const declaration ;
member-function const ;
```

## <a name="const-values"></a>Valori const

La parola chiave **const** specifica che il valore di una variabile è costante e indica al compilatore di impedire al programmatore di modificarlo.

```cpp
// constant_values1.cpp
int main() {
   const int i = 5;
   i = 10;   // C3892
   i++;   // C2105
}
```

In C++è possibile usare la parola chiave **const** anziché la direttiva del preprocessore [#define](../preprocessor/hash-define-directive-c-cpp.md) per definire i valori costanti. I valori definiti con **const** sono soggetti al controllo dei tipi e possono essere utilizzati al posto delle espressioni costanti. In C++è possibile specificare le dimensioni di una matrice con una variabile **const** come indicato di seguito:

```cpp
// constant_values2.cpp
// compile with: /c
const int maxarray = 255;
char store_char[maxarray];  // allowed in C++; not allowed in C
```

In C l'impostazione predefinita dei valori costanti è il collegamento esterno, in modo che possano essere visualizzati solo nei file di origine. In C++ l'impostazione predefinita dei valori costanti è il collegamento interno che consente di visualizzarli nei file di intestazione.

La parola chiave **const** può essere usata anche nelle dichiarazioni del puntatore.

```cpp
// constant_values3.cpp
int main() {
   char *mybuf = 0, *yourbuf;
   char *const aptr = mybuf;
   *aptr = 'a';   // OK
   aptr = yourbuf;   // C3892
}
```

Un puntatore a una variabile dichiarata come **const** può essere assegnato solo a un puntatore che viene anche dichiarato come **const**.

```cpp
// constant_values4.cpp
#include <stdio.h>
int main() {
   const char *mybuf = "test";
   char *yourbuf = "test2";
   printf_s("%s\n", mybuf);

   const char *bptr = mybuf;   // Pointer to constant data
   printf_s("%s\n", bptr);

   // *bptr = 'a';   // Error
}
```

È possibile utilizzare i puntatori ai dati costanti come parametri di funzione per impedire alla funzione di modificare un parametro passato tramite un puntatore.

Per gli oggetti dichiarati come **const**, è possibile chiamare solo funzioni membro costanti. In questo modo si garantisce che l'oggetto costante non sia mai modificato.

```cpp
birthday.getMonth();    // Okay
birthday.setMonth( 4 ); // Error
```

È possibile chiamare funzioni membro costanti o non costanti per un oggetto non costante. È anche possibile eseguire l'overload di una funzione membro usando la parola chiave **const** ; in questo modo è possibile chiamare una versione diversa della funzione per oggetti costanti e non costanti.

Non è possibile dichiarare costruttori o distruttori con la parola chiave **const** .

## <a name="const-member-functions"></a>Funzioni membro const

La dichiarazione di una funzione membro con la parola chiave **const** specifica che la funzione è una funzione di "sola lettura" che non modifica l'oggetto per il quale viene chiamato. Una funzione membro costante non può modificare alcun membro dati non statico o chiamare funzioni membro non costanti. Per dichiarare una funzione membro costante, inserire la parola chiave **const** dopo la parentesi di chiusura dell'elenco di argomenti. La parola chiave **const** è obbligatoria sia nella dichiarazione che nella definizione.

```cpp
// constant_member_function.cpp
class Date
{
public:
   Date( int mn, int dy, int yr );
   int getMonth() const;     // A read-only function
   void setMonth( int mn );   // A write function; can't be const
private:
   int month;
};

int Date::getMonth() const
{
   return month;        // Doesn't modify anything
}
void Date::setMonth( int mn )
{
   month = mn;          // Modifies data member
}
int main()
{
   Date MyDate( 7, 4, 1998 );
   const Date BirthDate( 1, 18, 1953 );
   MyDate.setMonth( 4 );    // Okay
   BirthDate.getMonth();    // Okay
   BirthDate.setMonth( 4 ); // C2662 Error
}
```

## <a name="c-and-c-const-differences"></a>Differenze tra C++ C e const

Quando si dichiara una variabile come **const** in un file di codice sorgente C, è possibile procedere come segue:

```cpp
const int i = 2;
```

È quindi possibile usare questa variabile in un altro modulo come segue:

```cpp
extern const int i;
```

Tuttavia, per ottenere lo stesso comportamento C++in, è necessario dichiarare la variabile **const** come:

```cpp
extern const int i = 2;
```

Se si desidera dichiarare una variabile **extern** in un C++ file di codice sorgente per l'utilizzo in un file di codice sorgente C, utilizzare:

```cpp
extern "C" const int x=10;
```

per impedire l'alterazione del nome del compilatore C++.

## <a name="remarks"></a>Osservazioni

Quando si segue un elenco di parametri di una funzione membro, la parola chiave **const** specifica che la funzione non modifica l'oggetto per il quale viene richiamato.

Per ulteriori informazioni su **const**, vedere gli argomenti seguenti:

- [Puntatori const e volatile](../cpp/const-and-volatile-pointers.md)

- [Qualificatori di tipo (riferimenti per il linguaggio C)](../c-language/type-qualifiers.md)

- [volatile](../cpp/volatile-cpp.md)

- [#define](../preprocessor/hash-define-directive-c-cpp.md)

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)
