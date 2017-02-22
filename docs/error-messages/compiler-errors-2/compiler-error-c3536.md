---
title: "Errore del compilatore C3536 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3536"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3536"
ms.assetid: 8d866075-866b-49eb-9979-ee27b308f7e3
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3536
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': non può essere utilizzato prima che venga inizializzato  
  
 Il simbolo indicato non può essere utilizzato prima che venga inizializzato.  In pratica, questo significa che una variabile non può essere utilizzata per inizializzare se stessa.  
  
### Per correggere l'errore  
  
1.  Non inizializzare una variabile con se stessa.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3536 perché ogni variabile è stata inizializzata con se stessa.  
  
```  
// C3536.cpp  
// Compile with /Zc:auto  
int main()  
{  
   auto a = a;     //C3536  
   auto b = &b;    //C3536  
   auto c = c + 1; //C3536  
   auto* d = &d;   //C3536  
   auto& e = e;    //C3536  
   return 0;  
};  
```  
  
## Vedere anche  
 [Parola chiave auto](../../cpp/auto-keyword.md)