---
title: Errore del compilatore C3890
ms.date: 11/04/2016
f1_keywords:
- C3890
helpviewer_keywords:
- C3890
ms.assetid: 2f22c2fd-c14e-45e1-b936-b739ffc0b135
ms.openlocfilehash: 2354be5ac7299fc0361e1b3ad50554e9949f8c1d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62385550"
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