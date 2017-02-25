---
title: "Errore del compilatore C2373 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2373"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2373"
ms.assetid: 7a08bf0b-852d-48be-ba75-70df9f4b5951
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2373
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': ridefinizione. Modificatori di tipo differenti  
  
 L'identificatore è già definito con un modificatore di tipo diverso.  
  
 L'esempio seguente genera l'errore C2373:  
  
```  
// C2373.h void __clrcall func( void ); const int i = 20;  
```  
  
 E quindi:  
  
```  
// C2373.cpp // compile with: /c #include "C2373.h" extern void __cdecl func( void );   // C2373 extern void __clrcall func( void );   // OK extern int i;   // C2373 extern const int i;   // OK  
```