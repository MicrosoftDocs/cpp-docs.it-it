---
title: Avviso del compilatore (livello 4) C4127
ms.date: 09/13/2018
f1_keywords:
- C4127
helpviewer_keywords:
- C4127
ms.assetid: f59ded9e-5227-45bd-ac43-2aa861581363
ms.openlocfilehash: 7f1e23d15d8daa126987278611cb5a85a5a36fc9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401312"
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