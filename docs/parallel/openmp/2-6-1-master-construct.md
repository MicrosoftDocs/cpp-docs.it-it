---
title: "2.6.1 master Construct | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: c092064b-ea57-4d4e-9c99-a004d65656fe
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.6.1 master Construct
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**master** la direttiva identifica un costrutto che specifica un blocco strutturato eseguito dal thread principale del team.  La sintassi di **master** la direttiva è la seguente:  
  
```  
#pragma omp master new-line  
   structured-block  
```  
  
 Altri thread nel team non eseguono il blocco strutturato associato.  Non esiste una barriera implicita all'ingresso a o all'uscita dal costrutto master.