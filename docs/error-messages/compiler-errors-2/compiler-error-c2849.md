---
title: Errore del compilatore C2849 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2849
dev_langs:
- C++
helpviewer_keywords:
- C2849
ms.assetid: e28f6b3e-e0e7-4f92-b006-ebaa81d368e6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2b7e0adff8c2ff9d45dafad28f6d0a501ebe1197
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46029149"
---
# <a name="compiler-error-c2849"></a>Errore del compilatore C2849

'distruttore': un'interfaccia non può avere un distruttore

Visual C++ [interfaccia](../../cpp/interface.md) non può avere un distruttore.

L'esempio seguente genera l'errore C2849:

```
// C2849.cpp
// compile with: /c
__interface C {
   ~C();   // C2849 destructor not allowed in an interface
};
```