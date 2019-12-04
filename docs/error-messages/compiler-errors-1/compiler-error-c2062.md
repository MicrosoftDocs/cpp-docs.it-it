---
title: Errore del compilatore C2062
ms.date: 11/04/2016
f1_keywords:
- C2062
helpviewer_keywords:
- C2062
ms.assetid: 6cc98353-2ddf-43ab-88a2-9cc91cdd6033
ms.openlocfilehash: a709a540b24756a7e08f98552c5888a55c3ea601
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74735970"
---
# <a name="compiler-error-c2062"></a>Errore del compilatore C2062

tipo ' type ' imprevisto

Il compilatore non ha previsto un nome di tipo.

L'esempio seguente genera l'C2062:

```cpp
// C2062.cpp
// compile with: /c
struct A {  : int l; };   // C2062
struct B { private: int l; };   // OK
```

C2062 può anche verificarsi a causa del modo in cui il compilatore gestisce i tipi non definiti nell'elenco di parametri di un costruttore. Se il compilatore rileva un tipo non definito (errato), presuppone che il costruttore sia un'espressione e genera C2062. Per risolvere il, usare solo i tipi definiti in un elenco di parametri del costruttore.
