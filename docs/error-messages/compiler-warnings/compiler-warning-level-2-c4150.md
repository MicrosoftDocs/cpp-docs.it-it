---
title: Avviso del compilatore (livello 2) C4150
ms.date: 11/04/2016
f1_keywords:
- C4150
helpviewer_keywords:
- C4150
ms.assetid: ff1760ec-0d9f-4d45-b797-94261624becf
ms.openlocfilehash: a3993d2b993205c98de968ca893f24f703b3b635
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218143"
---
# <a name="compiler-warning-level-2-c4150"></a>Avviso del compilatore (livello 2) C4150

eliminazione del puntatore al tipo incompleto ' type '; Nessun distruttore chiamato

L' **`delete`** operatore viene chiamato per eliminare un tipo dichiarato ma non definito, pertanto il compilatore non riesce a trovare un distruttore.

L'esempio seguente genera l'C4150:

```cpp
// C4150.cpp
// compile with: /W2
class  IncClass;

void NoDestruct( IncClass* pIncClass )
{
   delete pIncClass;
} // C4150, define class to resolve

int main()
{
}
```
