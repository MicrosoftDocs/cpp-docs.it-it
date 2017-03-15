---
title: "Errore del compilatore C2032 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2032"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2032"
ms.assetid: 625d7c83-70b6-42c2-a558-81fbc0026324
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2032
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': la funzione non può essere membro di struttura\/unione 'strutturaounione'  
  
 Nella struttura o unione è presente una funzione membro consentita in C\+\+, ma non in C.  Per risolvere l'errore, effettuare la compilazione come un programma C\+\+ o rimuovere la funzione membro.  
  
 Il seguente codice di esempio genera l'errore C2032:  
  
```  
// C2032.c  
struct z {  
   int i;  
   void func();   // C2032  
};  
```  
  
 Possibile soluzione:  
  
```  
// C2032b.c  
// compile with: /c  
struct z {  
   int i;  
};  
```