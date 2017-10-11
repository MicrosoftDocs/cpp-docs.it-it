---
title: Errore del compilatore C3651 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3651
dev_langs:
- C++
helpviewer_keywords:
- C3651
ms.assetid: a03e692e-c219-4654-9827-8415cfa5a22d
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 74188570b1a049b6945c183ab950aebbc4ca30a7
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3651"></a>Errore del compilatore C3651
'member': non utilizzabile come override esplicito, deve essere un membro di una classe base  
  
 È stato specificato un override esplicito, ma la funzione viene sottoposto a override non è in un tipo che non è un tipo di base.  
  
 Per ulteriori informazioni, vedere [override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C3651:  
  
```  
// C3651.cpp  
// compile with: /clr /c  
ref class C {  
public:  
   virtual void func2();  
};  
  
ref class Other {  
public:  
   virtual void func();  
};  
  
ref class D : public C {  
public:  
   virtual void func() new sealed = Other::func;   // C3651  
   virtual void func2() new sealed = C::func2;   // OK  
};  
```
