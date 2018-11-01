---
title: Avviso del compilatore (livello 1) C4087
ms.date: 11/04/2016
f1_keywords:
- C4087
helpviewer_keywords:
- C4087
ms.assetid: 546e4d57-5c8e-422c-8ef1-92657336dad5
ms.openlocfilehash: 84d24d95053b962c1776dc18576e4ed236b63469
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50643716"
---
# <a name="compiler-warning-level-1-c4087"></a>Avviso del compilatore (livello 1) C4087

'function': dichiarato con elenco di parametri 'void'

La dichiarazione di funzione contiene parametri formali, mentre la chiamata di funzione contiene parametri effettivi. I parametri aggiuntivi vengono passati in base alla convenzione di chiamata della funzione.

Questo avviso è relativo al compilatore C.

## <a name="example"></a>Esempio

```
// C4087.c
// compile with: /W1
int f1( void ) {
}

int main() {
   f1( 10 );   // C4087
}
```