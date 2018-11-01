---
title: Errore del compilatore C2646
ms.date: 11/04/2016
f1_keywords:
- C2646
helpviewer_keywords:
- C2646
ms.assetid: 92ff1f02-5eaf-40a5-8b7a-a682f149e967
ms.openlocfilehash: c02d7216df42681ae2ec733ae932d22861c1f0ee
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50572006"
---
# <a name="compiler-error-c2646"></a>Errore del compilatore C2646

nell'ambito globale o dello spazio dei nomi una struct o unione anonima deve essere dichiarata come statica

Una struct o unione anonima dispone dell'ambito globale o dello spazio dei nomi, ma non è dichiarata come `static`.

L'esempio seguente genera l'errore C2646 e mostra come risolverlo:

```
// C2646.cpp
// compile with: /c
union { int i; };   // C2646 not static

// OK
static union { int j; };
union U { int i; };
```