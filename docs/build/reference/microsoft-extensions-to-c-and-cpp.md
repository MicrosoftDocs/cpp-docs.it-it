---
description: 'Ulteriori informazioni su: estensioni Microsoft a C e C++'
title: Estensioni Microsoft per C e C++
ms.date: 06/14/2018
helpviewer_keywords:
- or_eq operator
- ~ operator, extensions to C/C++
- '& operator, extensions to C/C++'
- '&= operator'
- iso646.h header
- Xor operator, Microsoft extensions to C/C++
- '!= operator'
- '! operator, extension to C++'
- Or operator, Microsoft extensions to C/C++
- ^ operator, extensions to C/C++
- ^= operator, C++ extensions
- xor_eq operator
- and_eq operator
- Microsoft extensions to C/C++
- '|= operator'
- '|| operator'
- And operator, extensions to C/C++
- NOT operator
- '&& operator'
- extensions, C language
- Visual C++, extensions to C/C++
- '| operator, extensions'
- not_eq operator
- Visual C, Microsoft extensions
- extensions
- compl method
ms.assetid: e811a74a-45ba-4c00-b206-2f2321b8689a
ms.openlocfilehash: fac6edbdfd559f3cebd18dcdc3b8cfca2a9336dd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190692"
---
# <a name="microsoft-extensions-to-c-and-c"></a>Estensioni Microsoft per C e C++

Visual C++ estende gli standard ANSI C e ANSI C++ come segue.

## <a name="keywords"></a>Parole chiave

Sono state aggiunte diverse parole chiave. Nell'elenco delle [parole chiave](../../cpp/keywords-cpp.md)le parole chiave con due caratteri di sottolineatura iniziali sono Visual C++ estensioni.

## <a name="out-of-class-definition-of-static-const-integral-or-enum-members"></a>Definizione della classe di membri statici const (o enum)

In base allo standard (**/za**), è necessario creare una definizione out-of-Class per i membri dati, come illustrato di seguito:

```cpp
class CMyClass  {
   static const int max = 5;
   int m_array[max];
}
// . . .
const int CMyClass::max;   // out of class definition
```

In **/ze** la definizione out-of-Class è facoltativa per i membri dati statici, const integrali e const enum. Solo gli integrali e gli enum che sono static e const possono disporre di inizializzatori in una classe. L'espressione che inizializza deve essere un'espressione const.

Per evitare errori quando viene fornita una definizione out-of-Class in un file di intestazione e il file di intestazione è incluso in più file di origine, usare [selectany](../../cpp/selectany.md). Ad esempio:

```cpp
__declspec(selectany) const int CMyClass::max = 5;
```

## <a name="casts"></a>Cast

Il compilatore C++ e il compilatore C supportano i seguenti tipi di cast non ANSI:

- Cast non ANSI per produrre I-value. Ad esempio:

   ```C
   char *p;
   (( int * ) p )++;
   ```

   > [!NOTE]
   > Questa estensione è disponibile solo nel linguaggio C. È possibile utilizzare il seguente formato dello standard ANSI C nel codice C++ per modificare un puntatore come se fosse un puntatore per un tipo diverso.

   L'esempio precedente potrebbe essere riscritto come segue per essere conforme allo standard ANSI C.

   ```C
   p = ( char * )(( int * )p + 1 );
   ```

- Cast non ANSI di un puntatore a funzione a un puntatore di dati. Ad esempio:

   ```C
   int ( * pfunc ) ();
   int *pdata;
   pdata = ( int * ) pfunc;
   ```

   Per eseguire lo stesso cast conservando la compatibilità ANSI, è possibile eseguire il casting del puntatore a funzione a un `uintptr_t` prima di eseguirne il casting a un puntatore dati:

   ```C
   pdata = ( int * ) (uintptr_t) pfunc;
   ```

## <a name="variable-length-argument-lists"></a>Elenchi di argomenti a lunghezza variabile

Il compilatore C++ e il compilatore C supportano l'utilizzo di un dichiaratore di funzione che specifica un numero variabile di argomenti, seguito da una definizione di funzione che fornisce un tipo:

```cpp
void myfunc( int x, ... );
void myfunc( int x, char * c )
{ }
```

## <a name="single-line-comments"></a>Commenti a riga singola

