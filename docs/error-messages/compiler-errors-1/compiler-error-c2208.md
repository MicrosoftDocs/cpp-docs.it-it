---
title: "Errore del compilatore C2208 | Microsoft Docs"
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
  - "C2208"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2208"
ms.assetid: 9ae704bc-bf70-45f1-8e47-0470f21edd4e
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2208
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': tipo non utilizzato da alcun membro definito  
  
 Un identificatore che si risolve in un nome di tipo si trova in una dichiarazione di aggregato, ma il compilatore non può dichiarare un membro.  
  
 Il seguente codice di esempio genera l'errore C2208:  
  
```  
// C2208.cpp  
class C {  
   C;   // C2208  
   C(){}   // OK  
};  
```