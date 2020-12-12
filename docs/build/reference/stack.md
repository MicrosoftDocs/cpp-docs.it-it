---
description: Altre informazioni su:/STACK
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
ms.openlocfilehash: 253aec1d760a85f1ebe5dbf7596353b46744cd57
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224452"
---
# <a name="stack"></a>/STACK

```
/STACK:reserve[,commit]
```

## <a name="remarks"></a>Commenti

Questa opzione imposta la dimensione dello stack in byte e accetta gli argomenti in notazione decimale o in linguaggio C. L'opzione/STACK si applica solo a un file eseguibile.

L'argomento *Reserve* specifica l'allocazione totale dello stack nella memoria virtuale. EDITBIN) Arrotonda il valore specificato ai 4 byte più vicini.

L' `commit` argomento facoltativo è soggetto all'interpretazione del sistema operativo. In Windows NT, Windows 95 e Windows 98, `commit` specifica la quantità di memoria fisica da allocare alla volta. La memoria virtuale di cui è stato eseguito il commit causa la riservatezza dello spazio nel file di paging. Un valore superiore consente di `commit` risparmiare tempo quando l'applicazione richiede più spazio dello stack, ma aumenta i requisiti di memoria e possibilmente il tempo di avvio.

## <a name="see-also"></a>Vedi anche

[Opzioni di EDITBIN)](editbin-options.md)
