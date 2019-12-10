---
title: Avviso del compilatore (livello 4) C4434
ms.date: 11/04/2016
f1_keywords:
- C4434
helpviewer_keywords:
- C4434
ms.assetid: 24b8785e-353a-4c37-8bed-ed61001a871d
ms.openlocfilehash: fccc37ec531768adbe332ddf9fd91ceb708c7185
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74990809"
---
# <a name="compiler-warning-level-4-c4434"></a>Avviso del compilatore (livello 4) C4434

un costruttore di classe deve avere accessibilità privata; modifica dell'accesso privato

C4434 indica che il compilatore ha modificato l'accessibilità di un costruttore statico. I costruttori statici devono disporre di accessibilità privata, poiché devono essere chiamati solo dal Common Language Runtime. Per ulteriori informazioni, vedere [costruttori statici](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Static_constructors).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4434.

```cpp
// C4434.cpp
// compile with: /W4 /c /clr
public ref struct R {
   static R(){}   // C4434
};
```
