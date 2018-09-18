---
title: Errore del compilatore C2555 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2555
dev_langs:
- C++
helpviewer_keywords:
- C2555
ms.assetid: 5e49ebb8-7c90-457a-aa12-7ca7ab6574b2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8f91ec33db2d3a7b6772556233a3c99b501ede76
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46017339"
---
# <a name="compiler-error-c2555"></a>Errore del compilatore C2555

'class1::function1': funzione virtual in override tipo restituito è diverso e non è una covariante da 'classe2:: funzione2'

Una funzione virtuale e una funzione esegue l'override derivata hanno elenchi di parametri sono identici ma restituire tipi diversi. Una funzione di override in una classe derivata non può essere diversa da una funzione virtuale in una classe base solo per il tipo restituito.

Per risolvere questo errore, il cast del valore restituito dopo la chiamata della funzione virtuale.

È inoltre possibile visualizzare questo errore se esegue la compilazione con /clr.   Ad esempio, l'equivalente in Visual C++ la dichiarazione seguente di c#:

```
Guid[] CheckSources(Guid sourceID, Guid[] carouselIDs);
```

is

```
Guid CheckSources(Guid sourceID, Guid carouselIDs[]) [];
```

Per altre informazioni su C2555, vedere l'argomento della Knowledge Base Q240862.

L'esempio seguente genera l'errore C2555:

```
// C2555.cpp
// compile with: /c
struct X {
   virtual void func();
};
struct Y : X {
   char func();  // C2555
   void func2();   // OK
};
```