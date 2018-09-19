---
title: Errore del compilatore C3701 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3701
dev_langs:
- C++
helpviewer_keywords:
- C3701
ms.assetid: a7faaa87-d2f5-4d6a-9a2f-5cab2d24a648
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6c3a5d3af9448afe918cc2028655fbf85be81cef
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46051282"
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