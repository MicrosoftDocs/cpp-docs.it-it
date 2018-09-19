---
title: Compilatore avviso (livello 1) C4677 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4677
dev_langs:
- C++
helpviewer_keywords:
- C4677
ms.assetid: a8d656a1-e2ff-4f8b-9028-201765131026
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b6a3f57ba0e3d4c15c83711a86bb8482fa8b0596
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46049386"
---
# <a name="compiler-warning-level-1-c4677"></a>Avviso del compilatore (livello 1) C4677

'function': firma del membro non privato contiene il tipo privato dell'assembly 'tipo_privato'

Un tipo con accessibilità pubblica all'esterno dell'assembly Usa un tipo che ha accesso privato all'esterno dell'assembly. Un componente che fa riferimento al tipo pubblica dell'assembly non sarà in grado di usare il membro del tipo o i membri che fanno riferimento al tipo di assembly privati.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4677.

```
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