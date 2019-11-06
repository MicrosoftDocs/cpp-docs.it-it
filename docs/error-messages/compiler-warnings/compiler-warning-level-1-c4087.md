---
title: Avviso del compilatore (livello 1) C4087
ms.date: 11/04/2016
f1_keywords:
- C4087
helpviewer_keywords:
- C4087
ms.assetid: 546e4d57-5c8e-422c-8ef1-92657336dad5
ms.openlocfilehash: fe2b4fadfb87726e81178a3530299dbb8620aec9
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73626834"
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