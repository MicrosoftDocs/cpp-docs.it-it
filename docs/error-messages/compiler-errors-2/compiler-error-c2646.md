---
title: Errore del compilatore C2646
ms.date: 11/04/2016
f1_keywords:
- C2646
helpviewer_keywords:
- C2646
ms.assetid: 92ff1f02-5eaf-40a5-8b7a-a682f149e967
ms.openlocfilehash: a05c98564c4e45dc380690c1b8c9bace5fc14cf4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216154"
---
# <a name="compiler-error-c2646"></a>Errore del compilatore C2646

nell'ambito globale o dello spazio dei nomi una struct o unione anonima deve essere dichiarata come statica

Uno struct o un'unione anonima ha ambito globale o dello spazio dei nomi ma non è dichiarato **`static`** .

L'esempio seguente genera l'errore C2646 e mostra come risolverlo:

```cpp
// C2646.cpp
// compile with: /c
union { int i; };   // C2646 not static

// OK
static union { int j; };
union U { int i; };
```
