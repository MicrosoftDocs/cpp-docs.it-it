---
title: Errore del compilatore C2790 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2790
dev_langs:
- C++
helpviewer_keywords:
- C2790
ms.assetid: 38d4fce1-ba00-413d-8bc1-e8aa43d7bc1f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dc2c6b238fab7e42c0754e613b62756a86a5bb31
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46069573"
---
# <a name="compiler-error-c2790"></a>Errore del compilatore C2790

'super': questa parola chiave può essere usata solo all'interno del corpo della funzione membro di classe

Questo messaggio di errore viene visualizzato se l'utente tenta di utilizzare la parola chiave [super](../../cpp/super.md) all'esterno del contesto di una funzione membro.

L'esempio seguente genera l'errore C2790:

```
// C2790.cpp
void f() {
   __super::g();   // C2790
}
```