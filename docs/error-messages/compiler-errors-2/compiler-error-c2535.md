---
title: Errore del compilatore C2535 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2535
dev_langs:
- C++
helpviewer_keywords:
- C2535
ms.assetid: a958f83e-e2bf-4a59-b44b-d406ec325d7e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 98e1920b2163a318fbdba3b64d56bf74a8cd809f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46085901"
---
# <a name="compiler-error-c2535"></a>Errore del compilatore C2535

'identifier': funzione membro già definita o dichiarata

Questo errore potrebbe essere causato dall'utilizzo lo stesso elenco di parametri formali in più di una definizione o dichiarazione di una funzione in overload.

Se restituito l'errore C2535 a causa della funzione Dispose, vedere [distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers) per altre informazioni.

Se si sta compilando un progetto ATL, vedere della Knowledge Base Q241852.

L'esempio seguente genera l'errore C2535:

```
// C2535.cpp
// compile with: /c
class C {
public:
   void func();   // forward declaration
   void func() {}   // C2535
};
```