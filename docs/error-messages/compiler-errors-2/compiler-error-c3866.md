---
title: "Errore del compilatore C3866 | Microsoft Docs"
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
  - "C3866"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3866"
ms.assetid: 685870af-2440-4cdf-a6cb-284a5b96ef9d
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3866
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

chiamata di funzione senza elenco di argomenti  
  
 Un distruttore o finalizzatore in una funzione membro non statica non ha un elenco di argomenti.  
  
 Il seguente codice di esempio genera l'errore C3866:  
  
```  
// C3866.cpp  
// compile with: /c  
class C {  
   ~C();  
   void f() {  
      this->~C;   // C3866  
      this->~C();   // OK  
   }  
};  
```