---
title: "Errore del compilatore C3764 | Microsoft Docs"
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
  - "C3764"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3764"
ms.assetid: af5d254c-8d4a-4dda-aad9-3c5c1257c868
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3764
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione\_override': impossibile eseguire l'override del metodo della classe base 'funzione\_classe\_base'  
  
 Il compilatore ha rilevato un override in formato non corretto.  Ad esempio, la funzione della classe base non è `virtual`.  Per ulteriori informazioni, vedere [override](../../windows/override-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3764:  
  
```  
// C3764.cpp  
// compile with: /clr /c  
public ref struct A {  
   void g(int);  
   virtual void h(int);  
};  
  
public ref struct B : A {  
   virtual void g(int) override {}   // C3764  
   virtual void h(int) override {}   // OK  
};  
```  
  
## Esempio  
 L'errore C3764 può verificarsi anche quando un metodo di una classe base viene sottoposto a override esplicito e denominato.  Nell'esempio seguente viene generato l'errore C3764:  
  
```  
// C3764_b.cpp  
// compile with: /clr /c  
ref struct A {  
   virtual void Test() {}  
};  
  
ref struct B : public A {  
   virtual void Test() override {}  
   virtual void Test2() = A::Test {}   // C3764  
};  
```