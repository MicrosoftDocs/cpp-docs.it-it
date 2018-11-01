---
title: Avviso del compilatore (livello 2) C4307
ms.date: 11/04/2016
f1_keywords:
- C4307
helpviewer_keywords:
- C4307
ms.assetid: 7cca11e9-be61-49e4-8b15-88b84f0cbf07
ms.openlocfilehash: e9ad30f60260893130beed921aab811c894868cc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50528154"
---
# <a name="compiler-warning-level-2-c4307"></a>Avviso del compilatore (livello 2) C4307

'operator': overflow di costante integrale

L'operatore viene usato in un'espressione che restituisce una costante integer overflow lo spazio allocato per tale. Si potrebbe essere necessario usare un tipo più grande per la costante. Oggetto **tipo signed int** contiene un valore minore rispetto a un `unsigned int` perché la **tipo signed int** viene utilizzato un bit per rappresentare il segno.

L'esempio seguente genera l'errore C4307:

```
// C4307.cpp
// compile with: /W2
int i = 2000000000 + 2000000000;   // C4307
int j = (unsigned)2000000000 + 2000000000;   // OK

int main()
{
}
```