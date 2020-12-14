---
description: 'Altre informazioni su: errore del compilatore C3464'
title: Errore del compilatore C3464
ms.date: 11/04/2016
f1_keywords:
- C3464
helpviewer_keywords:
- C3464
ms.assetid: 0ede05dc-4486-4921-8e8c-78ab5a2e09c5
ms.openlocfilehash: 893fc5b0afa3f389d5b85757abb903323cd0d780
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315764"
---
# <a name="compiler-error-c3464"></a>Errore del compilatore C3464

Non è possibile inoltrare un tipo annidato con 'type'

L'inoltro dei tipi non funziona nei tipi annidati.

Per altre informazioni, vedere [invio di tipi (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## <a name="examples"></a>Esempio

L'esempio seguente crea un componente.

```cpp
// C3464.cpp
// compile with: /LD /clr
public ref class R {
public:
   ref class N {};
};
```

L'esempio seguente genera l'errore C3464.

```cpp
// C3464_b.cpp
// compile with: /clr /c
#using "C3464.dll"
[assembly:TypeForwardedTo(R::N::typeid)];   // C3464
[assembly:TypeForwardedTo(R::typeid)];   // OK
```
