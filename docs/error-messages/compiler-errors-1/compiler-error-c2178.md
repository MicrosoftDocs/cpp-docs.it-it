---
title: Errore del compilatore C2178 | Microsoft Docs
ms.custom: ''
ms.date: 05/08/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2178
dev_langs:
- C++
helpviewer_keywords:
- C2178
ms.assetid: 79a14158-17f3-4221-bd06-9d675c49cef4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: af9efdb3258e6793a17a26b552df8ba4e63c9107
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46102339"
---
# <a name="compiler-error-c2178"></a>Errore del compilatore C2178

«*identifier*'non può essere dichiarata con'*identificatore*' identificatore

Oggetto `mutable` identificatore è stato usato in una dichiarazione, ma l'identificatore non è consentito in questo contesto.

Il `mutable` identificatore può essere applicato solo ai nomi dei membri dati della classe e non può essere applicato ai nomi dichiarati `const` o `static`e non può essere applicato ai membri di riferimento.

## <a name="example"></a>Esempio

L'esempio seguente viene illustrato come può verificarsi C2178 e su come risolverlo.

```
// C2178.cpp
// compile with: cl /c /W4 C2178.cpp

class S {
    mutable const int i; // C2178
    // To fix, declare either const or mutable, not both.
};

mutable int x = 4; // C2178
// To fix, remove mutable keyword
```
