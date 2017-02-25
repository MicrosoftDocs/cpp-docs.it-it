---
title: "Errore del compilatore C2313 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2313"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2313"
ms.assetid: f70eb19b-c0a3-4fb2-ade1-3890a589928d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2313
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type1': individuato dal riferimento \('type2'\) alla riga  
  
 Il tipo di eccezione ha due gestori. Il tipo per il secondo catch è un riferimento al tipo del primo.  
  
 L'esempio seguente genera l'errore C2313:  
  
```  
// C2313.cpp // compile with: /EHsc #include <eh.h> class C {}; int main() { try { throw "ooops!"; } catch( C& ) {} catch( C ) {}   // C2313 }  
```