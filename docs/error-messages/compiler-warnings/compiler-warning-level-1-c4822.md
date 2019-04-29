---
title: Avviso del compilatore (livello 1) C4822
ms.date: 11/04/2016
f1_keywords:
- C4822
helpviewer_keywords:
- C4822
ms.assetid: 0f231a30-2eb0-4722-aaa0-e2d19d3e7eea
ms.openlocfilehash: 02e7ba11f7bda134bcc98ce2c494a3ef367c0d6f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62378505"
---
# <a name="compiler-warning-level-1-c4822"></a>Avviso del compilatore (livello 1) C4822

'member': una funzione membro della classe locale non ha corpo

Una funzione membro della classe locale è stata dichiarata ma non definita nella classe. Per usare una funzione membro della classe locale, è necessario definirla nella classe. Non è possibile dichiararla nella classe e definirla all'esterno della classe.

Qualsiasi definizione esterna alla classe per una funzione membro della classe locale costituisce un errore.

L'esempio seguente genera l'errore C4822:

```
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