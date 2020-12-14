---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4822'
title: Avviso del compilatore (livello 1) C4822
ms.date: 11/04/2016
f1_keywords:
- C4822
helpviewer_keywords:
- C4822
ms.assetid: 0f231a30-2eb0-4722-aaa0-e2d19d3e7eea
ms.openlocfilehash: 8e5fe62d70243da0121d58e553c500e5a079022a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97198050"
---
# <a name="compiler-warning-level-1-c4822"></a>Avviso del compilatore (livello 1) C4822

'member': una funzione membro della classe locale non ha corpo

Una funzione membro della classe locale è stata dichiarata ma non definita nella classe. Per usare una funzione membro della classe locale, è necessario definirla nella classe. Non è possibile dichiararla nella classe e definirla all'esterno della classe.

Qualsiasi definizione esterna alla classe per una funzione membro della classe locale costituisce un errore.

L'esempio seguente genera l'errore C4822:

```cpp
// C4822.cpp
// compile with: /W1
int main() {
   struct C {
      void func1(int);   // C4822
      // try the following line instead
      // void func1(int){}
  };
}
```
