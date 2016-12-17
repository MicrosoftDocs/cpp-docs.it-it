---
title: "Conversione: diagnostica | Microsoft Docs"
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
  - "C"
ms.assetid: 3730ca7c-0147-452d-bd4a-6a1e97e9793e
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Conversione: diagnostica
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 2.1.1.3** Come viene identificata una diagnostica  
  
 Microsoft C produce messaggi di errore nel form:  
  
```  
  
filename( line-number ) : diagnostic Cnumber message  
```  
  
 dove *filename* è il nome del file di origine in cui l'errore è stato rilevato; *line\-number* è il numero di riga in cui è stato rilevato l'errore da parte del compilatore; `diagnostic` è "error" o "warning"; `number` è un numero a quattro cifre univoco \(preceduto da un **C**, come indicato nella sintassi\) che identifica l'errore o l'avviso; `message` è un messaggio esplicativo.  
  
## Vedere anche  
 [Comportamento definito dall'implementazione](../c-language/implementation-defined-behavior.md)