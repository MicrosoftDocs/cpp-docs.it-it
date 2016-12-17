---
title: "Errore del compilatore C3631 | Microsoft Docs"
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
  - "C3631"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3631"
ms.assetid: 88cbd2d5-6fef-4940-be34-d8cbe816d3da
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3631
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': impossibile eseguire l'overload di eventi gestiti o WinRT  
  
 Non è possibile eseguire l'overload di un evento gestito o WinRT.  
  
## Esempio  
 C3631 è raggiungibile solo usando **\/clr:oldSyntax**.  
  
 L'esempio seguente genera l'errore C3631.  
  
```  
// C3631.cpp  
// compile with: /clr:oldSyntax /c  
  
public __gc struct S2 {  
   __event void func1();     
   __event void func1(int);   // C3631 delete second declaration of func1  
};  
  
public __gc struct S1 {  
   __delegate void del1();  
   __delegate void del2();  
   __event int add_myE(del1*) { return 0; }     
   __event int remove_myE(del1*) { return 0; }     
   __event int add_myE(del2*) { return 0; }   // C3631  
   __event int remove_myE(del2*) { return 0; }   // C3631  
};  
```