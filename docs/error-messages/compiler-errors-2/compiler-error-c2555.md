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
ms.openlocfilehash: b0cd401aa1ee3611befb39d630f48f6aed36211c
ms.sourcegitcommit: d3c41b16bf05af2149090e996d8e71cd6cd55c7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/09/2018
ms.locfileid: "48889946"
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

L'esempio seguente genera l'errore C2555:

```cpp
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