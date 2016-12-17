---
title: "Errore del compilatore C3923 | Microsoft Docs"
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
  - "C3923"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3923"
ms.assetid: db8838e9-6344-4cd6-83e0-a8abeb12c4c0
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3923
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'member': le definizioni locali di classe, struct o unione non sono consentite in una funzione membro di una classe gestita o WinRT  
  
## Esempio  
 L'esempio seguente genera l'errore C3923.  
  
```  
// C3923.cpp  
// compile with: /clr /c  
ref struct x {  
   void Test() {  
      struct a {};   // C3923  
      class b {};   // C3923  
      union c {};   // C3923  
   }  
};  
```