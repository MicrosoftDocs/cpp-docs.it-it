---
title: Errore del compilatore C3241
ms.date: 11/04/2016
f1_keywords:
- C3241
helpviewer_keywords:
- C3241
ms.assetid: 2ca14879-bba0-4a23-b22a-72cfff92d6a4
ms.openlocfilehash: 6a618a9c538558d2aa4b995cbc9071bb8e94a5bc
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754577"
---
# <a name="compiler-error-c3241"></a>Errore del compilatore C3241

' Method ': questo metodo non è stato introdotto da' Interface '

Quando si esegue l'override esplicito di una funzione, la firma della funzione deve corrispondere esattamente alla dichiarazione per la funzione di cui si esegue l'override.

L'esempio seguente genera l'C3241:

```cpp
// C3241.cpp
#pragma warning(disable:4199)

__interface IX12A {
   void mf();
};

__interface IX12B {
   void mf(int);
};

class CX12 : public IX12A, public IX12B { // C3241
   void IX12A::mf(int);
};
```
