---
title: Allineamento (dichiarazioni C++)
description: Come viene specificato l'allineamento dei dati nel Framework moderno C++.
ms.date: 05/30/2019
ms.assetid: a986d510-ccb8-41f8-b905-433df9183485
ms.openlocfilehash: b6e03ac2b89624a0eb6602183d4ff4bf8b518f8d
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "66450765"
---
# <a name="alignment-c-declarations"></a>Allineamento (dichiarazioni C++)

Una delle funzionalità di basso livello di C++ è costituita dalla possibilità di specificare l'allineamento preciso degli oggetti in memoria per sfruttare al massimo una specifica architettura hardware. Per impostazione predefinita, il compilatore consente di allineare i membri di classi e struct al relativo valore di dimensioni: `bool` e `char` nei limiti di 1 byte `short` nei limiti di 2 byte, `int`, `long`, e `float` su limiti di 4 byte e `long long`, `double`, e `long double` nei limiti di 8 byte. Nella maggior parte degli scenari, è non necessario mai essere interessati con allineamento in quanto l'allineamento predefinito è già ottimale. In alcuni casi, tuttavia, è possibile ottenere miglioramenti significativi delle prestazioni o risparmi, della memoria specificando un allineamento personalizzato per le strutture di dati. Prima di Visual Studio 2015 è possibile usare le parole chiave specifiche di Microsoft `__alignof` e `declspec(alignas)` per specificare un allineamento maggiore rispetto a quello predefinito. A partire da Visual Studio 2015 è necessario utilizzare le C + + 11 parole chiave standard [alignof e alignas](../cpp/alignof-and-alignas-cpp.md) per la portabilità del codice massimo. Le nuove parole chiave si comportano allo stesso modo dietro le quinte come le estensioni specifiche di Microsoft. La documentazione per le estensioni valide anche per le nuove parole chiave. Per altre informazioni, vedere [operatore alignof](../cpp/alignof-operator.md) e [allineare](../cpp/align-cpp.md). Il C++ standard non specificare il comportamento di compressione per l'allineamento in base a limiti inferiori rispetto a quello predefinito del compilatore per la piattaforma di destinazione, quindi è comunque necessario usare Microsoft #pragma [pack](../preprocessor/pack.md) in questo caso.

Usare la [classe aligned_storage](../standard-library/aligned-storage-class.md) per l'allocazione di memoria delle strutture di dati con allineamenti personalizzati. Il [classe aligned_union](../standard-library/aligned-union-class.md) è per la specifica dell'allineamento con costruttori non semplici o distruttori.

## <a name="about-alignment"></a>Informazioni sull'allineamento

Per allineamento si intende una proprietà di un indirizzo di memoria, espresso come modulo di indirizzo numerico di una potenza di 2. Ad esempio, l'indirizzo 0x0001103F modulo 4 è 3. Si dice che tale indirizzo allineato a 4N+3, dove 4 indica la potenza di 2 scelta. L'allineamento di un indirizzo dipende la potenza di 2 scelta. Il modulo 8 dello stesso indirizzo è 7. Si dice che un indirizzo è allineato a X se il relativo allineamento è Xn+0.

Le CPU eseguono le istruzioni che operano sui dati archiviati in memoria. I dati sono identificati dai relativi indirizzi in memoria. Inoltre, un singolo riferimento ha una dimensione. Definiamo un dato *allineati naturalmente* se l'indirizzo è allineato alle dimensioni. Viene chiamato *disallineati* in caso contrario. Ad esempio, un riferimento a virgola mobile a 8 byte è allineato naturalmente se l'indirizzo usato per facilitarne l'identificazione con un allineamento di 8 byte.

## <a name="compiler-handling-of-data-alignment"></a>Gestione di compilatore di allineamento dei dati

I compilatori provare a effettuare allocazioni di dati in modo da evitare disallineamenti.

Per i tipi di dati semplici il compilatore assegna indirizzi che sono multipli delle dimensioni in byte del tipo di dati. Ad esempio, il compilatore assegna indirizzi a variabili di tipo `long` che sono multipli di 4, l'impostazione di 2 bit dell'indirizzo nella parte inferiore a zero.

Il compilatore aggiunge anche strutture in modo che si allinea naturalmente ogni elemento della struttura. Si consideri la struttura `struct x_` nell'esempio di codice seguente:

```cpp
struct x_
{
   char a;     // 1 byte
   int b;      // 4 bytes
   short c;    // 2 bytes
   char d;     // 1 byte
} MyStruct;
```

Il compilatore aggiunge elementi di spaziatura interna in questa struttura in modo applicare naturalmente l'allineamento.

Esempio di codice seguente viene illustrato come il compilatore compilatura inserisce la struttura in memoria:

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
}
```

1. Entrambe le dichiarazioni restituiscono `sizeof(struct x_)` 12 byte.

1. La seconda dichiarazione include due elementi di spaziatura interna:

1. `char _pad0[3]` Per allineare il `int b` membro su un limite di 4 byte

1. `char _pad1[1]` Per allineare gli elementi della matrice della struttura `struct _x bar[3];`

1. La spaziatura interna consente di allineare gli elementi di `bar[3]` in modo da consenta l'accesso naturale.

Nell'esempio di codice riportato di seguito viene illustrato il `bar[3]` layout della matrice:

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

## <a name="see-also"></a>Vedere anche

[Allineamento di strutture di dati](https://en.wikipedia.org/wiki/Data_structure_alignment)
