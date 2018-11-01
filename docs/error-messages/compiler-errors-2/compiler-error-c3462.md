---
title: Errore del compilatore C3462
ms.date: 11/04/2016
f1_keywords:
- C3462
helpviewer_keywords:
- C3462
ms.assetid: 56b75f35-9fad-42d9-a969-eeca5d709bec
ms.openlocfilehash: 6c56e59be8bc4173c6568b47628f675ba4f4d782
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50651776"
---
# <a name="compiler-error-c3462"></a>Errore del compilatore C3462

'type': è possibile inoltrare solo un tipo importato

L'attributo TypeForwardedTo deve essere applicato a un tipo nei metadati a cui si fa riferimento.

Per altre informazioni, vedere [l'inoltro di tipi (C + + CLI)](../../windows/type-forwarding-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente crea un componente.

```
// C3462.cpp
// compile with: /clr /LD
public ref class R {};
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3462.

```
// C3462b.cpp
// compile with: /clr /c
#using "C3462.dll"
ref class N {};
[assembly:TypeForwardedTo(N::typeid)];   // C3462
[assembly:TypeForwardedTo(R::typeid)];
```