---
title: "Errore del compilatore C3019 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3019"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3019"
ms.assetid: 31a6d9b6-d29f-4499-9ad8-48dd751e87c7
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3019
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

formato non valido dell'incremento nell'istruzione 'for' OpenMP  
  
 Nell'espressione di incremento di un ciclo `for` OpenMP deve essere utilizzata la variabile di indice sia a sinistra che a destra dell'operatore.  
  
 Il seguente codice di esempio genera l'errore C3019:  
  
```  
// C3019.cpp  
// compile with: /openmp  
int main()  
{  
   int i = 0, j = 1, n = 3;  
  
   #pragma omp parallel  
   {  
      #pragma omp for  
      for (i = 0; i < 10; i = j + n)   // C3019  
      // Try the following line instead:  
      // for (i = 0; i < 10; i++)  
         j *= 2;  
   }  
}  
```