---
title: Compilatore avviso (livello 1) C4461 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4461
dev_langs:
- C++
helpviewer_keywords:
- C4461
ms.assetid: 104ffecc-3dd4-4cb1-89a8-81154fbe46d9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2884daeb7497f6664cecf864ec705891cac62f48
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33278633"
---
# <a name="compiler-warning-level-1-c4461"></a>Avviso del compilatore (livello 1) C4461
'type': questa classe ha un finalizzatore 'finalizzatore' ma non un distruttore 'dtor'  
  
 La presenza di un finalizzatore in un tipo implica le risorse da eliminare. A meno che un finalizzatore viene chiamato in modo esplicito dal distruttore del tipo, common language runtime determina quando eseguire il finalizzatore, dopo l'oggetto esce dall'ambito.  
  
 Se si definisce un distruttore del tipo e chiama in modo esplicito il finalizzatore dal distruttore, è possibile eseguire in modo deterministico il finalizzatore.  
  
 Per ulteriori informazioni, vedere [distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4461.  
  
```  
// C4461.cpp  
// compile with: /W1 /clr /c  
ref class A {  
protected:  
   !A() {}   // C4461  
};  
  
// OK  
ref struct B {  
   ~B() {  
      B::!B();  
   }  
  
   !B() {}  
};  
```