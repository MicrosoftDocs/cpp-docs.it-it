---
title: /STACK
ms.date: 11/04/2016
f1_keywords:
- /stack_editbin
helpviewer_keywords:
- -STACK editbin option
- STACK editbin option
- stack, setting size
- /STACK editbin option
ms.assetid: a39bcff0-c945-4355-80cc-8e4f24a5f142
ms.openlocfilehash: 63fcddec8ff8afd81084bb5a2786f394db594b07
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79438894"
---
# <a name="stack"></a>/STACK

```
/STACK:reserve[,commit]
```

## <a name="remarks"></a>Osservazioni

Questa opzione imposta la dimensione dello stack in byte e accetta gli argomenti in notazione decimale o in linguaggio C. L'opzione/STACK si applica solo a un file eseguibile.

L'argomento *Reserve* specifica l'allocazione totale dello stack nella memoria virtuale. EDITBIN) Arrotonda il valore specificato ai 4 byte più vicini.

L'argomento `commit` facoltativo è soggetto all'interpretazione del sistema operativo. In Windows NT, Windows 95 e Windows 98, `commit` specifica la quantità di memoria fisica da allocare alla volta. La memoria virtuale di cui è stato eseguito il commit causa la riservatezza dello spazio nel file di paging. Un valore `commit` superiore consente di risparmiare tempo quando l'applicazione richiede più spazio dello stack, ma aumenta i requisiti di memoria e possibilmente il tempo di avvio.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](editbin-options.md)