Il compilatore C supporta commenti a riga singola, introdotti usando due caratteri di barra (//):

```C
// This is a single-line comment.
```

## <a name="scope"></a>Ambito

Il compilatore C supporta le seguenti funzionalità relative all'ambito.

- Ridefinizioni degli elementi extern come statici:

   ```C
   extern int clip();
   static int clip()
   {}
   ```

- Uso di ridefinizioni typedef benigne nello stesso ambito:

   ```C
   typedef int INT;
   typedef int INT;
   ```

- I dichiaratori di funzione hanno un ambito file:

   ```C
   void func1()
   {
       extern int func2( double );
   }
   int main( void )
   {
       func2( 4 );    //  /Ze passes 4 as type double
   }                  //  /Za passes 4 as type int
   ```

- Utilizzare le variabili di block-scope inizializzate usando espressioni non costanti:

   ```C
   int clip( int );
   int bar( int );
   int main( void )
   {
       int array[2] = { clip( 2 ), bar( 4 ) };
   }
   int clip( int x )
   {
       return x;
   }
   int bar( int x )
   {
       return x;
   }
   ```

## <a name="data-declarations-and-definitions"></a>Dichiarazioni e definizioni di dati

Il compilatore C supporta le seguenti funzionalità di dichiarazione e definizione dei dati.

- Costanti di tipo carattere misto e stringa in un inizializzatore:

   ```C
   char arr[5] = {'a', 'b', "cde"};
   ```

- Campi di bit con tipi di base diversi da **`unsigned int`** o **`signed int`** .

- Dichiaratori che non dispongono di un tipo:

   ```C
   x;
   int main( void )
   {
       x = 1;
   }
   ```

- Matrici non dimensionate come ultimo campo di strutture e unioni:

   ```C
   struct zero
   {
       char *c;
       int zarray[];
   };
   ```

- Strutture senza nome (anonima):

   ```C
   struct
   {
       int i;
       char *s;
   };
   ```

- Unioni senza nome (anonima):

   ```C
   union
   {
       int i;
       float fl;
   };
   ```

- Membri senza nome:

   ```C
   struct s
   {
      unsigned int flag : 1;
      unsigned int : 31;
   }
   ```

## <a name="intrinsic-floating-point-functions"></a>Funzioni intrinseche a virgola mobile

Sia il compilatore C++ x86 sia il compilatore C supportano la generazione inline `atan` delle `atan2` funzioni,, `cos` , `exp` , `log` , `log10` , `sin` , `sqrt` e `tan` quando viene specificato **/OI** . Per il compilatore C, la conformità ANSI viene persa quando vengono utilizzate queste funzioni intrinseche in quanto non impostano la variabile `errno`.

## <a name="passing-a-non-const-pointer-parameter-to-a-function-that-expects-a-reference-to-a-const-pointer-parameter"></a>Passaggio di un parametro puntatore non const a una funzione che prevede un riferimento a un parametro del puntatore const

Si tratta di un'estensione di C++. Questo codice verrà compilato con **/ze**:

```cpp
typedef   int   T;

const T  acT = 9;      // A constant of type 'T'
const T* pcT = &acT;   // A pointer to a constant of type 'T'

void func2 ( const T*& rpcT )   // A reference to a pointer to a constant of type 'T'
{
   rpcT = pcT;
}

T*   pT;               // A pointer to a 'T'

void func ()
{
   func2 ( pT );      // Should be an error, but isn't detected
   *pT   = 7;         // Invalidly overwrites the constant 'acT'
}
```

## <a name="iso646h-not-enabled"></a>ISO646. H non abilitato

In **/ze** è necessario includere iso646. h se si desidera utilizzare i formati di testo degli operatori seguenti:

- && (and)

- &= (and_eq)

- & (BITAND)

- &#124; (BITOR)

- ~ (compl)

- ! non

- ! = (not_eq)

- &#124;&#124; (or)

- &#124;= (or_eq)

- ^ (XOR)

- ^ = (xor_eq)

## <a name="address-of-string-literal-has-type-const-char--not-const-char--"></a>L'indirizzo del valore letterale stringa è di tipo const char [], not const char (*) []

Nell'esempio seguente viene restituito l'output `char const (*)[4]` in **/za**, ma `char const [4]` in **/ze**.

```cpp
#include <stdio.h>
#include <typeinfo>

int main()
{
    printf_s("%s\n", typeid(&"abc").name());
}
```

## <a name="see-also"></a>Vedi anche

- [/Za,/ze (Disabilita estensioni linguaggio)](za-ze-disable-language-extensions.md)
- [Opzioni del compilatore MSVC](compiler-options.md)
- [Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
