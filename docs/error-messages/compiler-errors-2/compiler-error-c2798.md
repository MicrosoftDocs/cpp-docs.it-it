---
title: Errore del compilatore C2798 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2798
dev_langs:
- C++
helpviewer_keywords:
- C2798
ms.assetid: fb0cd861-b228-4f81-8090-e28344a727e0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 88241989d54e1a068b226b59091a381f531dee9e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46028857"
---
# <a name="compiler-error-c2798"></a>Errore del compilatore C2798

'super:: membro' è ambiguo

Più strutture ereditate contengono il membro è stato fatto riferimento con [super](../../cpp/super.md). È possibile correggere l'errore in uno dei modi:

- Rimozione B1 o B2 dall'elenco di ereditarietà di D.

- Modifica del nome del membro dati in B2 o B1.

L'esempio seguente genera l'errore C2798:

```
// C2798.cpp
struct B1 {
   int i;
};

struct B2 {
   int i;
};

struct D : B1, B2 {
   void g() {
      __super::i = 4; // C2798
   }
};
```