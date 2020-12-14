---
description: 'Altre informazioni su: errore del compilatore C3551'
title: Errore del compilatore C3551
ms.date: 11/04/2016
f1_keywords:
- C3551
helpviewer_keywords:
- C3551
ms.assetid: c8ee23da-6568-40db-93a6-3ddb7ac47712
ms.openlocfilehash: 813d483b696d0829f05108a35e5731f93f6004ea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223269"
---
# <a name="compiler-error-c3551"></a>Errore del compilatore C3551

"è previsto un tipo restituito specificato in ritardo"

Se si utilizza la **`auto`** parola chiave come segnaposto per il tipo restituito di una funzione, è necessario fornire un tipo restituito specificato in ritardo. Nell'esempio seguente, il tipo restituito specificato in ritardo della funzione `myFunction` è un puntatore a una matrice di quattro elementi di tipo **`int`** .

```
auto myFunction()->int(*)[4];
```

## <a name="see-also"></a>Vedi anche

[Automatico](../../cpp/auto-cpp.md)
