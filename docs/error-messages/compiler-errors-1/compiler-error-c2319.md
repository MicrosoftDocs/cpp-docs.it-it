---
title: Errore del compilatore C2319 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2319
dev_langs:
- C++
helpviewer_keywords:
- C2319
ms.assetid: 25263e6e-f5ba-4d2c-8727-8c2d8ca2e5ce
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f485d26ac2a05cc91a1c918c63e319e893b8cf95
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46103152"
---
# <a name="compiler-error-c2319"></a>Errore del compilatore C2319

'try/catch' deve essere seguito da un'istruzione composta. '{' mancante

Non è stato trovato un blocco `try` o `catch` dopo l'istruzione `try` o `catch` . Il blocco deve essere racchiuso tra parentesi graffe.

L'esempio seguente genera l'errore C2319:

```
// C2319.cpp
// compile with: /EHsc
#include <eh.h>
class C {};
int main() {
   try {
      throw "ooops!";
   }
   catch( C ) ;    // C2319
   // try the following line instead
   // catch( C ) {}
}
```