---
title: "Errore irreversibile U1070 di NMAKE  | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "U1070"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1070"
ms.assetid: 8639fc39-b4b1-48f5-ac91-0e9fb61680fd
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile U1070 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

ciclo nella definizione macro "nomemacro"  
  
 Nella definizione di macro specificata è contenuta una macro nella cui definizione è, a sua volta, inserita la macro specificata.  Le definizioni di macro circolari non sono valide.  
  
## Esempio  
 Le seguenti definizioni di macro  
  
```  
ONE=$(TWO)  
TWO=$(ONE)  
```  
  
 provocano l'errore seguente:  
  
```  
cycle in macro definition 'TWO'  
```