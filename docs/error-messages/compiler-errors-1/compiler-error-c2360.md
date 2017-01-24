---
title: "Errore del compilatore C2360 | Microsoft Docs"
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
  - "C2360"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2360"
ms.assetid: 51bfd2ee-8108-4777-aa93-148b9cebfa83
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2360
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

inizializzazione di 'identificatore' ignorata da un'etichetta 'case'  
  
 È possibile che l'inizializzazione di `identifier` venga ignorata in un'istruzione `switch`.  Non è possibile effettuare un salto oltre una dichiarazione con un inizializzatore, a meno che non sia contenuta in un blocco. Se non è dichiarata in un blocco, la variabile si trova nella propria area di validità fino al termine dell'istruzione `switch`.  
  
 Il seguente codice di esempio genera l'errore C2360:  
  
```  
// C2360.cpp  
int main() {  
   int x = 0;  
   switch ( x ) {  
   case 0 :  
      int i = 1;  
      { int j = 1; }  
   case 1 :   // C2360  
      int k = 1;  
   }  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2360b.cpp  
int main() {  
   int x = 0;  
   switch ( x ) {  
   case 0 :  
      { int j = 1; int i = 1;}  
   case 1 :  
      int k = 1;  
   }  
}  
```