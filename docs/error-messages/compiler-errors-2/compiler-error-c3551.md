---
title: Errore del compilatore C3551
ms.date: 11/04/2016
f1_keywords:
- C3551
helpviewer_keywords:
- C3551
ms.assetid: c8ee23da-6568-40db-93a6-3ddb7ac47712
ms.openlocfilehash: e9a4ce2276a602d59e495a2f336bb9d59dc0cc99
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200759"
---
# <a name="compiler-error-c3551"></a>Errore del compilatore C3551

"è previsto un tipo restituito specificato in ritardo"

Se si usa la parola chiave `auto` come segnaposto per il tipo restituito di una funzione, è necessario fornire un tipo restituito specificato in ritardo. Nell'esempio seguente il tipo restituito specificato in ritardo della funzione `myFunction` è un puntatore a una matrice di quattro elementi di tipo `int`.

```
auto myFunction()->int(*)[4];
```

## <a name="see-also"></a>Vedere anche

[auto](../../cpp/auto-cpp.md)
