---
title: Errore del compilatore C2267 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2267
dev_langs:
- C++
helpviewer_keywords:
- C2267
ms.assetid: ea63bebb-6208-4367-8440-39be07f9c360
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 080f6ebfda8dbdaa1f0bf70faa3b6d5c7545d66e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46035266"
---
# <a name="compiler-error-c2267"></a>Errore del compilatore C2267

'function': le funzioni statiche con ambito blocco non sono valide

Una funzione locale viene dichiarata `static`. Funzioni statiche devono avere ambito globale.

L'esempio seguente genera l'errore C2267:

```
// C2267.cpp
static int func2();   // OK
int main() {
    static int func1();   // C2267
}
```