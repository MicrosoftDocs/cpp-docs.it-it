---
title: Errore del compilatore C3701
ms.date: 11/04/2016
f1_keywords:
- C3701
helpviewer_keywords:
- C3701
ms.assetid: a7faaa87-d2f5-4d6a-9a2f-5cab2d24a648
ms.openlocfilehash: 2efbf3c48b7c366d262facac9cebb4f72d9f1513
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50580599"
---
# <a name="compiler-error-c3701"></a>Errore del compilatore C3701

'function': event_source è associato alcun evento

Si è provato a usare [event_source](../../windows/event-source.md) in una classe che dispone di alcun metodo di evento. Per correggere questo errore, aggiungere uno o più eventi alla classe.

L'esempio seguente genera l'errore C3701:

```
// C3701.cpp
[ event_source(native) ]
class CEventSrc {
public:
   // uncomment the following line to resolve this C3701
   // __event void fireEvent(int i);
};   // C3701

int main() {
}
```