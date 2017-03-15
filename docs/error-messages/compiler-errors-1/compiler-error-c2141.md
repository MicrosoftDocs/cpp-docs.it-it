---
title: "Errore del compilatore C2141 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2141"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2141"
ms.assetid: 10cf770f-0500-4220-ac90-a863b7ea5fe6
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# Errore del compilatore C2141
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

overflow della dimensione della matrice  
  
 Una matrice supera il limite di 2 GB.  Ridurre la dimensione della matrice.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2141:  
  
```  
// C2141.cpp  
// processor: IPF  
class A {  
   short m_n;  
};  
  
int main()  
{  
   A* pA = (A*)(-1);  
   pA = new A[0x8000000000000001];   // C2141  
  
   A* pA2 = (A*)(-1);  
   pA2 = new A[0x80000000000000F];   // OK  
}  
```