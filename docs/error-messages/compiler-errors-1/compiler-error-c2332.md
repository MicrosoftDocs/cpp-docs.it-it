---
title: "Errore del compilatore C2332 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2332"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2332"
ms.assetid: fb05cd68-e271-4bea-9fb7-ef4edb0a26ac
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2332
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'typedef': nome tag mancante  
  
 È stata rilevata una definizione di tipo incompleta.  
  
 Il seguente codice di esempio genera l'errore C2332:  
  
```  
// C2332.cpp  
// compile with: /c  
struct S {  
   int i;  
};  
  
typedef struct * pS;   // C2332  
typedef struct S* pS;   // OK  
  
int get_S_i(pS p) {  
   return p->i;  
}  
```