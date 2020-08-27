---
title: Errore del compilatore C2706
description: Descrive l'errore del compilatore Microsoft C/C++ C2706.
ms.date: 08/25/2020
f1_keywords:
- C2706
helpviewer_keywords:
- C2706
ms.assetid: e18da924-c42d-4b09-8e29-f4e0382d7dc6
ms.openlocfilehash: 11e1e878f82ad59bb712155747696c0d6c6a239e
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898739"
---
# <a name="compiler-error-c2706"></a>Errore del compilatore C2706

> `__except`non valido senza corrispondenza `__try` ('}' mancante nel `__try` blocco?)

Il compilatore non ha trovato una parentesi graffa di chiusura per un **`__try`** blocco.

L'esempio seguente genera l'C2706:

```cpp
// C2706.cpp
int main() {
   __try {
      void f();
   // C2706  } missing here
   __except(GetExceptionCode() == 0x0) {
   }
}
```
