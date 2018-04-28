---
title: GOTO (MASM) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- goto
dev_langs:
- C++
helpviewer_keywords:
- GOTO directive
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9eecdab2fe91de0aae656b37c6fddafe658e60c0
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="goto-masm"></a>GOTO (MASM)
Trasferisce l'assembly per la riga contrassegnata **: * * * macrolabel*.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
GOTO   
macrolabel  
  
```  
  
## <a name="remarks"></a>Note  
 **GOTO** è consentito solo all'interno di [MACRO](../../assembler/masm/macro.md), [per](../../assembler/masm/for-masm.md), [FORC](../../assembler/masm/forc.md), [ripetere](../../assembler/masm/repeat.md), e **durante**blocchi. L'etichetta deve essere l'unica direttiva sulla riga e deve essere preceduto da due punti iniziali.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)