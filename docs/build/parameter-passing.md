---
title: Passaggio dei parametri | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: e838ee5f-c2fe-40b0-9a23-8023c949c820
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e8db6b61936b2122cd984e594c1ff3f162fa3dfe
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45724451"
---
# <a name="parameter-passing"></a>Passaggio dei parametri

I primi quattro argomenti integer vengono passati nei registri. Vengono passati i valori interi (in ordine da sinistra a destra) in RCX, RDX, R8 e R9. Argomenti 5 e versioni successive vengono passati nello stack. Tutti gli argomenti sono giustificati a destra nei registri. Questa operazione viene eseguita in modo che il chiamato può ignorare i bit superiori del registro, se necessario e possono accedere solo la parte del registro necessaria.

Gli argomenti a virgola mobile e precisione doppia sono passati in XMM0: XMM3 (fino a 4) con lo slot di integer (ovvero RCX, RDX, R8 e R9) che normalmente utilizzato per lo slot cardinale da ignorato (vedere l'esempio) e viceversa.

[__m128](../cpp/m128.md) tipi, matrici e stringhe non vengono mai passate per valore immediato, ma piuttosto viene passato un puntatore alla memoria allocata dal chiamante. Struct o unioni di dimensioni di 8, 16, 32 o 64 bit e __m64 vengono passate come se fossero numeri interi della stessa dimensione. Struct o unioni diverso da queste dimensioni vengono passate come un puntatore alla memoria allocata dal chiamante. Per questi tipi di aggregazione passato come un puntatore (tra cui \__m128), la memoria temporanea allocata dal chiamante sarà l'allineamento a 16 byte.

Funzioni intrinseche che non si allocano lo spazio dello stack e non chiamano altre funzioni è possono usare altri registri volatili per passare argomenti dei registri aggiuntivi perché esiste una stretta associazione tra il compilatore e l'implementazione di una funzione intrinseca. Si tratta di un'ulteriore opportunità per migliorare le prestazioni.

Il chiamato ha la responsabilità di dump i parametri del registro nel proprio spazio replicata se necessario.

La tabella seguente riepiloga come parametri vengono passati:

|Tipo di parametro|Modalità di passaggio|
|--------------------|----------------|
|Virgola mobile|I primi 4 parametri - XMM0 XMM3. Gli altri vengono passati nello stack.|
|Integer|I primi 4 parametri - ovvero RCX, RDX, R8 R9. Gli altri vengono passati nello stack.|
|__M64 e le aggregazioni (8, 16, 32 o 64 bit)|I primi 4 parametri - ovvero RCX, RDX, R8 R9. Gli altri vengono passati nello stack.|
|Funzioni di aggregazione (altro)|Dal puntatore. I primi 4 parametri passati come puntatori in ovvero RCX, RDX, R8 e R9|
|__m128|Dal puntatore. I primi 4 parametri passati come puntatori in ovvero RCX, RDX, R8 e R9|

## <a name="example-of-argument-passing-1---all-integers"></a>Esempio 1: tutti i valori interi di passaggio di argomenti

```
func1(int a, int b, int c, int d, int e);
// a in RCX, b in RDX, c in R8, d in R9, e pushed on stack
```

## <a name="example-of-argument-passing-2---all-floats"></a>Esempio 2: tutti i valori a virgola mobile di passaggio di argomenti

```
func2(float a, double b, float c, double d, float e);
// a in XMM0, b in XMM1, c in XMM2, d in XMM3, e pushed on stack
```

## <a name="example-of-argument-passing-3---mixed-ints-and-floats"></a>Esempio 3: mista valori int e float di passaggio di argomenti

```
func3(int a, double b, int c, float d);
// a in RCX, b in XMM1, c in R8, d in XMM3
```

## <a name="example-of-argument-passing-4--m64-m128-and-aggregates"></a>Esempio 4 di passaggio di argomenti-__m64, \__m128 e funzioni di aggregazione

```
func4(__m64 a, _m128 b, struct c, float d);
// a in RCX, ptr to b in RDX, ptr to c in R8, d in XMM3
```

## <a name="see-also"></a>Vedere anche

[Convenzione di chiamata](../build/calling-convention.md)