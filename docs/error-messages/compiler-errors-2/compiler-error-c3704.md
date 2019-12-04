---
title: Errore del compilatore C3704
ms.date: 11/04/2016
f1_keywords:
- C3704
helpviewer_keywords:
- C3704
ms.assetid: ee40ea35-a214-4dec-9489-d7f155dd0ac2
ms.openlocfilehash: 11e5792344b6f8fba6183f4ab87e1799db803b46
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757943"
---
# <a name="compiler-error-c3704"></a>Errore del compilatore C3704

' Function ': un metodo vararg non può generare eventi

Si è provato a usare [__event](../../cpp/event.md) su un metodo vararg. Per correggere l'errore, sostituire la chiamata `fireEvent(int i, ...)` con la chiamata `fireEvent(int i)`, come illustrato nell'esempio di codice seguente.

L'esempio seguente genera l'C3704:

```cpp
// C3704.cpp
[ event_source(native) ]
class CEventSrc {
   public:
      __event void fireEvent(int i, ...);   // C3704
      // try the following line instead:
      // __event void fireEvent(int i);
};

int main() {
}
```
