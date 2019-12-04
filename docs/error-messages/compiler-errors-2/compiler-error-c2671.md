---
title: Errore del compilatore C2671
ms.date: 11/04/2016
f1_keywords:
- C2671
helpviewer_keywords:
- C2671
ms.assetid: fc0ee40f-c8f3-408f-b89d-745d149c4169
ms.openlocfilehash: 57f4f2538fd02174f931faa2603a1388906d9944
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760400"
---
# <a name="compiler-error-c2671"></a>Errore del compilatore C2671

' Function ': le funzioni membro statiche non hanno puntatori ' This '

Una funzione membro `static` ha tentato di accedere al `this`.

L'esempio seguente genera l'C2671:

```cpp
// C2671.cpp
struct S {
   static S* const func() { return this; }  // C2671
};
```
