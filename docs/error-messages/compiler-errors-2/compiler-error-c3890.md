---
title: Errore del compilatore C3890
ms.date: 11/04/2016
f1_keywords:
- C3890
helpviewer_keywords:
- C3890
ms.assetid: 2f22c2fd-c14e-45e1-b936-b739ffc0b135
ms.openlocfilehash: 2354be5ac7299fc0361e1b3ad50554e9949f8c1d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50599479"
---
# <a name="compiler-error-c3890"></a>Errore del compilatore C3890

'var': è possibile accettare l'indirizzo di un membro dati literal

Un membro dati literal esiste nell'heap sottoposto a garbage collection.  Un oggetto nell'heap sottoposto a garbage collection può essere spostato, in modo da accettare l'indirizzo non è utile.

L'esempio seguente genera l'errore C3890:

```
// C3890.cpp
// compile with: /clr
ref struct Y1 {
   literal int staticConst = 9;
};

int main() {
   int p = &Y1::staticConst;   // C3890
   int p2 = Y1::staticConst;   // OK
}
```