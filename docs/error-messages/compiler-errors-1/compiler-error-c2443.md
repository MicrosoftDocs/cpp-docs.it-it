---
description: 'Altre informazioni su: errore del compilatore C2443'
title: Errore del compilatore C2443
ms.date: 11/04/2016
f1_keywords:
- C2443
helpviewer_keywords:
- C2443
ms.assetid: 315330d5-24bc-4193-a531-0642095be58f
ms.openlocfilehash: 122cc2aabe2d01ffb5e1d28420fbf6c08be0617d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189717"
---
# <a name="compiler-error-c2443"></a>Errore del compilatore C2443

conflitto dimensioni operando

L'istruzione richiede che gli operandi siano della stessa dimensione.

L'esempio seguente genera l'C2443:

```cpp
// C2443.cpp
// processor: x86
short var;
int main() {
   __asm xchg ax,bl   // C2443
   __asm mov al,red   // C2443
   __asm mov al,BYTE PTR var   // OK
}
```
