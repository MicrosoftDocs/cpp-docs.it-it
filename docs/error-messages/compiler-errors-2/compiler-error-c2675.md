---
title: Errore del compilatore C2675
ms.date: 11/04/2016
f1_keywords:
- C2675
helpviewer_keywords:
- C2675
ms.assetid: 4b92a12b-bff8-4dd5-a109-620065fc146c
ms.openlocfilehash: aea79509d0e1ae5c31fcf0cf369c28af39a21154
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62367928"
---
# <a name="compiler-error-c2675"></a>Errore del compilatore C2675

unario 'operator': 'type' non definisce questo operatore né una conversione in un tipo accettabile dall'operatore predefinito

C2675 può verificarsi anche quando si usa un operatore unario, e il tipo non definisce l'operatore né una conversione in un tipo accettabile dall'operatore predefinito. Per usare l'operatore, è necessario eseguirne l'overload per il tipo specificato o definire una conversione in un tipo per cui l'operatore è definito.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2675.

```
// C2675.cpp
struct C {
   C(){}
} c;

struct D {
   D(){}
   void operator-(){}
} d;

int main() {
   -c;   // C2675
   -d;   // OK
}
```