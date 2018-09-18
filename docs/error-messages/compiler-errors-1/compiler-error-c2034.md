---
title: Errore del compilatore C2034 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2034
dev_langs:
- C++
helpviewer_keywords:
- C2034
ms.assetid: 953d70fa-bde9-4ce6-a55d-741e7bc63ff4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b1dadc3249b7e58410eb153f8d298fca06a44ea7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46034421"
---
# <a name="compiler-error-c2034"></a>Errore del compilatore C2034

'identifier': tipo di campo di bit troppo piccolo per numero di bit

Il numero di bit nella dichiarazione del campo di bit supera le dimensioni del tipo di base.

L'esempio seguente genera l'errore C2034:

```
// C2034.cpp
struct A {
   char test : 9;   // C2034, char has 8 bits
};
```

Possibile soluzione:

```
// C2034b.cpp
// compile with: /c
struct A {
   char test : 8;
};
```