---
title: "Errore del compilatore C2767 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2767"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2767"
ms.assetid: e8f84178-a160-4d71-a236-07e4fcc11e96
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore del compilatore C2767
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

dimensione non corrispondente della matrice gestita o WinRT: previsto\/i N argomento\/i \- forniti M  
  
 Una dichiarazione di matrice gestita o WinRT è in formato non valido.  Per altre informazioni, vedere [array](../../windows/arrays-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C2767 e mostra come risolverlo:  
  
```  
// C2767.cpp  
// compile with: /clr  
int main() {  
   array<int> ^p1 = new array<int>(2,3); // C2767  
   array<int> ^p2 = new array<int>(2);   // OK  
}  
```