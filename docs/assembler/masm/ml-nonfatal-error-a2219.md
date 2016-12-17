---
title: "ML Nonfatal Error A2219 | Microsoft Docs"
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
  - "A2219"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2219"
ms.assetid: 5ebc2f40-e47e-4f8e-b7b9-960b9cfc9f6d
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Nonfatal Error A2219
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**Errato allineamento per offset nel codice di epilogo**  
  
 l'operando per [.ALLOCSTACK](../../assembler/masm/dot-allocstack.md) e  [.SAVEREG](../../assembler/masm/dot-savereg.md) deve essere un multiplo di 8.  l'operando per [.SAVEXMM128](../../assembler/masm/dot-savexmm128.md) e  [.SETFRAME](../../assembler/masm/dot-setframe.md) deve essere un multiplo di 16.  
  
## Vedere anche  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)