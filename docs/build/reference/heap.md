---
title: /HEAP
ms.date: 11/04/2016
f1_keywords:
- /heap
helpviewer_keywords:
- heap allocation, setting heap size
- HEAP editbin option
- -HEAP editbin option
- /HEAP editbin option
ms.assetid: 6ce759b5-75b7-44ff-a5fd-3a83a0ba9a48
ms.openlocfilehash: 89f7b2449adc392c3ec254de9e9518be6fbecfa2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50534213"
---
# <a name="heap"></a>/HEAP

Consente di impostare la dimensione in byte dell'heap. Questa opzione si applica solo ai file eseguibili.

```

/HEAP:
reserve[,commit]
```

## <a name="remarks"></a>Note

L'argomento `reserve` specifica l'allocazione totale iniziale per l'heap nella memoria virtuale. Per impostazione predefinita, la dimensione dell'heap è 1 MB. [Riferimenti a EDITBIN](../../build/reference/editbin-reference.md) viene arrotondato per eccesso il valore specificato al multiplo più vicino di 4 byte.

L'opzione facoltativa `commit` argomento è soggetto a interpretazione dal sistema operativo. In un sistema operativo Windows, specifica la quantità iniziale di memoria fisica da allocare e la quantità di memoria aggiuntiva da allocare quando l'heap deve essere espanso. Memoria virtuale vincolata fa sì che lo spazio da riservare nel file di paging. Un valore `commit` superiore consente al sistema di allocare la memoria meno spesso quando l'applicazione richiede più spazio nell'heap ma incrementa i requisiti di memoria ed eventualmente la durata di avvio dell'applicazione. Il valore `commit` deve essere minore di o uguale al valore `reserve`.

Specificare i valori `reserve` e `commit` in notazione decimale o esadecimale del linguaggio C o ottale. Ad esempio, un valore di 1 MB può essere specificato come 1048576 in decimal o come 0x100000 esadecimale o come 04000000 in ottale.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](../../build/reference/editbin-options.md)