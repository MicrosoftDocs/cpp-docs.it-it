---
title: Errore del compilatore C2133
ms.date: 11/04/2016
f1_keywords:
- C2133
helpviewer_keywords:
- C2133
ms.assetid: 8942f9e8-9818-468f-97db-09dbd124fcae
ms.openlocfilehash: 68672ae76024d3d09d738d997c485a3205c7dd2a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50588061"
---
# <a name="compiler-error-c2133"></a>Errore del compilatore C2133

'identifier': dimensione sconosciuta

Una matrice non dimensionata è dichiarata come membro di una classe, struttura, unione o enumerazione. L'opzione /Za (ANSI C) non supporta le matrici non dimensionate membro.

L'esempio seguente genera l'errore C2133:

```
// C2133.cpp
// compile with: /Za
struct X {
   int a[0];   // C2133 unsized array
};
```

Possibile soluzione:

```
// C2133b.cpp
// compile with: /c
struct X {
   int a[0];   // no /Za
};
```