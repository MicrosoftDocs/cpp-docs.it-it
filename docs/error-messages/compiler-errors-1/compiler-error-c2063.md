---
title: Errore del compilatore C2063 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2063
dev_langs:
- C++
helpviewer_keywords:
- C2063
ms.assetid: 0a90c18f-4029-416a-9128-e8713b53e6f1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e3705192ba73faba88c63de5f4361449248e712e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46100409"
---
# <a name="compiler-error-c2063"></a>Errore del compilatore C2063

'identifier': non è una funzione

L'identificatore viene usato, ma non è dichiarato, come funzione.

L'esempio seguente genera l'errore C2063:

```
// C2063.c
int main() {
   int i, j;
   j = i();    // C2063, i is not a function
}
```

Possibile soluzione:

```
// C2063b.c
int i() { return 0;}
int main() {
   int j;
   j = i();
}
```