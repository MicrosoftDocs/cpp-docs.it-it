---
title: Avviso del compilatore (livello 2) C4150
ms.date: 11/04/2016
f1_keywords:
- C4150
helpviewer_keywords:
- C4150
ms.assetid: ff1760ec-0d9f-4d45-b797-94261624becf
ms.openlocfilehash: c4d84165c7fcda4ceab94b1380a818236f6f5ea5
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80162114"
---
# <a name="compiler-warning-level-2-c4150"></a>Avviso del compilatore (livello 2) C4150

eliminazione del puntatore al tipo incompleto ' type '; Nessun distruttore chiamato

L'operatore **Delete** viene chiamato per eliminare un tipo dichiarato ma non definito, pertanto il compilatore non riesce a trovare un distruttore.

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
