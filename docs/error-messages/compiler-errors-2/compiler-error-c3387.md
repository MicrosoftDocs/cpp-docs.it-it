---
title: Errore del compilatore C3387
ms.date: 11/04/2016
f1_keywords:
- C3387
helpviewer_keywords:
- C3387
ms.assetid: c54d9925-ed14-4976-b8db-e8d4dc84e536
ms.openlocfilehash: 9f083f5c21e494d08374e72155b44ee14719881f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74743146"
---
# <a name="compiler-error-c3387"></a>Errore del compilatore C3387

' member ': Impossibile applicare __declspec (dllexport)/\__declspec (dllimport) a un membro di un tipo gestito o WinRT

I modificatori `dllimport` e [dllexport](../../cpp/dllexport-dllimport.md) `__declspec` non sono validi per i membri di un tipo gestito o Windows Runtime.

L'esempio seguente genera l'errore C3387 e mostra come risolverlo:

```cpp
// C3387a.cpp
// compile with: /clr /c
ref class X2 {
   void __declspec(dllexport) mf() {   // C3387
   // try the following line instead
   // void mf() {
   }
};
```
