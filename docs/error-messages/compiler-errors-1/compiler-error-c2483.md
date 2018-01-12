---
title: Errore del compilatore C2483 | Documenti Microsoft
ms.custom: 
ms.date: 09/15/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2483
dev_langs: C++
helpviewer_keywords: C2483
ms.assetid: 5762b325-914b-442d-a604-e4617ba04038
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5f7f9f30724c02d44e054bf16ff1460370c30e06
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2483"></a>Errore del compilatore C2483

>'*identificatore*': l'oggetto con un costruttore o distruttore non può essere dichiarato 'thread'

Questo messaggio di errore è obsoleto in Visual Studio 2015 e versioni successive. Nelle versioni precedenti, le variabili dichiarate con la `thread` attributo non può essere inizializzato con un costruttore o in un'altra espressione che richiede la valutazione in fase di esecuzione. È necessaria un'espressione statica per inizializzare `thread` dati.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2483 in Visual Studio 2013 e versioni precedenti.

```cpp
// C2483.cpp
// compile with: /c
__declspec(thread) struct A {
   A(){}
   ~A(){}
} aa;   // C2483 error  

__declspec(thread) struct B {} b;   // OK
```

## <a name="see-also"></a>Vedere anche

[thread](../../cpp/thread.md)