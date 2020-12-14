---
description: 'Altre informazioni su: abbassamento di numero di numeri interi'
title: Abbassamento di livello degli interi
ms.date: 11/04/2016
helpviewer_keywords:
- demoting integers
ms.assetid: 51fb3654-60b0-4de7-80eb-bd910086c18a
ms.openlocfilehash: d80adff34223d8aa785fa6ffa079a54af198a309
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186818"
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

## <a name="see-also"></a>Vedi anche

[Integer](../c-language/integers.md)
