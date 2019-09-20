---
title: Allineamento (dichiarazioni C++)
description: Modalità di specifica dell'allineamento dei dati C++in modern.
ms.date: 09/19/2019
ms.assetid: a986d510-ccb8-41f8-b905-433df9183485
ms.openlocfilehash: 67debc00343b8bee4184e020c9269011e2fcebc9
ms.sourcegitcommit: f907b15f50a6b945d0b87c03af0050946157d701
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/20/2019
ms.locfileid: "71158743"
---
# <a name="alignment-c-declarations"></a>Allineamento (dichiarazioni C++)

Una delle funzionalità di basso livello di C++ è costituita dalla possibilità di specificare l'allineamento preciso degli oggetti in memoria per sfruttare al massimo una specifica architettura hardware. Per impostazione predefinita, il compilatore allinea i membri della classe e dello struct al relativo `bool` valore `char` di dimensione: e sui limiti `short` di 1 byte, sui limiti di `long`2 byte `float` , `int`, e sui limiti di 4 byte e `long long`, esui`long double` limiti di 8 byte. `double` Nella maggior parte degli scenari, non è mai necessario preoccuparsi dell'allineamento perché l'allineamento predefinito è già ottimale. In alcuni casi, tuttavia, è possibile ottenere miglioramenti significativi delle prestazioni o risparmi di memoria, specificando un allineamento personalizzato per le strutture di dati. Prima di Visual Studio 2015 è possibile usare le parole chiave `__alignof` specifiche di Microsoft e `declspec(alignas)` specificare un allineamento maggiore rispetto a quello predefinito. A partire da Visual Studio 2015 è necessario usare le parole chiave standard C++ 11 [alignof e aligns](../cpp/alignof-and-alignas-cpp.md) per la massima portabilità del codice. Le nuove parole chiave si comportano nello stesso modo in cui si trovino le estensioni specifiche di Microsoft. La documentazione relativa a tali estensioni si applica anche alle nuove parole chiave. Per altre informazioni, vedere [operatore __alignof](../cpp/alignof-operator.md) e [align](../cpp/align-cpp.md). Lo C++ standard non specifica il comportamento di compressione per l'allineamento sui limiti inferiori rispetto al valore predefinito del compilatore per la piattaforma di destinazione, quindi è comunque necessario usare Microsoft #pragma [Pack](../preprocessor/pack.md) in questo caso.

Usare la [classe aligned_storage](../standard-library/aligned-storage-class.md) per l'allocazione di memoria di strutture di dati con allineamenti personalizzati. La [classe aligned_union](../standard-library/aligned-union-class.md) è per specificare l'allineamento per le unioni con costruttori o distruttori non semplici.

## <a name="about-alignment"></a>Informazioni sull'allineamento

Per allineamento si intende una proprietà di un indirizzo di memoria, espresso come modulo di indirizzo numerico di una potenza di 2. Ad esempio, l'indirizzo 0x0001103F modulo 4 è 3. Tale indirizzo viene detto allineato a 4N + 3, dove 4 indica la potenza scelta di 2. L'allineamento di un indirizzo dipende dalla potenza scelta di 2. Il modulo 8 dello stesso indirizzo è 7. Si dice che un indirizzo è allineato a X se il relativo allineamento è Xn+0.

Le CPU eseguono istruzioni che operano sui dati archiviati in memoria. I dati vengono identificati dai rispettivi indirizzi in memoria. Un singolo Datum ha anche una dimensione. Un datum viene chiamato *naturalmente allineato* se l'indirizzo è allineato alle dimensioni. In caso contrario, viene chiamato non *allineato* . Un riferimento a virgola mobile a 8 byte, ad esempio, è naturalmente allineato se l'indirizzo utilizzato per identificarlo dispone di un allineamento a 8 byte.

## <a name="compiler-handling-of-data-alignment"></a>Gestione del compilatore dell'allineamento dei dati

I compilatori tentano di eseguire allocazioni di dati in modo da impedire l'allineamento dei dati.

Per i tipi di dati semplici il compilatore assegna indirizzi che sono multipli delle dimensioni in byte del tipo di dati. Ad esempio, il compilatore assegna indirizzi a variabili di tipo `long` che sono multipli di 4, impostando i 2 bit inferiori dell'indirizzo su zero.

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

1. `char _pad1[1]`per allineare gli elementi della matrice della struttura `struct _x bar[3];` a un limite di quattro byte.

La spaziatura interna allinea gli elementi `bar[3]` di in modo da consentire l'accesso naturale.

Nell'esempio di codice seguente viene `bar[3]` illustrato il layout della matrice:

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

[Allineamento della struttura dei dati](https://en.wikipedia.org/wiki/Data_structure_alignment)
