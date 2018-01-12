---
title: Compilatore avviso (livello 1) C4677 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4677
dev_langs: C++
helpviewer_keywords: C4677
ms.assetid: a8d656a1-e2ff-4f8b-9028-201765131026
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7af724ad56c3a84ffb8ef48e13d14bee97db14df
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4677"></a>Avviso del compilatore (livello 1) C4677
'function': la firma del membro non privato contiene il tipo privato 'tipo_privato'  
  
 Un tipo con accessibilità pubblica all'esterno dell'assembly utilizza un tipo che ha accesso privato all'esterno dell'assembly. Un componente che fa riferimento al tipo pubblica dell'assembly non sarà in grado di utilizzare il membro del tipo o i membri che fanno riferimento al tipo di assembly privati.  
  
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