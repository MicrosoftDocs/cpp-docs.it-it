---
title: Avviso del compilatore (livello 1) C4178
ms.date: 11/04/2016
f1_keywords:
- C4178
helpviewer_keywords:
- C4178
ms.assetid: 2c2c8f97-a5c4-47cd-8dd2-beea172613f3
ms.openlocfilehash: 76e2b0e6ee42e8f32eb462336721d860cff006a5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50540088"
---
# <a name="compiler-warning-level-1-c4178"></a>Avviso del compilatore (livello 1) C4178

la costante di case 'constant' è troppo grande per il tipo dell'espressione switch

Una costante di case in un'espressione `switch` non corrisponde al tipo a cui è assegnata.

## <a name="example"></a>Esempio

```
// C4178.cpp
// compile with: /W1
int main()
{
    int i;  // maximum size of unsigned long int is 4294967295
    switch( i )
    {
        case 4294967295:   // OK
            break;
        case 4294967296:   // C4178
            break;
    }
}
```