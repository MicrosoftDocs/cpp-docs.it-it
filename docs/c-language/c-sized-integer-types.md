---
description: 'Altre informazioni su: tipi integer con dimensione C'
title: Tipi Integer con dimensione C
ms.date: 07/22/2020
helpviewer_keywords:
- sized integer types
ms.assetid: 0d6199b4-d0ab-4e8c-a769-785f5afb92eb
ms.openlocfilehash: ad50806f52638884da69e109da252379dea0d571
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300125"
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

## <a name="see-also"></a>Vedi anche

[Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)
