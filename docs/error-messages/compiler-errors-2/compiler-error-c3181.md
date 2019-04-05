---
title: Errore del compilatore C3181
ms.date: 11/04/2016
f1_keywords:
- C3181
helpviewer_keywords:
- C3181
ms.assetid: 5d450f8b-6cef-4452-a0c4-2076e967451d
ms.openlocfilehash: dc848d4108ed4a1a7b6646647a1bbb1ec8dcadf7
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58781809"
---
# <a name="compiler-error-c3181"></a>Errore del compilatore C3181

'type': operando non valido per l'operatore

È stato passato un parametro non valido per il [typeid](../../extensions/typeid-cpp-component-extensions.md) operatore. Il parametro deve essere un tipo gestito.

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
