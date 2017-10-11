---
title: Errore del compilatore C3253 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3253
dev_langs:
- C++
helpviewer_keywords:
- C3253
ms.assetid: da40be26-0f78-4730-8727-ad11cddf8869
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 5eae8e6bae423cb24e2a364ef59309d4110ccc49
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3253"></a>Errore del compilatore C3253
'function': errore dell'override esplicito  
  
 Override esplicito è stato specificato correttamente. Ad esempio, è possibile specificare un'implementazione per una sostituzione che è anche possibile specificare come pure. Per ulteriori informazioni, vedere [override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C3253:  
  
```  
// C3253.cpp  
// compile with: /clr  
public interface struct I {  
   void a();  
   void b();  
   void c();  
};  
  
public ref struct R : I {  
   virtual void a() = 0, I::a {}   // C3253  
   virtual void b() = I::a {}   // OK  
   virtual void c() = 0;   // OK  
};  
```
