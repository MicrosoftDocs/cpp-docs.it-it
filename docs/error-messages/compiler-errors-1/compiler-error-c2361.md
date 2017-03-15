---
title: "Errore del compilatore C2361 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2361"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2361"
ms.assetid: efbdaeb9-891c-4f7d-97da-89088a8413f3
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2361
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

inizializzazione di 'identificatore' ignorata da un'etichetta 'default'  
  
 È possibile che l'inizializzazione di `identifier` venga ignorata in un'istruzione `switch`.  Non è possibile effettuare un salto oltre una dichiarazione con un inizializzatore, a meno che non sia contenuta in un blocco. Se non è dichiarata in un blocco, la variabile si trova nella propria area di validità fino al termine dell'istruzione `switch`.  
  
 Il seguente codice di esempio genera l'errore C2361:  
  
```  
// C2361.cpp  
void func( void ) {  
   int x;  
   switch (x) {  
   case 0 :  
      int i = 1;  
      { int j = 1; }  
   default :   // C2361 error  
      int k = 1;  
   }  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2361b.cpp  
// compile with: /c  
void func( void ) {  
   int x = 0;  
   switch (x) {  
   case 0 :  
      { int j = 1; int i = 1;}  
   default :  
      int k = 1;  
   }  
}  
```