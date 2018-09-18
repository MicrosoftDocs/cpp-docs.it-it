---
title: Errore del compilatore C2133 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2133
dev_langs:
- C++
helpviewer_keywords:
- C2133
ms.assetid: 8942f9e8-9818-468f-97db-09dbd124fcae
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 169b24787f1b180c7ba70c5d779e341e60ea2150
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46025191"
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