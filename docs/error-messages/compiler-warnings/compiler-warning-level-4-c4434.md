---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4434'
title: Avviso del compilatore (livello 4) C4434
ms.date: 11/04/2016
f1_keywords:
- C4434
helpviewer_keywords:
- C4434
ms.assetid: 24b8785e-353a-4c37-8bed-ed61001a871d
ms.openlocfilehash: 24e8066ec415293eddf6de1d5a2dd2644623f2ac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251466"
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
