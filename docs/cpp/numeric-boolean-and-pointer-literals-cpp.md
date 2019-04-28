---
title: Numerici, booleani e valori letterali di puntatore (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- literals, C++
- constants, literals
- literals [C++]
ms.assetid: 17c09fc3-3ad7-47e2-8b48-ba8ae994edc8
ms.openlocfilehash: f263e9a2ed357cdc80ec29fc5d1b6d58c9e093e4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62245102"
---
# <a name="numeric-boolean-and-pointer-literals--c"></a>Numerici, booleani e valori letterali di puntatore (C++)

Un valore letterale è un elemento del programma che rappresenta direttamente un valore. Questo articolo illustra i valori letterali di tipo Integer, a virgola mobile, booleano e puntatore. Per informazioni sui valori letterali stringa e carattere, vedere [stringa e valori letterali carattere (C++)](../cpp/string-and-character-literals-cpp.md). È anche possibile definire valori letterali personalizzati basati su uno qualsiasi di queste categorie. per altre informazioni vedere [valori letterali definiti dall'utente (C++)](../cpp/user-defined-literals-cpp.md)

. È possibile usare i valori letterali in molti contesti, ma in genere vengono usati per inizializzare le variabili denominate e passare argomenti alle funzioni:

```cpp
const int answer = 42; // integer literal
double d = sin(108.87);     //floating point literal passed to sin function
bool b = true;              // boolean literal
MyClass* mc = nullptr;      // pointer literal
```

In alcuni casi è importante indicare al compilatore come interpretare un valore letterale o il tipo specifico da assegnare a tale valore. Per ottenere questo risultato, aggiungere prefissi o suffissi al valore letterale. Ad esempio, il prefisso 0x indica al compilatore di interpretare il numero che lo segue come valore esadecimale, ad esempio 0x35. Il suffisso ULL indica al compilatore di considerare il valore un **long long senza segno** tipo, 5894345ull. Per un elenco completo di prefissi e suffissi per ogni tipo di valore letterale, vedere le sezioni seguenti.

## <a name="syntax"></a>Sintassi

## <a name="integer-literals"></a>Valori letterali Integer

I valori letterali Integer iniziano con una cifra e non includono parti frazionarie o esponenti. È possibile specificare valori letterali Integer in formato decimale, ottale o esadecimale. Possono specificare tipi con o senza segno e tipi long o short.

Quando non è presente alcun prefisso o suffisso, il compilatore genererà un tipo di valore letterale integrale **int** (32 bit), se il valore rientra, in caso contrario verrà assegnato il tipo **long long** (64 bit).

Per specificare un valore letterale integrale decimale, iniziare la specifica con un numero diverso da zero. Ad esempio:

```cpp
int i = 157;   // Decimal literal
int j = 0198;       // Not a decimal number; erroneous octal literal
int k = 0365;       // Leading zero specifies octal literal, not decimal
int m = 36'000'000  // digit separators make large values more readable
int
```

Per specificare un valore letterale integrale ottale, iniziare la specifica con 0, seguito da una sequenza di cifre comprese nell'intervallo da 0 a 7. Le cifre 8 e 9 costituiscono errore nella specifica di un valore letterale ottale. Ad esempio:

```cpp
int i = 0377;   // Octal literal
int j = 0397;        // Error: 9 is not an octal digit
```

Per specificare un valore letterale integrale esadecimale, iniziare la specifica con `0x` o `0X` (la "x" può essere maiuscola o minuscola), seguito da una sequenza di cifre comprese nell'intervallo da `0` a `9` e da `a` (o `A`) a `f` (o `F`). Le cifre esadecimali da `a` (o `A`) a `f` (o `F`) rappresentano i valori compresi nell'intervallo da 10 a 15. Ad esempio:

```cpp
int i = 0x3fff;   // Hexadecimal literal
int j = 0X3FFF;        // Equal to i
```

Per specificare un tipo unsigned, usare il `u` o `U` suffisso. Per specificare un tipo long, usare il `l` o `L` suffisso. Per specificare un tipo integrale a 64 bit, usare il suffisso LL o ll. Il suffisso i64 è ancora supportato ma è consigliabile evitarlo, poiché è specifico per Microsoft e non è portabile. Ad esempio:

```cpp
unsigned val_1 = 328u;             // Unsigned value
long val_2 = 0x7FFFFFL;                 // Long value specified
                                        //  as hex literal
unsigned long val_3 = 0776745ul;        // Unsigned long value
auto val_4 = 108LL;                           // signed long long
auto val_4 = 0x8000000000000000ULL << 16;     // unsigned long long
```

**Separatori di cifre**: È possibile usare il carattere di virgoletta singola (apostrofo) per separare i valori sul posto nei numeri grandi per semplificarne la lettura per gli utenti. I separatori non hanno effetto sulla compilazione.

```cpp
long long i = 24'847'458'121
```

## <a name="floating-point-literals"></a>Valori letterali a virgola mobile

I valori letterali a virgola mobile specificano valori che devono avere una parte decimale. Questi valori contengono separatori decimali (**.**) e possono contenere gli esponenti.

I valori letterali a virgola mobile hanno una "mantissa" che specifica il valore del numero, un "esponente" che specifica la grandezza del numero e un suffisso facoltativo che specifica il tipo del valore letterale. La mantissa è specificata come una sequenza di cifre seguita da un punto, seguito da una sequenza facoltativa di cifre che rappresentano la parte decimale del numero. Ad esempio:

```cpp
18.46
38.
```

L'esponente, se presente, specifica la grandezza del numero come potenza di 10, come illustrato nell'esempio seguente:

```cpp
18.46e0      // 18.46
18.46e1           // 184.6
```

L'esponente può essere specificato usando `e` o `E`, che hanno lo stesso significato, seguito da un segno facoltativo (+ o -) e una sequenza di cifre.  Se un esponente è presente, il separatore decimale finale è inutile in numeri interi come `18E0`.

Valori letterali a virgola mobile come tipo predefinito **doppie**. Con i suffissi `f` oppure `l` (o `F` o `L` , il suffisso non viene fatta distinzione tra maiuscole e minuscole), il valore letterale può essere specificato come **float** o **long double**, rispettivamente.

Sebbene **long double** e **double** hanno la stessa rappresentazione, non sono dello stesso tipo. Ad esempio, è possibile eseguire l'overload di funzioni quali

```cpp
void func( double );
```

e

```cpp
void func( long double );
```

## <a name="boolean-literals"></a>Valori letterali booleani

Sono i valori letterali booleani **true** e **false**.

## <a name="pointer-literal-c11"></a>Valore letterale puntatore (C + + 11)

C++ introduce la [nullptr](../cpp/nullptr.md) letterale per specificare un puntatore a inizializzazione zero. Nel codice portabile **nullptr** invece dello zero di tipo integrale o delle macro quali NULL.

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

Nell'esempio precedente potrebbe essere meglio usare una costante denominata che fornisce un significato chiaro, ad esempio "MAXIMUM_ERROR_THRESHOLD". Se il valore restituito "Success" viene visualizzato dagli utenti finali, potrebbe essere consigliabile usare una costante di stringa denominata, che può essere archiviata in un'unica posizione in un file, da cui può essere localizzata in altre lingue. L'uso delle costanti denominate aiuta gli altri utenti e lo sviluppatore a comprendere l'intento del codice.

## <a name="see-also"></a>Vedere anche

[Convenzioni lessicali](../cpp/lexical-conventions.md)<br/>
[Valori letterali stringa C++](../cpp/string-and-character-literals-cpp.md)<br/>
[Valori letterali definiti dall'utente C++](../cpp/user-defined-literals-cpp.md)