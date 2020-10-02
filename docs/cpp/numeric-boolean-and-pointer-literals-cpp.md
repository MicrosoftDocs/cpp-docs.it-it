---
title: Valori letterali numerici, booleani e puntatore (C++)
description: Formati di linguaggio standard C++ per valori letterali Integer, a virgola mobile, booleani e puntatore.
ms.date: 11/04/2016
helpviewer_keywords:
- literals, C++
- constants, literals
- literals [C++]
ms.assetid: 17c09fc3-3ad7-47e2-8b48-ba8ae994edc8
ms.openlocfilehash: 84fdac7010805fc4d0a429231a080ab11d5c595a
ms.sourcegitcommit: f7fbdc39d73e1fb3793c396fccf7a1602af7248b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/02/2020
ms.locfileid: "91662256"
---
# <a name="numeric-boolean-and-pointer-literals"></a>Valori letterali numerici, booleani e puntatore

Un valore letterale è un elemento del programma che rappresenta direttamente un valore. Questo articolo illustra i valori letterali di tipo Integer, a virgola mobile, booleano e puntatore. Per informazioni sui valori letterali stringa e carattere, vedere [stringa e valori letterali carattere (C++)](../cpp/string-and-character-literals-cpp.md). È anche possibile definire valori letterali personalizzati in base a una di queste categorie. Per altre informazioni, vedere [valori letterali definiti dall'utente (C++)](../cpp/user-defined-literals-cpp.md)

. È possibile usare i valori letterali in molti contesti, ma in genere vengono usati per inizializzare le variabili denominate e passare argomenti alle funzioni:

```cpp
const int answer = 42;      // integer literal
double d = sin(108.87);     // floating point literal passed to sin function
bool b = true;              // boolean literal
MyClass* mc = nullptr;      // pointer literal
```

In alcuni casi è importante indicare al compilatore come interpretare un valore letterale o il tipo specifico da assegnare a tale valore. Questa operazione viene eseguita aggiungendo prefissi o suffissi al valore letterale. Il prefisso, ad esempio, `0x` indica al compilatore di interpretare il numero che lo segue come valore esadecimale, ad esempio `0x35` . Il `ULL` suffisso indica al compilatore di trattare il valore come un **`unsigned long long`** tipo, come in `5894345ULL` . Per un elenco completo di prefissi e suffissi per ogni tipo di valore letterale, vedere le sezioni seguenti.

## <a name="integer-literals"></a>Valori letterali Integer

I valori letterali Integer iniziano con una cifra e non includono parti frazionarie o esponenti. È possibile specificare valori letterali integer in formato decimale, binario, ottale o esadecimale. È possibile specificare facoltativamente un valore letterale integer come senza segno e come tipo Long o Long, usando un suffisso.

Se non è presente alcun prefisso o suffisso, il compilatore fornirà un tipo di valore letterale integrale **`int`** (32 bit), se il valore si adatta, in caso contrario fornirà il tipo **`long long`** (64 bit).

Per specificare un valore letterale integrale decimale, iniziare la specifica con un numero diverso da zero. Ad esempio:

```cpp
int i = 157;        // Decimal literal
int j = 0198;       // Not a decimal number; erroneous octal literal
int k = 0365;       // Leading zero specifies octal literal, not decimal
int m = 36'000'000  // digit separators make large values more readable
```

Per specificare un valore letterale integrale ottale, iniziare la specifica con 0, seguito da una sequenza di cifre comprese nell'intervallo da 0 a 7. Le cifre 8 e 9 costituiscono errore nella specifica di un valore letterale ottale. Ad esempio:

```cpp
int i = 0377;   // Octal literal
int j = 0397;   // Error: 9 is not an octal digit
```

Per specificare un valore letterale integrale esadecimale, iniziare la specifica con `0x` o `0X` (il caso della "x" non è rilevante), seguito da una sequenza di cifre nell'intervallo compreso `0` tra `9` e `a` (o `A` ) tramite `f` (o `F` ). Le cifre esadecimali da `a` (o `A`) a `f` (o `F`) rappresentano i valori compresi nell'intervallo da 10 a 15. Ad esempio:

```cpp
int i = 0x3fff;   // Hexadecimal literal
int j = 0X3FFF;   // Equal to i
```

Per specificare un tipo senza segno, utilizzare il `u` `U` suffisso o. Per specificare un tipo Long, utilizzare il `l` `L` suffisso o. Per specificare un tipo integrale a 64 bit, usare il suffisso LL o ll. Il suffisso I64 è ancora supportato, ma non è consigliabile. È specifico di Microsoft e non è portabile. Ad esempio:

```cpp
unsigned val_1 = 328u;                  // Unsigned value
long val_2 = 0x7FFFFFL;                 // Long value specified
                                        //  as hex literal
unsigned long val_3 = 0776745ul;        // Unsigned long value
auto val_4 = 108LL;                           // signed long long
auto val_4 = 0x8000000000000000ULL << 16;     // unsigned long long
```

**Separatori di cifre**: è possibile usare il carattere virgoletta singola (apostrofo) per separare i valori di posizione in numeri maggiori per facilitarne la lettura da parte degli utenti. I separatori non hanno effetto sulla compilazione.

```cpp
long long i = 24'847'458'121
```

## <a name="floating-point-literals"></a>Valori letterali a virgola mobile

I valori letterali a virgola mobile specificano valori che devono avere una parte decimale. Questi valori contengono punti decimali ( **`.`** ) e possono contenere esponenti.

I valori letterali a virgola mobile hanno un *separatore* (talvolta denominato *mantissa*), che specifica il valore del numero. Hanno un *esponente*, che specifica la grandezza del numero. E hanno un suffisso facoltativo che specifica il tipo del valore letterale. Separatore viene specificato come sequenza di cifre seguita da un punto, seguito da una sequenza facoltativa di cifre che rappresenta la parte frazionaria del numero. Ad esempio:

```cpp
18.46
38.
```

L'esponente, se presente, specifica la grandezza del numero come potenza di 10, come illustrato nell'esempio seguente:

```cpp
18.46e0      // 18.46
18.46e1      // 184.6
```

L'esponente può essere specificato utilizzando `e` o `E` , che hanno lo stesso significato, seguito da un segno facoltativo (+ o-) e da una sequenza di cifre.  Se un esponente è presente, il separatore decimale finale è inutile in numeri interi come `18E0`.

Per impostazione predefinita, i valori letterali a virgola mobile sono di tipo **`double`** . Usando i suffissi `f` o o `l` o `F` `L` (il suffisso non fa distinzione tra maiuscole e minuscole), il valore letterale può essere specificato come **`float`** o **`long double`** .

Sebbene **`long double`** e **`double`** abbiano la stessa rappresentazione, non sono dello stesso tipo. Ad esempio, è possibile avere funzioni in overload come

```cpp
void func( double );
```

e

```cpp
void func( long double );
```

## <a name="boolean-literals"></a>valori letterali booleani

I valori letterali booleani sono **`true`** e **`false`** .

## <a name="pointer-literal-c11"></a>Valore letterale puntatore (C + + 11)

In C++ è stato introdotto il [`nullptr`](../cpp/nullptr.md) valore letterale per specificare un puntatore inizializzato a zero. Nel codice portabile **`nullptr`** è consigliabile usare invece di zero o macro di tipo integrale, ad esempio `NULL` .

## <a name="binary-literals-c14"></a>Valori letterali binari (C++14)

È possibile specificare un valore letterale binario mediante il prefisso `0B` o `0b`, seguito da una sequenza di 1 e 0:

```cpp
auto x = 0B001101 ; // int
auto y = 0b000001 ; // int
```

## <a name="avoid-using-literals-as-magic-constants"></a>Evitare di usare i valori letterali come "costanti magiche"

È possibile usare i valori letterali direttamente in espressioni e istruzioni, anche se non è sempre una buona norma di programmazione:

```cpp
if (num < 100)
    return "Success";
```

Nell'esempio precedente, una procedura consigliata consiste nell'usare una costante denominata che comunica un significato chiaro, ad esempio "MAXIMUM_ERROR_THRESHOLD". Se il valore restituito "success" viene visualizzato dagli utenti finali, potrebbe essere preferibile usare una costante di stringa denominata. È possibile tenere costanti stringa in un'unica posizione in un file che può essere localizzato in altre lingue. L'uso di costanti denominate consente a se stessi e ad altri utenti di comprendere lo scopo del codice.

## <a name="see-also"></a>Vedere anche

[Convenzioni lessicali](../cpp/lexical-conventions.md)<br/>
[Valori letterali stringa C++](../cpp/string-and-character-literals-cpp.md)<br/>
[Valori letterali definiti dall'utente C++](../cpp/user-defined-literals-cpp.md)
