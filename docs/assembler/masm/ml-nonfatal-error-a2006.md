---
title: "ML Nonfatal Error A2006 | Microsoft Docs"
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
  - "A2006"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2006"
ms.assetid: b8a8f096-95df-42b5-85ed-d2530560a84c
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Nonfatal Error A2006
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**simbolo non definito: identificatore**  
  
 Si è tentato di utilizzare un simbolo non è definito.  
  
 Uno dei seguenti elementi può verificarsi:  
  
-   Un simbolo non è definito.  
  
-   Un campo non è un membro della struttura specificata.  
  
-   Un simbolo è definito in un file di inclusione non incluso.  
  
-   un simbolo esterno è stato utilizzato senza [ESTERNO](../../assembler/masm/extern-masm.md) o  [EXTERNDEF](../../assembler/masm/externdef.md) direttiva.  
  
-   Un nome di simbolo è stato presente un errore di ortografia.  
  
-   Un'etichetta di codice locale è stato fatto riferimento all'esterno del relativo ambito.  
  
## Vedere anche  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)