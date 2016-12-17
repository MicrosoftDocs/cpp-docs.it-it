---
title: "Errore del compilatore C2748 | Microsoft Docs"
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
  - "C2748"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2748"
ms.assetid: b63ac78b-a200-499c-afea-15af1a1e819e
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2748
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

per la creazione della matrice gestita o WinRT occorre specificare la dimensione della matrice o l'inizializzatore di matrice  
  
 Una matrice gestita o WinRT è in formato non valido.  Per altre informazioni, vedere [array](../../windows/arrays-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C2748 e mostra come risolverlo:  
  
```  
// C2748.cpp  
// compile with: /clr  
int main() {  
   array<int> ^p1 = new array<int>();   // C2748  
   // try the following line instead  
   array<int> ^p2 = new array<int>(2);  
}  
```