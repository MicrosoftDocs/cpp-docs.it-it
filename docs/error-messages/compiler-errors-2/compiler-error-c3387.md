---
description: 'Altre informazioni su: errore del compilatore C3387'
title: Errore del compilatore C3387
ms.date: 11/04/2016
f1_keywords:
- C3387
helpviewer_keywords:
- C3387
ms.assetid: c54d9925-ed14-4976-b8db-e8d4dc84e536
ms.openlocfilehash: febd47004026a7e22ca576c153ee8cf1506c3e1d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97285552"
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
