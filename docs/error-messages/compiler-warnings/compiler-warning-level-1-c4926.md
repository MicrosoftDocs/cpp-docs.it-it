---
title: Compilatore avviso (livello 1) C4926 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4926
dev_langs:
- C++
helpviewer_keywords:
- C4926
ms.assetid: 5717fce0-146f-4ef2-bde0-e9a01c0922d1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1942c334f06dce7a8f208f01cae6e2da1b6bb6cf
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46087942"
---
# <a name="compiler-warning-level-1-c4926"></a>Avviso del compilatore (livello 1) C4926

'identifier': simbolo già definito. Attributi ignorati.

È stata trovata una dichiarazione con prototipo ma un costrutto con attributi con lo stesso nome esiste già. Gli attributi per la dichiarazione con prototipo vengono ignorati.

L'esempio seguente genera l'errore C4926:

```
// C4926.cpp
// compile with: /W1
[module(name="MyLib")];

[coclass]
struct a {
};

[coclass]
struct a;   // C4926

int main() {
}
```