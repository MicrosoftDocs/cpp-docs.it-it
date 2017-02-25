---
title: "Errore del compilatore C3768 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3768"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3768"
ms.assetid: 091f0d53-1dff-43fd-813d-5c43c85b6ab0
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3768
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile accettare l'indirizzo di una funzione vararg virtuale in codice gestito pure  
  
 Quando si esegue la compilazione con `/clr:pure`, non è possibile accettare l'indirizzo di una funzione `vararg` virtuale.  
  
 Il seguente codice di esempio genera l'errore C3768:  
  
```  
// C3768.cpp  
// compile with: /clr:pure  
struct A  
{  
   virtual void f(...);  
};  
  
int main()  
{  
   &(A::f);   // C3768  
}  
```