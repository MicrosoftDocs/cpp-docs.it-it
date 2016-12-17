---
title: "Errore del compilatore C2380 | Microsoft Docs"
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
  - "C2380"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2380"
ms.assetid: 717b1e6e-ddfe-4bac-a5f3-7f9a4dcb1572
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2380
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

tipi prima di 'identificatore'. Si tratta di un costruttore con tipo restituito o di una ridefinizione non valida del nome di classe corrente?  
  
 Un costruttore restituisce un valore o ridefinisce il nome della classe.  
  
 Il seguente codice di esempio genera l'errore C2326:  
  
```  
// C2380.cpp  
// compile with: /c  
class C {  
public:  
   int C();   // C2380, specifies an int return  
   int C;   // C2380, redefinition of i  
   C();   // OK  
};  
```