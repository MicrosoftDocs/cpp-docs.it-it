---
description: 'Altre informazioni su: errore del compilatore C3467'
title: Errore del compilatore C3467
ms.date: 11/04/2016
f1_keywords:
- C3467
helpviewer_keywords:
- C3467
ms.assetid: e2b844d0-4920-412f-99fd-cd8051c4aa41
ms.openlocfilehash: c00c78852380537d744c8d01681a921e487826df
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113441"
---
# <a name="compiler-error-c3467"></a>Errore del compilatore C3467

'type': questo tipo è stato già inoltrato

Il compilatore ha trovato più dichiarazioni con prototipo per lo stesso tipo. È consentita una sola dichiarazione per tipo.

Per altre informazioni, vedere [invio di tipi (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## <a name="examples"></a>Esempio

L'esempio seguente crea un componente.

```cpp
// C3467.cpp
// compile with: /LD /clr
public ref class R {};
```

L'esempio seguente genera l'errore C3467.

```cpp
// C3467_b.cpp
// compile with: /clr /c
#using "C3467.dll"
[ assembly:TypeForwardedTo(R::typeid) ];
[ assembly:TypeForwardedTo(R::typeid) ];   // C3467
```
