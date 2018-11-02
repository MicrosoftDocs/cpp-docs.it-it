---
title: Avviso del compilatore (livello 4) C4434
ms.date: 11/04/2016
f1_keywords:
- C4434
helpviewer_keywords:
- C4434
ms.assetid: 24b8785e-353a-4c37-8bed-ed61001a871d
ms.openlocfilehash: 6a7d760a7d192c7e0a7bd5e16f77efe1a4099c31
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50591260"
---
# <a name="compiler-warning-level-4-c4434"></a>Avviso del compilatore (livello 4) C4434

un costruttore di classe deve avere accessibilità privata; conversione in accesso privato

C4434 indica che il compilatore modifica l'accessibilità di un costruttore statico. I costruttori statici devono avere accessibilità privata, come sono concepite solo per essere chiamato da common language runtime. Per altre informazioni, vedere [costruttori statici](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Static_constructors).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4434.

```
// C4434.cpp
// compile with: /W4 /c /clr
public ref struct R {
   static R(){}   // C4434
};
```