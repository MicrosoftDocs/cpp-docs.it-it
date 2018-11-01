---
title: Errore del compilatore C3704
ms.date: 11/04/2016
f1_keywords:
- C3704
helpviewer_keywords:
- C3704
ms.assetid: ee40ea35-a214-4dec-9489-d7f155dd0ac2
ms.openlocfilehash: 4e26742de6c294018f81c6f49c1719fdb11d5149
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50467110"
---
# <a name="compiler-error-c3704"></a>Errore del compilatore C3704

'function': un metodo vararg non può generare eventi

Si è provato a usare [event](../../cpp/event.md) su un metodo vararg. Per risolvere questo errore, sostituire il `fireEvent(int i, ...)` chiamata con il `fireEvent(int i)` chiamare come illustrato nell'esempio di codice seguente.

L'esempio seguente genera l'errore C3704:

```
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