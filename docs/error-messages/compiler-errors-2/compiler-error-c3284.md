---
title: Errore del compilatore C3284 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3824
dev_langs:
- C++
helpviewer_keywords:
- C3284
ms.assetid: e582f316-e9db-4d27-9c70-fdfa737a9d5f
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 60f8335637064acb7e1c2f5c41d4ddca07b51711
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3284"></a>Errore del compilatore C3284
i vincoli per il parametro generico 'parameter' della funzione 'function' devono corrispondere ai vincoli per il parametro generico 'parameter' della funzione 'function'  
  
 Una funzione generica virtuale deve usare gli stessi vincoli di una funzione virtuale con lo stesso nome e lo stesso set di argomenti nella classe base.  
  
 L'esempio seguente genera l'errore C3284:  
  
```  
// C3284.cpp  
// compile with: /clr /c  
// C3284 expected  
public interface class IGettable {  
   int Get();  
};  
  
public interface class B {  
   generic<typename T>  
   where T : IGettable  
   virtual int mf(T t);  
};  
  
public ref class D : public B {  
public:  
   generic<typename T>  
   // Uncomment the following line to resolve.  
   // where T : IGettable  
   virtual int mf(T t) {  
      return 4;  
   }  
};  
```
