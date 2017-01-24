---
title: "Errore irreversibile C1021 | Microsoft Docs"
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
  - "C1021"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1021"
ms.assetid: e23171f4-ca6b-40c0-a913-a2edc6fa3766
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1021
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

comando per il preprocessore 'string' non valido  
  
 `string` non è una [direttiva per il preprocessore](../../preprocessor/preprocessor-directives.md) valida. Per risolvere l'errore, usare un nome di preprocessore valido per `string`.  
  
 L'esempio seguente genera l'errore C1021:  
  
```  
// C1021.cpp #BadPreProcName    // C1021 delete line  
```