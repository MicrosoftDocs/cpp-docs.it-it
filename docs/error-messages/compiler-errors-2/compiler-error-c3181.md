---
title: Errore del compilatore C3181
ms.date: 11/04/2016
f1_keywords:
- C3181
helpviewer_keywords:
- C3181
ms.assetid: 5d450f8b-6cef-4452-a0c4-2076e967451d
ms.openlocfilehash: dc848d4108ed4a1a7b6646647a1bbb1ec8dcadf7
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59779180"
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
