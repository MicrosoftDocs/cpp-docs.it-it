---
title: "Errore del compilatore C3651 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3651"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3651"
ms.assetid: a03e692e-c219-4654-9827-8415cfa5a22d
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3651
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': non utilizzabile come override esplicito. Deve essere un membro di una classe base  
  
 È stato specificato un override esplicito, ma la funzione da sottoporre a override fa parte di un tipo che non è un tipo base.  
  
 Per ulteriori informazioni, vedere [Override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
 Il seguente codice di esempio genera l'errore C3651:  
  
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