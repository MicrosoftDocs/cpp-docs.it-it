---
title: Errore del compilatore C2489
ms.date: 11/04/2016
f1_keywords:
- C2489
helpviewer_keywords:
- C2489
ms.assetid: 67d8cd98-db7e-4f7f-86b4-4af7bc89ec8b
ms.openlocfilehash: e4024455e17956fc67917e92a3ca531eca5c5e04
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50652764"
---
# <a name="compiler-error-c2489"></a>Errore del compilatore C2489

'identifier': variabile auto o register non consentita nell'ambito della funzione nella funzione 'naked' inizializzata

Per altre informazioni, vedere [naked](../../cpp/naked-cpp.md).

L'esempio seguente genera l'errore C2489:

```
// C2489.cpp
// processor: x86
__declspec( naked ) int func() {
   int i = 1;   // C2489
   register int j = 1;   // C2489
}
```