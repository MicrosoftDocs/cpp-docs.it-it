---
title: Errore del compilatore C3181
ms.date: 11/04/2016
f1_keywords:
- C3181
helpviewer_keywords:
- C3181
ms.assetid: 5d450f8b-6cef-4452-a0c4-2076e967451d
ms.openlocfilehash: b37b28b4332b46aaaf803f58090a72c25e83f47f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50587759"
---
# <a name="compiler-error-c3181"></a>Errore del compilatore C3181

'type': operando non valido per l'operatore

È stato passato un parametro non valido per il [typeid](../../windows/typeid-cpp-component-extensions.md) operatore. Il parametro deve essere un tipo gestito.

Si noti che il compilatore Usa gli alias per i tipi nativi che eseguono il mapping a tipi in common language runtime.

L'esempio seguente genera l'errore C3181:

```
// C3181a.cpp
// compile with: /clr
using namespace System;

int main() {
   Type ^pType1 = interior_ptr<int>::typeid;   // C3181
   Type ^pType2 = int::typeid;   // OK
}
```
