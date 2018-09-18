---
title: Errore del compilatore C2150 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2150
dev_langs:
- C++
helpviewer_keywords:
- C2150
ms.assetid: 21e82a10-c1d4-4c0d-9dc6-c5d92ea42a31
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ef0920c98fe59fe5bca49bba4c62a486a61c0a55
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46024711"
---
# <a name="compiler-error-c2150"></a>Errore del compilatore C2150

> «*identificatore*': un campo di bit deve avere il tipo 'int', 'signed int' o 'unsigned int'

Il tipo base per un campo di bit deve essere `int`, `signed int`, o `unsigned int`.

## <a name="example"></a>Esempio

In questo esempio mostra come possono verificarsi C2150 e come è possibile risolvere il problema:

```cpp
// C2150.cpp
// compile with: /c
struct A {
   float a : 8;    // C2150
   int i : 8;      // OK
};
```