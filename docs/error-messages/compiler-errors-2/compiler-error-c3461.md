---
description: 'Altre informazioni su: errore del compilatore C3461'
title: Errore del compilatore C3461
ms.date: 11/04/2016
f1_keywords:
- C3461
helpviewer_keywords:
- C3461
ms.assetid: bd66833a-545d-445a-bdfe-dee771a450a4
ms.openlocfilehash: 6158e0d6d38290a1925beba89fe77cba8f01c87b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113493"
---
# <a name="compiler-error-c3461"></a>Errore del compilatore C3461

'type': è possibile inoltrare solo un tipo gestito

L'inoltro dei tipi può essere usato solo nei tipi CLR.  Per ulteriori informazioni, vedere [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md) .

Per altre informazioni, vedere [invio di tipi (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## <a name="examples"></a>Esempio

L'esempio seguente crea un componente.

```cpp
// C3461.cpp
// compile with: /clr /LD
public ref class R {};
```

L'esempio seguente genera l'errore C3461.

```cpp
// C3461b.cpp
// compile with: /clr /c
#using "C3461.dll"
class N {};
[assembly:TypeForwardedTo(N::typeid)];   // C3461
[assembly:TypeForwardedTo(R::typeid)];   // OK
```
