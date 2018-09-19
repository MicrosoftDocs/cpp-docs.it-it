---
title: Istruzione break (C) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- break
dev_langs:
- C++
helpviewer_keywords:
- break keyword [C]
ms.assetid: 015627c7-0924-49b2-a4d1-c77edf5eae6a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 008f45375a85a2fc62604885b850f21116c85137
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46080376"
---
# <a name="break-statement-c"></a>Istruzione break (C)

L'istruzione `break` termina l'esecuzione dell'istruzione contenitore `do`, `for`, `switch` o `while` più vicina in cui è presente. Il controllo passa all'istruzione che segue l'istruzione terminata, se presente.

## <a name="syntax"></a>Sintassi

*jump-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**break ;**

L'istruzione `break` viene spesso utilizzata per terminare l'elaborazione di un particolare case all'interno di un'istruzione `switch`. La mancanza di un contenitore iterativo o di un'istruzione `switch` genera un errore.

Nelle istruzioni annidate l'istruzione `break` termina solo l'istruzione `do`, `for`, `switch` o `while` che la contiene più da vicino. È possibile utilizzare un'istruzione `return` o `goto` per trasferire il controllo in un punto diverso della struttura annidata.

In questo esempio viene illustrata l'istruzione `break`:

```
#include <stdio.h>
int main() {
   char c;
   for(;;) {
      printf_s( "\nPress any key, Q to quit: " );

      // Convert to character value
      scanf_s("%c", &c);
      if (c == 'Q')
          break;
   }
} // Loop exits only when 'Q' is pressed
```

## <a name="see-also"></a>Vedere anche

[Istruzione break](../cpp/break-statement-cpp.md)