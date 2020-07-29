---
title: Errore del compilatore C2673
ms.date: 11/04/2016
f1_keywords:
- C2673
helpviewer_keywords:
- C2673
ms.assetid: 780230c0-619b-4a78-b01d-ff5886306741
ms.openlocfilehash: 1a27b41c11905a509889d46da655900b69070445
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216115"
---
# <a name="compiler-error-c2673"></a>Errore del compilatore C2673

' Function ': le funzioni globali non hanno puntatori ' This '

Una funzione globale ha tentato di accedere a **`this`** .

L'esempio seguente genera l'C2673:

```cpp
// C2673.cpp
int main() {
   this = 0;   // C2673
}
```
