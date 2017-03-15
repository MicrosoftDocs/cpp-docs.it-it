---
title: "Punto di dichiarazione in C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "punto di dichiarazione"
ms.assetid: 92ea8707-80cb-497c-b479-f907b8401859
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Punto di dichiarazione in C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un nome viene considerato dichiarato immediatamente dopo il proprio dichiaratore e prima del proprio inizializzatore \(quest'ultimo è facoltativo\).  Per altre informazioni sui dichiaratori, vedere [Dichiaratori](http://msdn.microsoft.com/it-it/8a7b9b51-92bd-4ac0-b3fe-0c4abe771838).  
  
 Si consideri l'esempio seguente:  
  
```  
// point_of_declaration1.cpp  
// compile with: /W1   
double dVar = 7.0;  
int main()  
{  
   double dVar = dVar;   // C4700  
}  
```  
  
 Se il momento della dichiarazione fosse *dopo* l'inizializzazione, la variabile locale `dVar` verrebbe inizializzata su 7.0, che corrisponde al valore della variabile globale `dVar`.  Tuttavia, poiché non è questo il caso, `dVar` viene inizializzata su un valore non definito.  
  
## Vedere anche  
 [Ambito](../cpp/scope-visual-cpp.md)