---
title: Avviso del compilatore (livello 1) C4674
ms.date: 11/04/2016
f1_keywords:
- C4674
helpviewer_keywords:
- C4674
ms.assetid: 638dae0b-b82c-4865-9599-72630827ca09
ms.openlocfilehash: f7db2f37224a8defffb545b0cfaf018fd4654227
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50614825"
---
# <a name="compiler-warning-level-1-c4674"></a>Avviso del compilatore (livello 1) C4674

'method' deve essere dichiarato 'static' e avere esattamente un parametro

La firma di un operatore di conversione non era corretta. Il metodo non è considerato una conversione definita dall'utente. Per altre informazioni sulla definizione degli operatori, vedere [operatori definiti dall'utente (C + + / CLI)](../../dotnet/user-defined-operators-cpp-cli.md) e [conversioni definite dall'utente (C + c++ /CLI CLI)](../../dotnet/user-defined-conversions-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4674.

```
// C4674.cpp
// compile with: /clr /WX /W1 /LD
ref class G {
   int op_Implicit(int i) {   // C4674
      return 0;
   }
};
```
