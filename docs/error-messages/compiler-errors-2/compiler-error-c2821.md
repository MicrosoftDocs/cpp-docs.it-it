---
title: "Errore del compilatore C2821 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2821"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2821"
ms.assetid: e8d71988-a968-4484-94db-e8c3bad74a4a
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2821
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il primo parametro formale di 'operator new' deve essere 'unsigned int'  
  
 Il primo parametro formale dell'operatore [operator new](../Topic/operator%20new%20\(%3Cnew%3E\).md) deve essere un unsigned `int`.  
  
 Il seguente codice di esempio genera l'errore C2821:  
  
```  
// C2821.cpp  
// compile with: /c  
void * operator new( /* unsigned int,*/ void * );   // C2821  
void * operator new( unsigned int, void * );  
```