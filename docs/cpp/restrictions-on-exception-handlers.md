---
title: "Limitazioni ai gestori di eccezioni | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione eccezioni, gestori eccezioni"
  - "restrizioni, gestori eccezioni"
ms.assetid: 31d63524-0e8c-419f-b87c-061f4c0ea470
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Limitazioni ai gestori di eccezioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La limitazione principale nell'utilizzo dei gestori eccezioni è che non è possibile utilizzare un'istruzione `goto` per passare a un blocco di istruzioni `__try`.  È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo.  È possibile uscire da un blocco di istruzioni `__try` e annidare i gestori di eccezione quando lo si desidera.  
  
## Vedere anche  
 [Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)   
 [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md)