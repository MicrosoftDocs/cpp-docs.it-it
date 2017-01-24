---
title: "Errore del compilatore C2094 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2094"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2094"
ms.assetid: 9e4f8f88-f189-46e7-91c9-481bacc7af87
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2094
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

etichetta 'identifier' non definita  
  
 L'etichetta usata da un'istruzione [goto](../Topic/goto%20\(C%23%20Reference\).md) non esiste nella funzione.  
  
 L'esempio seguente genera l'errore C2094:  
  
```  
// C2094.c int main() { goto test; }   // C2094  
```  
  
 Possibile soluzione:  
  
```  
// C2094b.c int main() { goto test; test: { } }  
```