---
title: Estensioni Microsoft a C e C++
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
ms.openlocfilehash: dab8ac23be8b66ca84c57514c6c04e94dddebaae
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62321189"
---
# <a name="microsoft-extensions-to-c-and-c"></a>Estensioni Microsoft a C e C++

Visual C++ estende gli standard ANSI C e ANSI C++ come segue.

## <a name="keywords"></a>Parole chiave

Sono state aggiunte diverse parole chiave. Nell'elenco [parole chiave](../../cpp/keywords-cpp.md), le parole chiave con due caratteri di sottolineatura iniziali sono estensioni di Visual C++.

## <a name="out-of-class-definition-of-static-const-integral-or-enum-members"></a>Dalla definizione della classe di const integrale (o enum) i membri statici

Nello standard (**/Za**), è necessario creare una definizione out-of-class per i membri dati, come illustrato di seguito:

```cpp
class CMyClass  {
   static const int max = 5;
   int m_array[max];
}
// . . .
const int CMyClass::max;   // out of class definition
```

Sotto **/Ze**, la definizione out-of-class è facoltativa per i membri dati static, const integral e const enum. Solo gli integrali e gli enum che sono static e const possono disporre di inizializzatori in una classe. L'espressione che inizializza deve essere un'espressione const.

Per evitare errori quando una definizione out-of-class viene fornita in un'intestazione di file e il file di intestazione è incluso in più file di origine, usare [selectany](../../cpp/selectany.md). Ad esempio:

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

- Ridefinizioni di elementi extern come statico:

   ```C
   extern int clip();
   static int clip()
   {}
   ```

- Uso di typedef non dannoso ridefinizioni nello stesso ambito:

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

## <a name="data-declarations-and-definitions"></a>Le definizioni e dichiarazioni di dati

Il compilatore C supporta le seguenti funzionalità di dichiarazione e definizione dei dati.

- Costanti carattere e stringa miste in un inizializzatore:

   ```C
   char arr[5] = {'a', 'b', "cde"};
   ```

- Campi di bit che hanno tipi di base diverso da **int senza segno** oppure **tipo signed int**.

- Dichiaratori che non dispongono di un tipo:

   ```C
   x;
   int main( void )
   {
       x = 1;
   }
   ```

- Matrici non dimensionate come l'ultimo campo nelle strutture e unioni:

   ```C
   struct zero
   {
       char *c;
       int zarray[];
   };
   ```

- Strutture senza nome (anonime):

   ```C
   struct
   {
       int i;
       char *s;
   };
   ```

- Unioni (anonime) senza nome:

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

## <a name="intrinsic-floating-point-functions"></a>Funzioni a virgola mobile intrinseche

Entrambi x86 il compilatore C++ e il compilatore C supportano la generazione di inline del `atan`, `atan2`, `cos`, `exp`, `log`, `log10`, `sin`, `sqrt`, e `tan` funzioni quando **/Oi** è specificato. Per il compilatore C, la conformità ANSI viene persa quando vengono utilizzate queste funzioni intrinseche in quanto non impostano la variabile `errno`.

## <a name="passing-a-non-const-pointer-parameter-to-a-function-that-expects-a-reference-to-a-const-pointer-parameter"></a>Passando un parametro di puntatore non-const a una funzione che prevede un riferimento a un parametro del puntatore const

Questa è un'estensione a C++. Questo codice viene compilato con **/Ze**:

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

## <a name="iso646h-not-enabled"></a>ISO646. H non abilitata

Sotto **/Ze**, è necessario includere lt;iso646.h&gt Se si desidera utilizzare formati di testo degli operatori seguenti:

- & & (e)

- &= (and_eq)

- & (bitand)

- &#124; (bitor)

- ~ (compl)

- ! (not)

- != (not_eq)

- &#124;&#124; (or)

- &#124;= (or_eq)

- ^ (xor)

- ^= (xor_eq)

## <a name="address-of-string-literal-has-type-const-char--not-const-char--"></a>Indirizzo del valore letterale stringa è di tipo const char [], non const char (*)]

Nell'esempio seguente restituirà `char const (*)[4]` sotto **/Za**, ma `char const [4]` sotto **/Ze**.

```cpp
#include <stdio.h>
#include <typeinfo>

int main()
{
    printf_s("%s\n", typeid(&"abc").name());
}
```

## <a name="see-also"></a>Vedere anche

- [/Za, /Ze (disabilita le estensioni del linguaggio)](za-ze-disable-language-extensions.md)
- [Opzioni del compilatore MSVC](compiler-options.md)
- [Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
