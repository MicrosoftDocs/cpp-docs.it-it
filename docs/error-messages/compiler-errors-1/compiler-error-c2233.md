---
title: "Errore del compilatore C2233 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2233"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2233"
ms.assetid: 236bdf0b-9607-4f26-a249-d8def0b1333c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2233
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': le matrici di oggetti che includono matrici di dimensioni zero non sono valide  
  
 Ogni oggetto di una matrice deve contenere almeno un elemento.  
  
 Il seguente codice di esempio genera l'errore C2233:  
  
```  
// C2233.cpp  
// compile with: /c  
class A {  
   char somearray[1];  
};  
  
class B {  
   char zeroarray[];  
};  
  
A array[100];   // OK  
B array2[100];   // C2233  
```