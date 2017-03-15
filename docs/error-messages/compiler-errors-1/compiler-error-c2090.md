---
title: "Errore del compilatore C2090 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2090"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2090"
ms.assetid: e8176e55-382b-453d-aa27-6597f0274afd
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2090
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la funzione restituisce una matrice  
  
 Una funzione non può restituire una matrice.  È invece necessario che restituisca un puntatore a una matrice.  
  
 Il seguente codice di esempio genera l'errore C2090:  
  
```  
// C2090.cpp  
int func1(void)[] {}   // C2090  
```  
  
 Possibile soluzione:  
  
```  
// C2090b.cpp  
// compile with: /c  
int* func2(int * i) {  
   return i;  
}  
```