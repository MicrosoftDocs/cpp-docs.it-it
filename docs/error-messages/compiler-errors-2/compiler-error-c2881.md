---
title: "Errore del compilatore C2881 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2881"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2881"
ms.assetid: b49c63c2-b064-4d4b-a75e-ddd2af947522
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2881
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'spazionomi1': è già utilizzato come alias per 'spazionomi2'  
  
 Non è possibile utilizzare lo stesso nome come alias per due spazi dei nomi.  
  
 Il seguente codice di esempio genera l'errore C2881:  
  
```  
// C2881.cpp  
// compile with: /c  
namespace A {  
   int k;  
}  
  
namespace B {  
   int i;  
}  
  
namespace C = A;  
namespace C = B;   // C2881 C is already an alias for A  
```