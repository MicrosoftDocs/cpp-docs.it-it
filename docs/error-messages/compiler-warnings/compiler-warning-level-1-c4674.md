---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4674'
title: Avviso del compilatore (livello 1) C4674
ms.date: 11/04/2016
f1_keywords:
- C4674
helpviewer_keywords:
- C4674
ms.assetid: 638dae0b-b82c-4865-9599-72630827ca09
ms.openlocfilehash: 1df7dd982f52a6987e06e888130953c1a9deb330
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334979"
---
# <a name="compiler-warning-level-1-c4674"></a>Avviso del compilatore (livello 1) C4674

'method' deve essere dichiarato 'static' e avere esattamente un parametro

La firma di un operatore di conversione non era corretta. Il metodo non è considerato una conversione definita dall'utente. Per ulteriori informazioni sulla definizione di operatori, vedere [operatori definiti dall'utente (c++/CLI)](../../dotnet/user-defined-operators-cpp-cli.md) e [conversioni definite dall'utente (c++/CLI)](../../dotnet/user-defined-conversions-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4674.

```cpp
// C4674.cpp
// compile with: /clr /WX /W1 /LD
ref class G {
   int op_Implicit(int i) {   // C4674
      return 0;
   }
};
```
