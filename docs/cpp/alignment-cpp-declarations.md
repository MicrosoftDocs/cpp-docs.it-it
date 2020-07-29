---
title: Allineamento
description: Modalità di specifica dell'allineamento dei dati nel linguaggio C++ moderno.
ms.date: 12/11/2019
ms.assetid: a986d510-ccb8-41f8-b905-433df9183485
ms.openlocfilehash: 7f6bef061fee41389bad644d9ac5244f5644da76
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227647"
---
# <a name="alignment"></a>Allineamento

Una delle funzionalità di basso livello di C++ è costituita dalla possibilità di specificare l'allineamento preciso degli oggetti in memoria per sfruttare al massimo una specifica architettura hardware. Per impostazione predefinita, il compilatore allinea i membri della classe e dello struct sul relativo valore di dimensione: **`bool`** e **`char`** sui limiti di 1 byte, **`short`** sui limiti di 2 byte,, **`int`** **`long`** e **`float`** sui limiti di 4 byte, nonché **`long long`** **`double`** **`long double`** sui limiti di 8 byte, e.

Nella maggior parte degli scenari, non è mai necessario preoccuparsi dell'allineamento perché l'allineamento predefinito è già ottimale. In alcuni casi, tuttavia, è possibile ottenere miglioramenti significativi delle prestazioni o risparmi di memoria, specificando un allineamento personalizzato per le strutture di dati. Prima di Visual Studio 2015 è possibile usare le parole chiave specifiche di Microsoft **`__alignof`** e **`__declspec(align)`** specificare un allineamento maggiore rispetto a quello predefinito. A partire da Visual Studio 2015 è necessario usare le parole chiave standard di C++ 11 **`alignof`** e la **`alignas`** portabilità del codice massima. Le nuove parole chiave si comportano nello stesso modo in cui si trovino le estensioni specifiche di Microsoft. La documentazione relativa a tali estensioni si applica anche alle nuove parole chiave. Per ulteriori informazioni, vedere [ `alignof` operator](../cpp/alignof-operator.md) e [align](../cpp/align-cpp.md). Lo standard C++ non specifica il comportamento di compressione per l'allineamento sui limiti inferiori rispetto al valore predefinito del compilatore per la piattaforma di destinazione, quindi è necessario usare Microsoft [`#pragma pack`](../preprocessor/pack.md) in questo caso.

Usare la [classe aligned_storage](../standard-library/aligned-storage-class.md) per l'allocazione di memoria di strutture di dati con allineamenti personalizzati. La [classe aligned_union](../standard-library/aligned-union-class.md) è per specificare l'allineamento per le unioni con costruttori o distruttori non semplici.

## <a name="alignment-and-memory-addresses"></a>Allineamento e indirizzi di memoria

Per allineamento si intende una proprietà di un indirizzo di memoria, espresso come modulo di indirizzo numerico di una potenza di 2. Ad esempio, l'indirizzo 0x0001103F modulo 4 è 3. Tale indirizzo viene detto allineato a 4N + 3, dove 4 indica la potenza scelta di 2. L'allineamento di un indirizzo dipende dalla potenza scelta di 2. Il modulo 8 dello stesso indirizzo è 7. Si dice che un indirizzo è allineato a X se il relativo allineamento è Xn+0.

Le CPU eseguono istruzioni che operano sui dati archiviati in memoria. I dati vengono identificati dai rispettivi indirizzi in memoria. Un singolo Datum ha anche una dimensione. Un datum viene chiamato *naturalmente allineato* se l'indirizzo è allineato alle dimensioni. In caso contrario, viene chiamato non *allineato* . Un riferimento a virgola mobile a 8 byte, ad esempio, è naturalmente allineato se l'indirizzo utilizzato per identificarlo dispone di un allineamento a 8 byte.

## <a name="compiler-handling-of-data-alignment"></a>Gestione del compilatore dell'allineamento dei dati

I compilatori tentano di eseguire allocazioni di dati in modo da impedire l'allineamento dei dati.

Per i tipi di dati semplici il compilatore assegna indirizzi che sono multipli delle dimensioni in byte del tipo di dati. Ad esempio, il compilatore assegna indirizzi a variabili di tipo **`long`** che sono multipli di 4, impostando i 2 bit inferiori dell'indirizzo su zero.

Il compilatore adatta anche le strutture in modo da allineare in modo naturale ogni elemento della struttura. Si consideri la struttura `struct x_` nell'esempio di codice seguente:

```cpp
struct x_
{
   char a;     // 1 byte
   int b;      // 4 bytes
   short c;    // 2 bytes
   char d;     // 1 byte
} bar[3];
```

Il compilatore aggiunge elementi di spaziatura interna in questa struttura in modo applicare naturalmente l'allineamento.

Nell'esempio di codice seguente viene illustrato il modo in cui il compilatore inserisce la struttura riempita in memoria:

```cpp
// Shows the actual memory layout
struct x_
{
   char a;            // 1 byte
   char _pad0[3];     // padding to put 'b' on 4-byte boundary
   int b;            // 4 bytes
   short c;          // 2 bytes
   char d;           // 1 byte
   char _pad1[1];    // padding to make sizeof(x_) multiple of 4
} bar[3];
```

Entrambe le dichiarazioni restituiscono `sizeof(struct x_)` 12 byte.

La seconda dichiarazione include due elementi di spaziatura interna:

1. `char _pad0[3]`per allineare il `int b` membro a un limite di 4 byte.

1. `char _pad1[1]`per allineare gli elementi della matrice della struttura a `struct _x bar[3];` un limite di quattro byte.

La spaziatura interna allinea gli elementi di `bar[3]` in modo da consentire l'accesso naturale.

Nell'esempio di codice seguente viene illustrato il `bar[3]` layout della matrice:

```Output
adr offset   element
------   -------
0x0000   char a;         // bar[0]
0x0001   char pad0[3];
0x0004   int b;
0x0008   short c;
0x000a   char d;
0x000b   char _pad1[1];

0x000c   char a;         // bar[1]
0x000d   char _pad0[3];
0x0010   int b;
0x0014   short c;
0x0016   char d;
0x0017   char _pad1[1];

0x0018   char a;         // bar[2]
0x0019   char _pad0[3];
0x001c   int b;
0x0020   short c;
0x0022   char d;
0x0023   char _pad1[1];
```

## <a name="alignof-and-alignas"></a>`alignof` e `alignas`

L' **`alignas`** identificatore di tipo è un metodo standard portabile in C++ per specificare l'allineamento personalizzato di variabili e tipi definiti dall'utente. L' **`alignof`** operatore è analogo a un metodo standard e portabile per ottenere l'allineamento di una variabile o di un tipo specificato.

## <a name="example"></a>Esempio

È possibile utilizzare **`alignas`** in una classe, uno struct o un'Unione o in singoli membri. Quando **`alignas`** vengono rilevati più identificatori, il compilatore sceglierà quello più rigido, ovvero quello con il valore più grande.

```cpp
// alignas_alignof.cpp
// compile with: cl /EHsc alignas_alignof.cpp
#include <iostream>

struct alignas(16) Bar
{
    int i;       // 4 bytes
    int n;      // 4 bytes
    alignas(4) char arr[3];
    short s;          // 2 bytes
};

int main()
{
    std::cout << alignof(Bar) << std::endl; // output: 16
}
```

## <a name="see-also"></a>Vedere anche

[Allineamento della struttura dei dati](https://en.wikipedia.org/wiki/Data_structure_alignment)
