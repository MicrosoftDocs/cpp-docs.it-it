---
description: 'Altre informazioni su: errore del compilatore C2652'
title: Errore del compilatore C2652
ms.date: 11/04/2016
f1_keywords:
- C2652
helpviewer_keywords:
- C2652
ms.assetid: 6e3d1a90-a989-4088-8afd-dc82f6a2d66f
ms.openlocfilehash: 6d0f85a089c527ce299e007ce04d96ac68daaf56
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286176"
---
# <a name="compiler-error-c2652"></a>Errore del compilatore C2652

' Identifier ': costruttore di copia non valido: il primo parametro non deve essere un'Identifier '

Il primo parametro del costruttore di copia è dello stesso tipo della classe, della struttura o dell'Unione per cui è definito. Il primo parametro può essere un riferimento al tipo, ma non il tipo stesso.

L'esempio seguente genera l'C2651:

```cpp
// C2652.cpp
// compile with: /c
class A {
   A( A );   // C2652 takes an A
};
class B {
   B( B& );   // OK, reference to B
};
```
