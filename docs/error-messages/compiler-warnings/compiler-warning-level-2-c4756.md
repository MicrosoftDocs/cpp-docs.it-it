---
title: "Avviso del compilatore (livello 2) C4756 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4756"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4756"
ms.assetid: 5a16df83-6b82-4619-83bd-319af4ef1d1d
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 2) C4756
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

overflow durante operazioni aritmetiche su costanti  
  
 Durante la compilazione è stata generata un'eccezione nell'esecuzione di operazioni aritmetiche con una costante.  
  
 Il seguente codice di esempio genera l'errore C4756:  
  
```  
// C4756.cpp  
// compile with: /W2 /Od  
int main()  
{  
   float f = 1e100+1e100;   // C4756  
}  
```