---
title: Avviso del compilatore (livello 1) C4674
ms.date: 11/04/2016
f1_keywords:
- C4674
helpviewer_keywords:
- C4674
ms.assetid: 638dae0b-b82c-4865-9599-72630827ca09
ms.openlocfilehash: b9428a593ff59cbdfa6d8eb369413a560b4a5ad2
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052548"
---
# <a name="compiler-warning-level-1-c4674"></a>Avviso del compilatore (livello 1) C4674

'method' deve essere dichiarato 'static' e avere esattamente un parametro

La firma di un operatore di conversione non era corretta. Il metodo non è considerato una conversione definita dall'utente. Per ulteriori informazioni sulla definizione di operatori, vedere [operatori definiti dall'utenteC++(/CLI)](../../dotnet/user-defined-operators-cpp-cli.md) e [conversioni definite dall'utente (C++/CLI)](../../dotnet/user-defined-conversions-cpp-cli.md).

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
