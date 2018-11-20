---
title: Esempi di allineamento di strutture
ms.date: 11/19/2018
helpviewer_keywords:
- structure alignment
- examples [C++], structure alignment
ms.assetid: 03d137bf-5cc4-472e-9583-6498f2534199
ms.openlocfilehash: 7c4b3ae29674e9c4fc27e8e175867339001b9a0d
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52175340"
---
# <a name="examples-of-structure-alignment"></a>Esempi di allineamento di strutture

I quattro esempi seguenti dichiarano che una struttura allineata o unione e presentati illustrano il layout di tale struttura o unione in memoria. Ogni colonna in una figura rappresenta un byte di memoria e il numero della colonna indica lo spostamento di tale byte. Il nome nella seconda riga di ogni figura corrisponde al nome di una variabile nella dichiarazione. Colonne ombreggiate indicano il riempimento necessario per ottenere l'allineamento specificato.

## <a name="example-1"></a>Esempio 1

```C
// Total size = 2 bytes, alignment = 2 bytes (word).

_declspec(align(2)) struct {
    short a;      // +0; size = 2 bytes
}
```

![Layout della struttura esempio 1 conversione AMD](../build/media/vcamd_conv_ex_1_block.png "layout struttura esempio 1 di conversione AMD")

## <a name="example-2"></a>Esempio 2

```C
// Total size = 24 bytes, alignment = 8 bytes (quadword).

_declspec(align(8)) struct {
    int a;       // +0; size = 4 bytes
    double b;    // +8; size = 8 bytes
    short c;     // +16; size = 2 bytes
}
```

![Layout della struttura esempio 2 conversione AMD](../build/media/vcamd_conv_ex_2_block.png "layout struttura esempio 2 di conversione AMD")

## <a name="example-3"></a>Esempio 3

```C
// Total size = 22 bytes, alignment = 4 bytes (doubleword).

_declspec(align(4)) struct {
    char a;       // +0; size = 1 byte
    short b;      // +2; size = 2 bytes
    char c;       // +4; size = 1 byte
    int d;        // +8; size = 4 bytes
}
```

![Layout della struttura esempio 2 conversione AMD](../build/media/vcamd_conv_ex_3_block.png "layout struttura esempio 2 di conversione AMD")

## <a name="example-4"></a>Esempio 4

```C
// Total size = 8 bytes, alignment = 8 bytes (quadword).

_declspec(align(8)) union {
    char *p;      // +0; size = 8 bytes
    short s;      // +0; size = 2 bytes
    long l;       // +0; size = 4 bytes
}
```

![Layouit union esempio 4 di conversione AMD](../build/media/vcamd_conv_ex_4_block.png "layouit union esempio 4 di conversione AMD")

## <a name="see-also"></a>Vedere anche

[Tipi e archiviazione](../build/types-and-storage.md)<br/>
