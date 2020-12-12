---
description: 'Altre informazioni su: errore del compilatore C2062'
title: Errore del compilatore C2062
ms.date: 11/04/2016
f1_keywords:
- C2062
helpviewer_keywords:
- C2062
ms.assetid: 6cc98353-2ddf-43ab-88a2-9cc91cdd6033
ms.openlocfilehash: ef477fba9bb1208076dd6969cb78b7495d5536e4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97328648"
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
