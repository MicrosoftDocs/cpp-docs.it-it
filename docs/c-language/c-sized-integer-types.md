---
title: Tipi Integer con dimensione C
ms.date: 07/22/2020
helpviewer_keywords:
- sized integer types
ms.assetid: 0d6199b4-d0ab-4e8c-a769-785f5afb92eb
ms.openlocfilehash: 7f785efb2fc93d2ec57783dd20a43642c87e4a4c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226503"
---
# <a name="c-sized-integer-types"></a>Tipi Integer con dimensione C

**Specifico di Microsoft**

Le funzionalità di Microsoft C supportano i tipi Integer ridimensionati. È possibile dichiarare variabili Integer a 8, 16, 32 o 64 bit usando l' `__intN` identificatore di tipo, dove *`N`* è la dimensione, in bit, della variabile integer. Il valore di *n* può essere 8, 16, 32 o 64. Nell'esempio seguente viene dichiarata una variabile di ognuno dei quattro tipi Integer ridimensionati:

```C
__int8  nSmall;     // Declares 8-bit integer
__int16 nMedium;    // Declares 16-bit integer
__int32 nLarge;     // Declares 32-bit integer
__int64 nHuge;      // Declares 64-bit integer
```

I primi tre tipi di Integer ridimensionati sono sinonimi per i tipi ANSI con le stesse dimensioni. Sono utili per la scrittura di codice portabile che si comporta in modo identico in più piattaforme. Il tipo **`__int8`** di dati è sinonimo del tipo **`char`** , **`__int16`** è sinonimo del tipo **`short`** , **`__int32`** è sinonimo del tipo **`int`** ed **`__int64`** è sinonimo del tipo **`long long`** .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)
