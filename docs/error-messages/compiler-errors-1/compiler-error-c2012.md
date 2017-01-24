---
title: "Errore del compilatore C2012 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2012"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2012"
ms.assetid: 9f0d8162-c0b3-4234-a41f-836fdb75c84e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2012
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

nome mancante dopo '\<'  
  
 In una direttiva `#include` manca il nome file richiesto.  
  
 L'esempio seguente genera l'errore C2012:  
  
```  
// C2012.cpp #include <   // C2012 include the filename to resolve  
```  
  
 Possibile soluzione:  
  
```  
// C2012b.cpp // compile with: /c #include <stdio.h>  
```