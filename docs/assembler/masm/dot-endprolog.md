---
title: ".ENDPROLOG | Microsoft Docs"
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
  - ".ENDPROLOG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".ENDPROLOG directive"
ms.assetid: 61a2474c-9527-46e6-9f9d-bc4b42c10f35
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .ENDPROLOG
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica la fine delle dichiarazioni del prologo.  
  
## Sintassi  
  
```  
.ENDPROLOG  
```  
  
## Note  
 È un errore per utilizzare le dichiarazioni di prologo fuori dall'area tra [PROC](../../assembler/masm/proc.md) FRAME e .ENDPROLOG.  
  
 Per ulteriori informazioni, vedere [MASM for x64 \(ml64.exe\)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)