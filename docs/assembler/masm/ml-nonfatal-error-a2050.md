---
title: "ML Nonfatal Error A2050 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "A2050"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2050"
ms.assetid: 16f3a58f-4bde-48f1-b0e3-2ed9612780a5
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# ML Nonfatal Error A2050
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**numero di DCB o reale non consentito**  
  
 Una costante di numero decimale con codice binario o di cancelletto \(reale\) \(BCD\) a virgola mobile è stata utilizzata oltre a inizializzatore di dati.  
  
 Uno dei seguenti elementi verificato:  
  
-   un numero reale o un DCB è stato utilizzato in un'espressione.  
  
-   Un numero reale è stato utilizzato per inizializzare una direttiva diversa da [DWORD](../../assembler/masm/dword.md),  [QWORD](../../assembler/masm/qword.md), o  [TBYTE](../../assembler/masm/tbyte.md).  
  
-   Un DCB è stato utilizzato per inizializzare una direttiva diversa da `TBYTE`.  
  
## Vedere anche  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)