---
title: Avviso del compilatore (livello 2) C4307
ms.date: 11/04/2016
f1_keywords:
- C4307
helpviewer_keywords:
- C4307
ms.assetid: 7cca11e9-be61-49e4-8b15-88b84f0cbf07
ms.openlocfilehash: b5566bca22c328328a49e82268b96e8ec0fedc95
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052060"
---
# <a name="compiler-warning-level-2-c4307"></a>Avviso del compilatore (livello 2) C4307

' operator ': overflow di costante integrale

L'operatore viene usato in un'espressione che restituisce una costante integer che causa un overflow dello spazio allocato. Potrebbe essere necessario usare un tipo più grande per la costante. Un valore **int con segno** include un valore inferiore a un `unsigned int` perché l'int con **segno** utilizza un bit per rappresentare il segno.

L'esempio seguente genera l'C4307:

```cpp
// C4307.cpp
// compile with: /W2
int i = 2000000000 + 2000000000;   // C4307
int j = (unsigned)2000000000 + 2000000000;   // OK

int main()
{
}
```