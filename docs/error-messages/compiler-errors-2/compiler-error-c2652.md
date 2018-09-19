---
title: Errore del compilatore C2652 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2652
dev_langs:
- C++
helpviewer_keywords:
- C2652
ms.assetid: 6e3d1a90-a989-4088-8afd-dc82f6a2d66f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 37b7b259b8eb42692641883c8d69578542cce06e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46076619"
---
# <a name="compiler-error-c2652"></a>Errore del compilatore C2652

'identifier': costruttore di copia non valida: primo parametro non deve essere un' 'identifier'

Il primo parametro nel costruttore di copia ha lo stesso tipo della classe, struttura o unione per il quale è definito. Il primo parametro può essere un riferimento al tipo, ma non il tipo stesso.

L'esempio seguente genera l'errore C2651:

```
// C2652.cpp
// compile with: /c
class A {
   A( A );   // C2652 takes an A
};
class B {
   B( B& );   // OK, reference to B
};
```