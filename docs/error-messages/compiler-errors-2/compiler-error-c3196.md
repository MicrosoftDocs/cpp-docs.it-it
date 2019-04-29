---
title: Errore del compilatore C3196
ms.date: 11/04/2016
f1_keywords:
- C3196
helpviewer_keywords:
- C3196
ms.assetid: d9c38a13-191d-472d-aa2b-f61a6459d16c
ms.openlocfilehash: 252fef18fa98183dcc75219c1b802461f3bd2833
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62402801"
---
# <a name="compiler-error-c3196"></a>Errore del compilatore C3196

'keyword': utilizzato più volte

Una parola chiave è stata usata più volte.

L'esempio seguente genera l'errore C3196:

```
// C3196.cpp
// compile with: /clr
ref struct R abstract abstract {};   // C3196
ref struct S abstract {};   // OK
```