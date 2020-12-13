---
description: 'Altre informazioni su: errore del compilatore C2486'
title: Errore del compilatore C2486
ms.date: 11/04/2016
f1_keywords:
- C2486
helpviewer_keywords:
- C2486
ms.assetid: 436da349-6461-4e32-bfca-4f3e620108e2
ms.openlocfilehash: c45e0bdb0f515743694fe372bea3afdb24e00177
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339358"
---
# <a name="compiler-error-c2486"></a>Errore del compilatore C2486

' __LOCAL_SIZE ' consentito solo nella funzione con l'attributo ' Naked '

Nelle funzioni di assembly inline il nome `__LOCAL_SIZE` è riservato alle funzioni dichiarate con l'attributo [naked](../../cpp/naked-cpp.md) .

L'esempio seguente genera l'C2486:

```cpp
// C2486.cpp
// processor: x86
void __declspec(naked) f1() {
   __asm {
      mov   eax,   __LOCAL_SIZE
   }
}
void f2() {
   __asm {
      mov   eax,   __LOCAL_SIZE   // C2486
   }
}
```
