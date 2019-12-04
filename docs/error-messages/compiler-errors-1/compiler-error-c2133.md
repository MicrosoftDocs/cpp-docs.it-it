---
title: Errore del compilatore C2133
ms.date: 11/04/2016
f1_keywords:
- C2133
helpviewer_keywords:
- C2133
ms.assetid: 8942f9e8-9818-468f-97db-09dbd124fcae
ms.openlocfilehash: b51b556ea576e02b85a5c2ee5032909af39c7b2f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758437"
---
# <a name="compiler-error-c2133"></a>Errore del compilatore C2133

' Identifier ': dimensioni sconosciute

Una matrice non dimensionata viene dichiarata come membro di una classe, struttura, Unione o enumerazione. L'opzione/za (ANSI C) non consente matrici di membri senza dimensioni.

L'esempio seguente genera l'C2133:

```cpp
// C2133.cpp
// compile with: /Za
struct X {
   int a[0];   // C2133 unsized array
};
```

Possibile soluzione:

```cpp
// C2133b.cpp
// compile with: /c
struct X {
   int a[0];   // no /Za
};
```
