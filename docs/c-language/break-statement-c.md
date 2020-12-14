---
description: 'Ulteriori informazioni su: istruzione break (C)'
title: Istruzione break (C)
ms.date: 11/04/2016
f1_keywords:
- break
helpviewer_keywords:
- break keyword [C]
ms.assetid: 015627c7-0924-49b2-a4d1-c77edf5eae6a
ms.openlocfilehash: 54f20de08661073a65ee0b8c50cf877e719aadcf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97211648"
---
# <a name="break-statement-c"></a>Istruzione break (C)

L' **`break`** istruzione termina l'esecuzione dell'istruzione di inclusione,, o più vicina **`do`** **`for`** **`switch`** **`while`** in cui viene visualizzata. Il controllo passa all'istruzione che segue l'istruzione terminata, se presente.

## <a name="syntax"></a>Sintassi

*jump-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**break ;**

L' **`break`** istruzione viene spesso utilizzata per terminare l'elaborazione di un particolare case all'interno di un' **`switch`** istruzione. La mancanza di un'istruzione o iterativa di inclusione **`switch`** genera un errore.

All'interno di istruzioni nidificate, l' **`break`** istruzione termina solo l' **`do`** **`for`** istruzione,, **`switch`** o **`while`** che la racchiude immediatamente. È possibile utilizzare un' **`return`** **`goto`** istruzione o per trasferire il controllo altrove dalla struttura annidata.

In questo esempio viene illustrata l' **`break`** istruzione:

```C
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

## <a name="see-also"></a>Vedi anche

[Break (istruzione)](../cpp/break-statement-cpp.md)
