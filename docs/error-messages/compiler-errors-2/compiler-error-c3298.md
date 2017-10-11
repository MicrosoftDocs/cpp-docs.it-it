---
title: Errore del compilatore C3298 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3298
dev_langs:
- C++
helpviewer_keywords:
- C3298
ms.assetid: 458c2680-95bb-4d5e-895f-ce4115844193
caps.latest.revision: 3
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a21b2d28120cb5e1c936b632d67ff28bb6568210
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3298"></a>Errore del compilatore C3298
'constraint_1': impossibile utilizzare 'constraint_2' come vincolo poiché 'constraint_2' contiene il vincolo ref constraint e 'constraint_1' contiene il vincolo value  
  
 Non è possibile specificare caratteristiche che si escludono a vicenda per un vincolo. Ad esempio, un parametro di tipo generico non può essere vincolato sia a un tipo valore sia a un tipo riferimento.  
  
 Per ulteriori informazioni, vedere [vincoli sui parametri di tipo generico (C + + CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
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
