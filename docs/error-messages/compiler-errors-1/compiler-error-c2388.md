---
title: "Errore del compilatore C2388 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2388"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2388"
ms.assetid: 764ad2d7-cb04-425f-ba30-70989488c4a4
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore del compilatore C2388
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': impossibile dichiarare un simbolo sia con \_\_declspec\(appdomain\) che con \_\_declspec\(process\)  
  
 Non è possibile usare i modificatori `appdomain` e `process` `__declspec` sullo stesso simbolo. L'archiviazione per una variabile è disponibile per processo o per dominio applicazione.  
  
 Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).  
  
 L'esempio seguente genera l'errore C2388:  
  
```  
// C2388.cpp // compile with: /clr /c __declspec(process) __declspec(appdomain) int i;   // C2388 __declspec(appdomain) int i;   // OK  
```