---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4813'
title: Avviso del compilatore (livello 1) C4813
ms.date: 11/04/2016
f1_keywords:
- C4813
helpviewer_keywords:
- C4813
ms.assetid: c30bf877-ab04-4fe4-897e-8162092426f0
ms.openlocfilehash: 01c240df7bf9abbee9a9971ec403ff1f3accb1ef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97255210"
---
# <a name="compiler-warning-level-1-c4813"></a>Avviso del compilatore (livello 1) C4813

'function': le funzioni Friend delle classi locali devono essere dichiarate in precedenza

Una funzione friend in una classe interna non è stata dichiarata nella classe esterna.

L'esempio seguente genera l'errore C4813:

```cpp
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
