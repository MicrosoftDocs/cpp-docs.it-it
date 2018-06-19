---
title: Compilatore avviso (livello 1) C4624 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4624
dev_langs:
- C++
helpviewer_keywords:
- C4624
ms.assetid: 14f61769-d92e-482b-9515-debd87b30a66
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8d11bc5c8b5034fa305a22ba893c62faff18cc38
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33281034"
---
# <a name="compiler-warning-level-1-c4624"></a>Avviso del compilatore (livello 1) C4624
'derived class': il distruttore è stato definito in modo implicito come eliminato perché un distruttore della classe di base è inaccessibile o è stato eliminato  
  
 Un distruttore non è accessibile o è stato eliminato in una classe di base e quindi non è stato generato per una classe derivata. Qualsiasi tentativo di creare un oggetto di questo tipo nello stack causerà un errore del compilatore.  
  
 L'esempio seguente genera l'errore C4624 e mostra come risolverlo:  
  
```  
// C4624.cpp  
// compile with: /W1 /c  
class B {  
// Uncomment the following line to fix.  
// public:  
   ~B();  
};  
  
class D : public B {};   // C4624 B's destructor not public  
```