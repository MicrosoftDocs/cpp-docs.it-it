---
description: 'Altre informazioni su: errore del compilatore C2178'
title: Errore del compilatore C2178
ms.date: 05/08/2017
f1_keywords:
- C2178
helpviewer_keywords:
- C2178
ms.assetid: 79a14158-17f3-4221-bd06-9d675c49cef4
ms.openlocfilehash: 7a93293fdb87f30827b8b9c3c6d38066b0c76798
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322162"
---
# <a name="compiler-error-c2178"></a>Errore del compilatore C2178

'*Identifier*' non può essere dichiarato con l'identificatore '*specifier*'

**`mutable`** In una dichiarazione è stato usato un identificatore, ma l'identificatore non è consentito in questo contesto.

L' **`mutable`** identificatore può essere applicato solo ai nomi dei membri dati della classe e non può essere applicato ai nomi dichiarati **`const`** o **`static`** e non può essere applicato ai membri di riferimento.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come può verificarsi C2178 e come risolverlo.

```cpp
// C2178.cpp
// compile with: cl /c /W4 C2178.cpp

class S {
    mutable const int i; // C2178
    // To fix, declare either const or mutable, not both.
};

mutable int x = 4; // C2178
// To fix, remove mutable keyword
```
