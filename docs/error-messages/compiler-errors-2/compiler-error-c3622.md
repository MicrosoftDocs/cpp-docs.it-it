---
title: Errore del compilatore C3622
ms.date: 11/04/2016
f1_keywords:
- C3622
helpviewer_keywords:
- C3622
ms.assetid: 02836f78-0cf2-4947-b87e-710187d81014
ms.openlocfilehash: 2adcee4cb20c39c39b06e0ac2087478cfe2d8937
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74740897"
---
# <a name="compiler-error-c3622"></a>Errore del compilatore C3622

' Class ': Impossibile creare un'istanza di una classe dichiarata come ' keyword '

È stato effettuato un tentativo di creare un'istanza di una classe contrassegnata come [astratta](../../extensions/abstract-cpp-component-extensions.md). Una classe contrassegnata come `abstract` può essere una classe base, ma non è possibile crearne un'istanza.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3622.

```cpp
// C3622.cpp
// compile with: /clr
ref class a abstract {};

int main() {
   a aa;   // C3622
}
```
