---
title: "Operatore puntatore a una funzione | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: bb576b9c-4cde-406a-9069-e8500a7da9f7
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Operatore puntatore a una funzione
Il contenuto è stato rimosso. Per informazioni, vedere l'argomento relativo all'[overload dell'operatore di chiamata di funzione](../cpp/function-call-cpp.md).  
  
```  
// operator_that_is_pointer_to_function.cpp  
// function style call on object will invoke user-defined conversion   
// if there is one. See secion 13.3.1.1.2   
typedef void(*ptf)();  
void func()  
{  
}  
struct S  
{  
   operator ptf()  
   {  
      return func;  
   }  
};  
  
int main()  
{  
   S s;  
   s();//operates as s.operator ptf()()  
}  
```  
  
## Vedere anche  
 [Conformità compilatore avanzata di Visual C\+\+ .NET 2003](../misc/visual-cpp-dotnet-2003-enhanced-compiler-conformance.md)