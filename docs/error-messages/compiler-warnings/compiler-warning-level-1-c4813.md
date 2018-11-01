---
title: Avviso del compilatore (livello 1) C4813
ms.date: 11/04/2016
f1_keywords:
- C4813
helpviewer_keywords:
- C4813
ms.assetid: c30bf877-ab04-4fe4-897e-8162092426f0
ms.openlocfilehash: c6aaf3cc8e17cd1be1d9c964c03bb18b3bb0ff77
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50605192"
---
# <a name="compiler-warning-level-1-c4813"></a>Avviso del compilatore (livello 1) C4813

'function': le funzioni Friend delle classi locali devono essere dichiarate in precedenza

Una funzione friend in una classe interna non è stata dichiarata nella classe esterna.

L'esempio seguente genera l'errore C4813:

```
// C4813.cpp
// compile with: /W1 /LD
void MyClass()
{
   // void func();
   class InnerClass
   {
      friend void func();   // C4813 uncomment declaration above
   };
}
```