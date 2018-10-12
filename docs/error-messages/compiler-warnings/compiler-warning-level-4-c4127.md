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
ms.openlocfilehash: 80f831d527e918fce0551f6a1336fd2fe994917d
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49161281"
---
# <a name="compiler-warning-level-4-c4127"></a>Avviso del compilatore (livello 4) C4127

> espressione condizionale costante

## <a name="remarks"></a>Note

L'espressione di controllo di un' **se** istruzione oppure **mentre** ciclo restituisce una costante. A causa di comune utilizzo idiomatico, a partire da Visual Studio 2015 update 3, costanti semplici, ad esempio 1 o **true** non attivano l'avviso, a meno che non sono il risultato di un'operazione in un'espressione.

Se l'espressione di controllo di un **mentre** ciclo è una costante perché il ciclo viene interrotto al centro, si consiglia di sostituire le **mentre** ciclo con un **per** ciclo. È possibile omettere l'inizializzazione, il test di terminazione e incremento del ciclo di un **per** ciclo, generando un ciclo infinito, analogamente `while(1)`, e si può uscire dal ciclo dal corpo del **per** istruzione.

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