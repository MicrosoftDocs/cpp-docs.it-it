---
title: Errore del compilatore C2158
ms.date: 11/04/2016
f1_keywords:
- C2158
helpviewer_keywords:
- C2158
ms.assetid: 39028899-e95c-4809-8e65-6111118641ee
ms.openlocfilehash: f098af90d3052d6961eb0892085c02f2e42bbed4
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755863"
---
# <a name="compiler-error-c2158"></a>Errore del compilatore C2158

'type': la direttiva #pragma make_public è correntemente supportata solo per i tipi non modello nativi

Il pragma [make_public](../../preprocessor/make-public.md) può essere applicato solo a un tipo non modello nativo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2158.

```cpp
// C2158.cpp
// compile with: /clr /c
ref class A {};
#pragma make_public(A)   // C2158

template< typename T >
class B {};
#pragma make_public(B)   // C2158
#pragma make_public(B<int>)   // C2158

void C () {}
#pragma make_public(C)   // C2158

class D {};
#pragma make_public(D)   // OK
```
