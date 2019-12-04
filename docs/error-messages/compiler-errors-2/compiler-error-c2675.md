---
title: Errore del compilatore C2675
ms.date: 11/04/2016
f1_keywords:
- C2675
helpviewer_keywords:
- C2675
ms.assetid: 4b92a12b-bff8-4dd5-a109-620065fc146c
ms.openlocfilehash: 0b7b81ce7314fbad02d6873403fc5cf1bdd54709
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760374"
---
# <a name="compiler-error-c2675"></a>Errore del compilatore C2675

' operator ' unario:' type ' non definisce questo operatore né una conversione in un tipo accettabile per l'operatore predefinito

C2675 può verificarsi anche quando si usa un operatore unario e il tipo non definisce l'operatore o una conversione a un tipo accettabile per l'operatore predefinito. Per usare l'operatore, è necessario eseguirne l'overload per il tipo specificato o definire una conversione in un tipo per cui l'operatore è definito.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2675.

```cpp
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
