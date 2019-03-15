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
ms.openlocfilehash: 6f30877800d4597054601f7459df88c78193fd3c
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57820650"
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

[Opzioni di EDITBIN](editbin-options.md)
