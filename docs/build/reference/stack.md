---
title: /STACK
ms.date: 11/04/2016
f1_keywords:
- /stack
helpviewer_keywords:
- -STACK editbin option
- STACK editbin option
- stack, setting size
- /STACK editbin option
ms.assetid: a39bcff0-c945-4355-80cc-8e4f24a5f142
ms.openlocfilehash: 89591a9d0a7f19422275b6bce6f4c5a7a723e800
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50647707"
---
# <a name="stack"></a>/STACK

```
/STACK:reserve[,commit]
```

## <a name="remarks"></a>Note

Questa opzione imposta la dimensione dello stack in byte e richiede argomenti nella notazione decimale o del linguaggio C. Essa è applicabile solo a un file eseguibile.

Il *riservare* argomento consente di specificare l'allocazione totale dello stack nella memoria virtuale. Viene arrotondato al valore specificato di 4 byte più vicini.

L'opzione facoltativa `commit` argomento è soggetto a interpretazione dal sistema operativo. In Windows NT, Windows 95 e Windows 98, `commit` specifica la quantità di memoria fisica da allocare alla volta. Memoria virtuale vincolata fa sì che lo spazio da riservare nel file di paging. Un livello più elevato `commit` valore consente di risparmiare tempo quando l'applicazione richiede più spazio stack ma aumenta i requisiti di memoria ed eventualmente tempi di avvio.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](../../build/reference/editbin-options.md)