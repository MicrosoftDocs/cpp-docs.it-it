---
title: Errore del compilatore C3551
ms.date: 11/04/2016
f1_keywords:
- C3551
helpviewer_keywords:
- C3551
ms.assetid: c8ee23da-6568-40db-93a6-3ddb7ac47712
ms.openlocfilehash: 1555817de6e50ea27a021718c8b094efeaebacde
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230844"
---
# <a name="compiler-error-c3551"></a>Errore del compilatore C3551

"è previsto un tipo restituito specificato in ritardo"

Se si utilizza la **`auto`** parola chiave come segnaposto per il tipo restituito di una funzione, è necessario fornire un tipo restituito specificato in ritardo. Nell'esempio seguente, il tipo restituito specificato in ritardo della funzione `myFunction` è un puntatore a una matrice di quattro elementi di tipo **`int`** .

```
auto myFunction()->int(*)[4];
```

## <a name="see-also"></a>Vedere anche

[Automatico](../../cpp/auto-cpp.md)
