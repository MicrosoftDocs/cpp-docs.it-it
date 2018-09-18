---
title: Errore del compilatore C2750 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2750
dev_langs:
- C++
helpviewer_keywords:
- C2750
ms.assetid: 30450034-feb5-448c-9655-b8c5f3639695
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e3f40894c4879c9b3598429c02bb0811db658bb0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46069514"
---
# <a name="compiler-error-c2750"></a>Errore del compilatore C2750

'type': non è possibile usare 'new' per il tipo di riferimento. In alternativa, usare 'gcnew'

Per creare un'istanza di un tipo CLR, che fa sì che l'istanza da inserire nell'heap sottoposto a garbage collection, è necessario utilizzare [gcnew](../../windows/ref-new-gcnew-cpp-component-extensions.md).

L'esempio seguente genera l'errore C2750:

```
// C2750.cpp
// compile with: /clr
ref struct Y1 {};

int main() {
   Y1 ^ x = new Y1;   // C2750

   // try the following line instead
   Y1 ^ x2 = gcnew Y1;
}
```