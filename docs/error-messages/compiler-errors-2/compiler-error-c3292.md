---
title: "Errore del compilatore C3292 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3292"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3292"
ms.assetid: ead485cc-5471-4e10-b361-300589ff5b70
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Errore del compilatore C3292
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile riaprire lo spazio dei nomi cli  
  
 Lo spazio dei nomi cli non può essere dichiarato nel codice.  Per altre informazioni, vedere [Platform, default, and cli Namespaces](../../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3292.  
  
```  
// C3292.cpp // compile with: /clr /c namespace cli {};   // C3292  
```