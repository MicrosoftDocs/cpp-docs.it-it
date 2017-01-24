---
title: "Errore del compilatore C2362 | Microsoft Docs"
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
  - "C2362"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2362"
ms.assetid: 7aafecbc-b3cf-45a6-9ec3-a17e3f222511
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2362
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

inizializzazione di 'identificatore' ignorata da un'istruzione 'goto etichetta'  
  
 Quando si compila con [\/Za](../../build/reference/za-ze-disable-language-extensions.md), il passaggio all'etichetta impedisce l'inizializzazione dell'identificatore.  
  
 Non è possibile effettuare un salto oltre una dichiarazione con un inizializzatore, a meno che questa non sia contenuta in un blocco al quale non si accede o che la variabile non sia già stata inizializzata.  
  
 Il seguente codice di esempio genera l'errore C2326:  
  
```  
// C2362.cpp  
// compile with: /Za  
int main() {  
   goto label1;  
   int i = 1;      // C2362, initialization skipped  
label1:;  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2362b.cpp  
// compile with: /Za  
int main() {  
   goto label1;  
   {  
      int j = 1;   // OK, this block is never entered  
   }  
label1:;  
}  
```