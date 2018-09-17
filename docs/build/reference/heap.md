---
title: -HEAP | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /heap
dev_langs:
- C++
helpviewer_keywords:
- heap allocation, setting heap size
- HEAP editbin option
- -HEAP editbin option
- /HEAP editbin option
ms.assetid: 6ce759b5-75b7-44ff-a5fd-3a83a0ba9a48
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 22698760ba23dc60b64002f0f728bb7a036f6731
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45699816"
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