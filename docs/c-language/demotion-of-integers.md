---
title: Abbassamento di livello degli interi
ms.date: 11/04/2016
helpviewer_keywords:
- demoting integers
ms.assetid: 51fb3654-60b0-4de7-80eb-bd910086c18a
ms.openlocfilehash: aee0a5041cd37b1fbad785b760b8cefde74eb195
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218884"
---
# <a name="demotion-of-integers"></a>Abbassamento di livello degli interi

**ANSI 3.2.1.2** Il risultato della conversione di un intero in un intero con segno più breve o il risultato della conversione di un intero senza segno in un intero con segno di uguale lunghezza, se il valore non può essere rappresentato

Quando **`long`** viene eseguito il cast di un numero intero a un oggetto **`short`** o **`short`** viene eseguito il cast di un oggetto a un oggetto **`char`** , i byte meno significativi vengono conservati.

Ad esempio, questa riga

```
short x = (short)0x12345678L;
```

assegna il valore 0x5678 a `x` e questa riga

```
char y = (char)0x1234;
```

assegna il valore 0x34 a `y`.

Quando **`signed`** le variabili vengono convertite in **`unsigned`** e viceversa, gli schemi di bit rimangono invariati. Ad esempio, il cast di-2 (0xFE) a un **`unsigned`** valore restituisce 254 (anche 0xFE).

## <a name="see-also"></a>Vedere anche

[Interi](../c-language/integers.md)
