---
title: Errore del compilatore C3656
ms.date: 11/04/2016
f1_keywords:
- C3656
helpviewer_keywords:
- C3656
ms.assetid: 88965d85-73b0-4b35-8020-0650c9c94cd8
ms.openlocfilehash: 219b8a4135fda963fdce038a75ce0543d6a3433b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50465520"
---
# <a name="compiler-error-c3656"></a>Errore del compilatore C3656

'override': override non può essere ripetuto l'identificatore

Una parola chiave override esplicito può essere specificata una sola volta. Per altre informazioni, vedere [esegue l'override esplicito](../../windows/explicit-overrides-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3656:

```
// C3656.cpp
// compile with: /clr /c
public interface struct O {
   int f();
};

public ref struct V : O {
   int f() override override { return 0; }   // C3656
   // try the following line instead
   // int f() override { return 0; }
};
```