---
title: OPZIONE (MASM) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: option
dev_langs: C++
helpviewer_keywords: OPTION directive
ms.assetid: 8e10dabd-e36f-4586-ab01-ada96736b0bd
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f449606b143bfbf188e878b261f3d35017846862
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="option-masm"></a>OPTION (MASM)
Abilita e disabilita le funzionalità dell'assembler.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
OPTION   
optionlist  
  
```  
  
## <a name="remarks"></a>Note  
 Le opzioni disponibili sono:  
  
|||||  
|-|-|-|-|  
|**CASEMAP**|**DOTNAME**|**NODOTNAME**|**EMULATORE**|  
|**NOEMULATOR**|**EPILOGO**|**EXPR16**|**EXPR32**|  
|**LINGUA**|**LJMP**|**NOLJMP**|**M510**|  
|**NOM510**|**NOKEYWORD**|**NOSIGNEXTEND**|**OFFSET**|  
|**OLDMACROS**|**NOOLDMACROS**|**OLDSTRUCTS**|**NOOLDSTRUCTS**|  
|**PROC**|**PROLOGO**|**SOLA LETTURA**|**NOREADONLY**|  
|**AMBITO**|**NOSCOPED**|**SEGMENT**|**SETIF2**.|  
  
 La sintassi per la lingua è **opzione LANGUAGE:***x*, dove *x* è uno dei C, SYSCALL, STDCALL, PASCAL, FORTRAN o BASIC.  SYSCALL, PASCAL, FORTRAN e BASIC non sono supportate con utilizzato con [. MODELLO](../../assembler/masm/dot-model.md) FLAT.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)