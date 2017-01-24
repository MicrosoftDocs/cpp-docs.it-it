---
title: "Errore del compilatore C2798 | Microsoft Docs"
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
  - "C2798"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2798"
ms.assetid: fb0cd861-b228-4f81-8090-e28344a727e0
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2798
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'super::membro' è ambiguo  
  
 Più strutture ereditate contengono il membro a cui si fa riferimento con [super](../../cpp/super.md).  Per correggere questo errore, eseguire una delle operazioni elencate di seguito.  
  
-   Rimuovere B1 o B2 dall'elenco di ereditarietà di D.  
  
-   Modificare il nome del membro dati in B1 o B2.  
  
 Il seguente codice di esempio genera l'errore C2798:  
  
```  
// C2798.cpp  
struct B1 {  
   int i;  
};  
  
struct B2 {  
   int i;  
};  
  
struct D : B1, B2 {  
   void g() {  
      __super::i = 4; // C2798  
   }  
};  
```