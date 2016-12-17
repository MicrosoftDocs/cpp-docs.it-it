---
title: "OPTION (MASM) | Microsoft Docs"
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
  - "option"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OPTION directive"
ms.assetid: 8e10dabd-e36f-4586-ab01-ada96736b0bd
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# OPTION (MASM)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Abilitare e disabilitare le funzionalità dell'assemblatore.  
  
## Sintassi  
  
```  
  
OPTION   
optionlist  
  
```  
  
## Note  
 Le opzioni disponibili sono:  
  
|||||  
|-|-|-|-|  
|**CASEMAP**|**DOTNAME**|**NODOTNAME**|**EMULATORE**|  
|**NOEMULATOR**|**EPILOGO**|**EXPR16**|**EXPR32**|  
|**LINGUAGGIO**|**LJMP**|**NOLJMP**|**M510**|  
|**NOM510**|**NOKEYWORD**|**NOSIGNEXTEND**|**OFFSET**|  
|**OLDMACROS**|**NOOLDMACROS**|**OLDSTRUCTS**|**NOOLDSTRUCTS**|  
|**PROC**|**PROLOGO**|**READONLY**|**NOREADONLY**|  
|**SCOPED**|**NOSCOPED**|**SEGMENTO**|**SETIF2**.|  
  
 La sintassi per il LINGUAGGIO viene **LINGUAGGIO OF OPZIONE:**x, dove x è uno c\#, di SYSCALL, di STDCALL, di PASCAL, FORTRAN, o di BASE.  SYSCALL, PASCAL, il fortran e la BASE non sono supportati con utilizzato con [.MODEL](../../assembler/masm/dot-model.md) PIANO.  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)