---
title: "Errore irreversibile C1014 | Microsoft Docs"
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
  - "C1014"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1014"
ms.assetid: 4c01ef70-e765-4d07-a3fe-a11c19fb610b
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1014
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

troppi file di inclusione: profondità \= level  
  
 Le direttive `#include` sono eccessivamente annidate. Le direttive annidate possono includere file aperti. Il file di origine che contiene la direttiva viene conteggiato come file singolo.