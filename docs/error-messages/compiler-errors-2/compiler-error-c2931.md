---
title: Errore del compilatore C2931 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2931
dev_langs:
- C++
helpviewer_keywords:
- C2931
ms.assetid: 33430407-b149-4ba3-baf8-b0dae1ea3a5d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 68c7f3a2525974c1d6c2cc26719e284538cae332
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46023553"
---
# <a name="compiler-error-c2931"></a>Errore del compilatore C2931

'class': id-classe-tipo ridefinito come funzione membro di 'identifier'

Non è possibile usare una classe generica o modello come una funzione membro di un'altra classe.

Questo errore può verificarsi quando le parentesi graffe non corrispondono.

L'esempio seguente genera l'errore C2931:

```
// C2931.cpp
// compile with: /c
template<class T>
struct TC { };
struct MyStruct {
   void TC<int>();   // C2931
};

struct TC2 { };
struct MyStruct2 {
   void TC2();
};
```

C2931 può verificarsi anche quando si usano i generics:

```
// C2931b.cpp
// compile with: /clr /c
generic<class T> ref struct GC {};
struct MyStruct {
   void GC<int>();   // C2931
   void GC2();   // OK
};
```