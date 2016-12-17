---
title: "Caratteri speciali nelle macro | Microsoft Docs"
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
helpviewer_keywords: 
  - "caratteri speciali, in macro NMAKE"
ms.assetid: c0a06cfc-7103-4ee2-a585-e8f6e85dccd7
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Caratteri speciali nelle macro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un simbolo di cancelletto \(\#\) dopo una definizione indica un commento.  Per specificare un simbolo di cancelletto in una macro, utilizzare un accento circonflesso \(^\), come in ^\#.  
  
 Il simbolo di dollaro \($\) specifica la chiamata di una macro.  Per specificare un simbolo $, utilizzare $$.  
  
 Per estendere una definizione a una nuova riga, terminare la riga con una barra rovesciata \(\\\).  Quando la macro viene chiamata, la barra rovesciata e il carattere di nuova riga vengono sostituiti da uno spazio.  Per specificare una barra rovesciata al termine di una riga, farla precedere da un accento circonflesso \(^\) o farla seguire da un identificatore di commento \(\#\).  
  
 Per specificare un carattere di nuova riga, terminare la riga con un accento circonflesso \(^\), come indicato di seguito:  
  
```  
CMDS = cls^  
dir  
```  
  
## Vedere anche  
 [Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)