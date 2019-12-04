---
title: Errore del compilatore C2652
ms.date: 11/04/2016
f1_keywords:
- C2652
helpviewer_keywords:
- C2652
ms.assetid: 6e3d1a90-a989-4088-8afd-dc82f6a2d66f
ms.openlocfilehash: cedee3f1e3289aaf0ea38d75b6c812b61f891435
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756123"
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
