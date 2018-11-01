---
title: Avviso del compilatore (livello 3) C4521
ms.date: 11/04/2016
f1_keywords:
- C4521
helpviewer_keywords:
- C4521
ms.assetid: 057d770c-ebcf-44cd-b943-1b1bb1ceaa8c
ms.openlocfilehash: 887526810f7e65280adcde422ef871a67ccdde1f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50591811"
---
# <a name="compiler-warning-level-3-c4521"></a>Avviso del compilatore (livello 3) C4521

'class': specificato più di un costruttore di copia

La classe contiene più costruttori di copia di un singolo tipo. Questo avviso è puramente informativo; i costruttori possono essere chiamati nel programma.

Usare la [avviso](../../preprocessor/warning.md) pragma per non visualizzare questo avviso.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4521.

```
// C4521.cpp
// compile with: /EHsc /W3
#include <iostream>

using namespace std;
class A {
public:
   A() { cout << "A's default constructor" << endl; }
   A( A &o ) { cout << "A&" << endl; }
   A( const A &co ) { cout << "const A&" << endl; }   // C4521
};

int main() {
   A o1;         // Calls default constructor.
   A o2( o1 );   // Calls A( A& ).
   const A o3;   // Calls default constructor.
   A o4( o3 );   // Calls A( const A& ).
}
```