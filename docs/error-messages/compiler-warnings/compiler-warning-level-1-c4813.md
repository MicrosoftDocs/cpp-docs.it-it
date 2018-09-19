---
title: Compilatore avviso (livello 1) C4813 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4813
dev_langs:
- C++
helpviewer_keywords:
- C4813
ms.assetid: c30bf877-ab04-4fe4-897e-8162092426f0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a1bfdc3e7aa4a2f0cf32770c1511832900f2339b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46050125"
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