---
title: Errore del compilatore C3656
ms.date: 11/04/2016
f1_keywords:
- C3656
helpviewer_keywords:
- C3656
ms.assetid: 88965d85-73b0-4b35-8020-0650c9c94cd8
ms.openlocfilehash: 9709f3105e957012c05111ea818890b6d1df8259
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58774711"
---
# <a name="compiler-error-c3656"></a>Errore del compilatore C3656

'override': override non può essere ripetuto l'identificatore

Una parola chiave override esplicito può essere specificata una sola volta. Per altre informazioni, vedere [esegue l'override esplicito](../../extensions/explicit-overrides-cpp-component-extensions.md).

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