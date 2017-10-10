---
title: Errore del compilatore C2814 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2814
dev_langs:
- C++
helpviewer_keywords:
- C2814
ms.assetid: 7d165136-a08b-4497-a76d-60a21bb19404
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 1572d547ee8b6eb8b534e6d99027e63dae39c54d
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2814"></a>Errore del compilatore C2814
'member': impossibile annidare un tipo nativo in un tipo gestito o WinRT 'type'  
  
## <a name="example"></a>Esempio  
 Un tipo nativo non può essere annidato in un tipo CLR o WinRT. L'esempio seguente genera l'errore C2814 e mostra come risolverlo.  
  
```  
// C2814.cpp  
// compile with: /clr /c  
ref class A {  
   class B {};   // C2814  
   ref class C {};   // OK  
};  
```  

