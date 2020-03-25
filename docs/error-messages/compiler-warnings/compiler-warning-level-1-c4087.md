---
title: Avviso del compilatore (livello 1) C4087
ms.date: 11/04/2016
f1_keywords:
- C4087
helpviewer_keywords:
- C4087
ms.assetid: 546e4d57-5c8e-422c-8ef1-92657336dad5
ms.openlocfilehash: d939edfdf00b81837a167ab326ab5a7791e3e374
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80164014"
---
# <a name="compiler-warning-level-1-c4087"></a>Avviso del compilatore (livello 1) C4087

'function': dichiarato con elenco di parametri 'void'

La dichiarazione di funzione contiene parametri formali, mentre la chiamata di funzione contiene parametri effettivi. I parametri aggiuntivi vengono passati in base alla convenzione di chiamata della funzione.

Questo avviso è relativo al compilatore C.

## <a name="example"></a>Esempio

```c
// C4087.c
// compile with: /W1
int f1( void ) {
}

int main() {
   f1( 10 );   // C4087
}
```
