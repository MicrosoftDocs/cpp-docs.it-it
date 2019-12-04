---
title: Errore del compilatore C3298
ms.date: 11/04/2016
f1_keywords:
- C3298
helpviewer_keywords:
- C3298
ms.assetid: 458c2680-95bb-4d5e-895f-ce4115844193
ms.openlocfilehash: d5e9586b026e0092491c80c23f55080354c9e465
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760075"
---
# <a name="compiler-error-c3298"></a>Errore del compilatore C3298

'constraint_1': impossibile utilizzare 'constraint_2' come vincolo poiché 'constraint_2' contiene il vincolo ref constraint e 'constraint_1' contiene il vincolo value

Non è possibile specificare caratteristiche che si escludono a vicenda per un vincolo. Ad esempio, un parametro di tipo generico non può essere vincolato sia a un tipo valore sia a un tipo riferimento.

Per altre informazioni, vedere [Vincoli su parametri di tipo generico (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3298.

```cpp
// C3298.cpp
// compile with: /clr /c
generic<class T, class U>
where T : ref class
where U : T, value class   // C3298
public ref struct R {};
```
