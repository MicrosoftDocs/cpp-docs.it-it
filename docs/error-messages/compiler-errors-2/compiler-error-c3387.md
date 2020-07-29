---
title: Errore del compilatore C3387
ms.date: 11/04/2016
f1_keywords:
- C3387
helpviewer_keywords:
- C3387
ms.assetid: c54d9925-ed14-4976-b8db-e8d4dc84e536
ms.openlocfilehash: 8218233bb7a92c699952f7a506f6728386af4d17
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221068"
---
# <a name="compiler-error-c3387"></a>Errore del compilatore C3387

' member ': non è possibile applicare __declspec (dllexport)/ \_ _declspec (dllimport) a un membro di un tipo gestito o WinRT

I `dllimport` modificatori e [dllexport](../../cpp/dllexport-dllimport.md) **`__declspec`** non sono validi per i membri di un tipo gestito o Windows Runtime.

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
