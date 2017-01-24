---
title: "ML Nonfatal Error A2085 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "A2085"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2085"
ms.assetid: c2fef415-a32b-4249-896c-6d981fc6e327
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Nonfatal Error A2085
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**istruzione o registro non accettato in modalità corrente della CPU**  
  
 È stato effettuato un tentativo di utilizzare un'istruzione, un log, o una parola chiave utilizzata non è valida per la modalità del processore corrente.  
  
 Ad esempio, il registro a 32 bit richiedono [.386](../../assembler/masm/dot-386.md) o su.  Il controllo registra come CR0 richiedono la modalità privilegiata [.386P](../../assembler/masm/dot-386p.md) o su.  Questo errore viene anche generato per **NEAR32**,  **FAR32**e  **PIANO** parole chiave, che richiedono.**386** o su.  
  
## Vedere anche  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)