---
title: "Errore del compilatore C2378 | Microsoft Docs"
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
  - "C2378"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2378"
ms.assetid: 507a91c6-ca72-48df-b3a4-2cf931c86806
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2378
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': ridefinizione. Impossibile eseguire l'overload del simbolo con typedef  
  
 L'identificatore è stato ridefinito come `typedef`.  
  
 L'esempio seguente genera l'errore C2378:  
  
```  
// C2378.cpp // compile with: /c int i; typedef int i;   // C2378 typedef int b;   // OK  
```