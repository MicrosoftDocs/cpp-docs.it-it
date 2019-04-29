---
title: Errore del compilatore C3551
ms.date: 11/04/2016
f1_keywords:
- C3551
helpviewer_keywords:
- C3551
ms.assetid: c8ee23da-6568-40db-93a6-3ddb7ac47712
ms.openlocfilehash: 48b378eb734c5830bedbf417d99d34955e2e6d0f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62375977"
---
# <a name="compiler-error-c3551"></a>Errore del compilatore C3551

"è previsto un tipo restituito specificato in ritardo"

Se si usa la parola chiave `auto` come segnaposto per il tipo restituito di una funzione, è necessario fornire un tipo restituito specificato in ritardo. Nell'esempio seguente il tipo restituito specificato in ritardo della funzione `myFunction` è un puntatore a una matrice di quattro elementi di tipo `int`.

```
auto myFunction()->int(*)[4];
```

## <a name="see-also"></a>Vedere anche

[auto](../../cpp/auto-cpp.md)