---
title: OPZIONE (MASM) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- option
dev_langs:
- C++
helpviewer_keywords:
- OPTION directive
ms.assetid: 8e10dabd-e36f-4586-ab01-ada96736b0bd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 80291c805cad3ef041fffc58983ff399da07c9d9
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
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
  
 La sintassi per la lingua è **opzione LANGUAGE: * * * x*, dove *x* è uno dei C, SYSCALL, STDCALL, PASCAL, FORTRAN o BASIC.  SYSCALL, PASCAL, FORTRAN e BASIC non sono supportate con utilizzato con [. MODELLO](../../assembler/masm/dot-model.md) FLAT.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)