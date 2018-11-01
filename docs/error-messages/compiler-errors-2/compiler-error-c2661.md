---
title: Errore del compilatore C2661
ms.date: 11/04/2016
f1_keywords:
- C2661
helpviewer_keywords:
- C2661
ms.assetid: 60021467-71cd-451b-9877-23840c69309f
ms.openlocfilehash: 14052fa3676396fe2ffc6ca86196025e7adab7d6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50650775"
---
# <a name="compiler-error-c2661"></a>Errore del compilatore C2661

'function': nessuna funzione in overload accetta parametri numerici

Possibili cause:

1. Parametri effettivi non corretti nella chiamata di funzione.

1. Dichiarazione di funzione mancante.

L'esempio seguente genera l'errore C2661:

```
// C2661.cpp
void func( int ){}
void func( int, int ){}
int main() {
   func( );   // C2661 func( void ) was not declared
   func( 1 );   // OK func( int ) was declared
}
```