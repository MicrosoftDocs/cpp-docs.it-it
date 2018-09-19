---
title: Compilatore avviso (livello 4) C4127 | Microsoft Docs
ms.custom: ''
ms.date: 09/13/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4127
dev_langs:
- C++
helpviewer_keywords:
- C4127
ms.assetid: f59ded9e-5227-45bd-ac43-2aa861581363
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 561173e2b451a0b736d97042667a2fb14b3a7eb7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46094897"
---
# <a name="compiler-warning-level-4-c4127"></a>Avviso del compilatore (livello 4) C4127

> espressione condizionale costante

## <a name="remarks"></a>Note

L'espressione di controllo di un'istruzione `if` o di un ciclo `while` restituisce una costante. A causa di comune utilizzo idiomatico, a partire da Visual Studio 2015 update 3, costanti semplici, ad esempio 1 o `true` non attivano l'avviso, a meno che non sono il risultato di un'operazione in un'espressione.

Se l'espressione di controllo di un `while` ciclo è una costante perché il ciclo viene interrotto al centro, si consiglia di sostituire il `while` ciclo con un `for` ciclo. È possibile omettere l'inizializzazione, il test di terminazione e incremento del ciclo di un `for` ciclo, generando un ciclo infinito, analogamente `while(1)`, e si può uscire dal ciclo dal corpo del `for` istruzione.

## <a name="example"></a>Esempio

L'esempio seguente vengono illustrati due modi C4127 viene generato e viene illustrato come utilizzare un ciclo evitare l'avviso:

```cpp
// C4127.cpp
// compile with: /W4
#include <stdio.h>
int main() {
   if (true) {}           // OK in VS2015 update 3 and later
   if (1 == 1) {}         // C4127
   while (42) { break; }  // C4127

   // OK
   for ( ; ; ) {
      printf("test\n");
      break;
   }
}
```