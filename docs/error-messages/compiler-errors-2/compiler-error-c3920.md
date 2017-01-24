---
title: "Errore del compilatore C3920 | Microsoft Docs"
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
  - "C3920"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3920"
ms.assetid: 66e91f28-ed82-4ce2-bf22-c0c74905b1ed
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3920
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator'': impossibile definire una forma suffissa dell'operatore WinRT o CLR di incremento\/decremento Se si chiama la forma suffissa dell'operatore WinRT o CLR, verrà chiamata la corrispondente forma prefissa dell'operatore WinRT o CLR \(op\_Increment\/op\_Decrement\) senza la semantica del suffisso  
  
 Windows Runtime e CLR non supportano la forma suffissa dell'operatore e non è consentita la forma suffissa degli operatori definiti dall'utente.  È possibile definire un forma suffissa dell'operatore e la forma prefissa dell'operatore verrà usata per le operazioni di pre\-incremento e post\-incremento.  
  
 L'esempio seguente genera l'errore C3920 e mostra come risolverlo:  
  
```  
// C3920.cpp  
// compile with: /clr /LD  
public value struct V {  
   static V operator ++(V me, int)  
   // try the following line instead  
   // static V operator ++(V me)  
   {   // C3920  
      me.m_i++;  
      return me;  
   }  
  
   int m_i;  
};  
  
```