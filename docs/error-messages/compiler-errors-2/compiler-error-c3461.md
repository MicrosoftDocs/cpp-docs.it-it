---
title: Errore del compilatore C3461
ms.date: 11/04/2016
f1_keywords:
- C3461
helpviewer_keywords:
- C3461
ms.assetid: bd66833a-545d-445a-bdfe-dee771a450a4
ms.openlocfilehash: a674ce7819c88dd4e26355c0129a6c181da5c276
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781952"
---
# <a name="compiler-error-c3461"></a>Errore del compilatore C3461

'type': è possibile inoltrare solo un tipo gestito

L'inoltro dei tipi può essere usato solo nei tipi CLR.  Visualizzare [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md) per altre informazioni.

Per altre informazioni, vedere [l'inoltro di tipi (C + + CLI)](../../extensions/type-forwarding-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente crea un componente.

```
// C3461.cpp
// compile with: /clr /LD
public ref class R {};
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3461.

```
// C3461b.cpp
// compile with: /clr /c
#using "C3461.dll"
class N {};
[assembly:TypeForwardedTo(N::typeid)];   // C3461
[assembly:TypeForwardedTo(R::typeid)];   // OK
```