---
title: Errore del compilatore C3183 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3183
dev_langs:
- C++
helpviewer_keywords:
- C3183
ms.assetid: dbd0f020-c739-43c9-947e-9ce21537331b
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 80f8c8c6aa9c96338e37d9d709dd61337ccfae73
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3183"></a>Errore del compilatore C3183
impossibile definire una classe, uno struct o un'unione senza nome all'interno del tipo gestito o WinRT 'type'  
  
Un tipo incorporato in un tipo gestito o WinRT deve essere denominato.  
  
L'esempio seguente genera l'errore C3183:  
  
```  
// C3183a.cpp  
// compile with: /clr /c  
ref class Test  
{  
   ref class  
   {  // C3183, delete class or name it  
      int a;  
      int b;  
   };  
};  
```  

