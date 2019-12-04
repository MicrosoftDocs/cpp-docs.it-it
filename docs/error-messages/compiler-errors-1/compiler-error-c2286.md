---
title: Errore del compilatore C2286
ms.date: 11/04/2016
f1_keywords:
- C2286
helpviewer_keywords:
- C2286
ms.assetid: 078e0201-35cc-42e2-8dbc-6f8cf557b098
ms.openlocfilehash: 79697a17d322ae15a21e522efa7dfd5c2342f7a6
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759165"
---
# <a name="compiler-error-c2286"></a>Errore del compilatore C2286

i puntatori ai membri della rappresentazione ' Identifier ' sono già impostati su' ereditarietà'-Dichiarazione ignorata

Per la classe esistono due rappresentazioni di puntatore a membri diverse.

Per altre informazioni, vedere [parole chiave di ereditarietà](../../cpp/inheritance-keywords.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2286:

```cpp
// C2286.cpp
// compile with: /c
class __single_inheritance X;
class __multiple_inheritance X;   // C2286
class  __multiple_inheritance Y;   // OK
```
