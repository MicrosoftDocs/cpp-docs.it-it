---
title: Errore del compilatore C3298
ms.date: 11/04/2016
f1_keywords:
- C3298
helpviewer_keywords:
- C3298
ms.assetid: 458c2680-95bb-4d5e-895f-ce4115844193
ms.openlocfilehash: fe6913d402c6ce4df3551c159eb56a12590799cb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62222531"
---
# <a name="compiler-error-c3298"></a>Errore del compilatore C3298

'constraint_1': impossibile utilizzare 'constraint_2' come vincolo poiché 'constraint_2' contiene il vincolo ref constraint e 'constraint_1' contiene il vincolo value

Non è possibile specificare caratteristiche che si escludono a vicenda per un vincolo. Ad esempio, un parametro di tipo generico non può essere vincolato sia a un tipo valore sia a un tipo riferimento.

Per altre informazioni, vedere [vincoli su parametri di tipo generico (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3298.

```
// C3298.cpp
// compile with: /clr /c
generic<class T, class U>
where T : ref class
where U : T, value class   // C3298
public ref struct R {};
```