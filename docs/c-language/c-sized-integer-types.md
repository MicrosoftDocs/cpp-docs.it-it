---
title: Tipi Integer con dimensione C
ms.date: 11/04/2016
helpviewer_keywords:
- sized integer types
ms.assetid: 0d6199b4-d0ab-4e8c-a769-785f5afb92eb
ms.openlocfilehash: 3ced46b401296045909f5c812ca09abd3a5887f3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50432097"
---
# <a name="c-sized-integer-types"></a>Tipi Integer con dimensione C

**Sezione specifica Microsoft**

Le funzionalità di Microsoft C supportano i tipi Integer ridimensionati. È possibile dichiarare variabili Integer a 8, 16, 32 o 64 bit utilizzando l'identificatore di tipo __int*n*, dove *n* è la dimensione in bit della variabile Integer. Il valore di *n* può essere 8, 16, 32 o 64. Nell'esempio seguente viene dichiarata una variabile di ognuno dei quattro tipi Integer ridimensionati:

```
__int8 nSmall;      // Declares 8-bit integer
__int16 nMedium;    // Declares 16-bit integer
__int32 nLarge;     // Declares 32-bit integer
__int64 nHuge;      // Declares 64-bit integer
```

I primi tre tipi Integer ridimensionati sono sinonimi per i tipi ANSI con la stessa dimensione e sono utili per la scrittura di codice portabile che si comporta in modo identico in più piattaforme. Si noti che il tipo di dati __int8 è sinonimo del tipo char, \__int16 è sinonimo del tipo short e \__int32 è sinonimo del tipo int. Il tipo \__int64 non ha un elemento ANSI equivalente.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)