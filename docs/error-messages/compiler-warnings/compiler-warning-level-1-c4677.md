---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4677'
title: Avviso del compilatore (livello 1) C4677
ms.date: 11/04/2016
f1_keywords:
- C4677
helpviewer_keywords:
- C4677
ms.assetid: a8d656a1-e2ff-4f8b-9028-201765131026
ms.openlocfilehash: e2edd37149fd4242cc1a0f5c5df29fe4fe21e17f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97285422"
---
# <a name="compiler-warning-level-1-c4677"></a>Avviso del compilatore (livello 1) C4677

' Function ': la firma del membro non privato contiene il tipo privato ' private_type ' dell'assembly

Un tipo con accessibilità pubblica all'esterno dell'assembly usa un tipo con accesso privato all'esterno dell'assembly. Un componente che fa riferimento al tipo di assembly pubblico non sarà in grado di utilizzare il membro o i membri del tipo che fanno riferimento al tipo privato dell'assembly.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4677.

```cpp
// C4677.cpp
// compile with: /clr /c /W1
delegate void TestDel();
public delegate void TestDel2();

public ref class MyClass {
public:
   static event TestDel^ MyClass_Event;   // C4677
   static event TestDel2^ MyClass_Event2;   // OK
};
```
