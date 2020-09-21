---
title: Errore del compilatore C3468
ms.date: 11/04/2016
f1_keywords:
- C3468
helpviewer_keywords:
- C3468
ms.assetid: cfd320db-2f6e-4e0d-ba02-e79ece87e1e0
ms.openlocfilehash: f22a01c5c26a55a5908c20f3b123971fadd43544
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90742814"
---
# <a name="compiler-error-c3468"></a>Errore del compilatore C3468

'type': i tipi possono essere inoltrati solo a un assembly:

'`file`' non è un assembly

È possibile inoltrare solo i tipi in un assembly.

Per altre informazioni, vedere [invio di tipi (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## <a name="examples"></a>Esempi

L'esempio seguente crea un modulo.

```cpp
// C3468.cpp
// compile with: /LN /clr
public ref class R {};
```

L'esempio seguente genera l'errore C3468.

```cpp
// C3468_b.cpp
// compile with: /clr /c
#using "C3468.netmodule"
[ assembly:TypeForwardedTo(R::typeid) ];   // C3468
```
