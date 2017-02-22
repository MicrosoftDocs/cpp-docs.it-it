---
title: "Avviso del compilatore (livello 4) C4709 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4709"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4709"
ms.assetid: 8abfdd45-8c70-4c27-b0fb-ca0c3f0fccf9
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 4) C4709
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

operatore virgola all'interno di un'espressione che definisce l'indice di una matrice  
  
 Quando in un'espressione che definisce l'indice di una matrice è presente una virgola, viene utilizzato il valore successivo all'ultima virgola.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C4709:  
  
```  
// C4709.cpp  
// compile with: /W4  
#include <stdio.h>  
  
int main()   
{  
    int arr[2][2];  
    arr[0][0] = 10;  
    arr[0][1] = 11;  
  
    // Prints 10, not 11  
    printf_s("\n%d",arr[0][1,0]);   // C4709  
}  
```