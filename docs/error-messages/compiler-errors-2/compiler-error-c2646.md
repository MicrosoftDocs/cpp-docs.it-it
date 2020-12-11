---
description: 'Altre informazioni su: errore del compilatore C2646'
title: Errore del compilatore C2646
ms.date: 11/04/2016
f1_keywords:
- C2646
helpviewer_keywords:
- C2646
ms.assetid: 92ff1f02-5eaf-40a5-8b7a-a682f149e967
ms.openlocfilehash: 7aa378a0a2dbaeae78a63f97e83a84d94d861c72
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97160818"
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
