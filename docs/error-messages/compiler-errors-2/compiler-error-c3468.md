---
description: 'Altre informazioni su: errore del compilatore C3468'
title: Errore del compilatore C3468
ms.date: 11/04/2016
f1_keywords:
- C3468
helpviewer_keywords:
- C3468
ms.assetid: cfd320db-2f6e-4e0d-ba02-e79ece87e1e0
ms.openlocfilehash: 7e6d58e012baa0163f33867069e7250da61177b2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315738"
---
# <a name="compiler-error-c3468"></a>Errore del compilatore C3468

'type': i tipi possono essere inoltrati solo a un assembly:

'`file`' non è un assembly

È possibile inoltrare solo i tipi in un assembly.

Per altre informazioni, vedere [invio di tipi (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## <a name="examples"></a>Esempio

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
