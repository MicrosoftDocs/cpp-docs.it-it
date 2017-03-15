---
title: "Avviso del compilatore (livello 1) C4926 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4926"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4926"
ms.assetid: 5717fce0-146f-4ef2-bde0-e9a01c0922d1
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4926
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': simbolo già definito. Attributi ignorati.  
  
 È stata trovata una dichiarazione con prototipo ma un costrutto con attributi con lo stesso nome esiste già. Gli attributi per la dichiarazione con prototipo vengono ignorati.  
  
 L'esempio seguente genera l'errore C4926:  
  
```  
// C4926.cpp // compile with: /W1 [module(name="MyLib")]; [coclass] struct a { }; [coclass] struct a;   // C4926 int main() { }  
```