---
description: 'Altre informazioni su: errore del compilatore C3460'
title: Errore del compilatore C3460
ms.date: 11/04/2016
f1_keywords:
- C3460
helpviewer_keywords:
- C3460
ms.assetid: adbf8775-10ca-4654-acdf-58dd765351cd
ms.openlocfilehash: ee5bcb2396586d965f16d80ef006301c7bcd784f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315881"
---
# <a name="compiler-error-c3460"></a>Errore del compilatore C3460

'type': è possibile inoltrare solo un tipo definito dall'utente

Per altre informazioni, vedere [invio di tipi (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## <a name="examples"></a>Esempio

L'esempio seguente crea un componente.

```cpp
// C3460.cpp
// compile with: /LD /clr
public ref class R {};
```

L'esempio seguente genera l'errore C3460.

```cpp
// C3460_b.cpp
// compile with: /clr /c
#using "C3460.dll"
[assembly:TypeForwardedTo(int::typeid)];   // C3460
[assembly:TypeForwardedTo(R::typeid)];
```
