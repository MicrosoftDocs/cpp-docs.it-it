---
title: GOTO (MASM) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- goto
dev_langs:
- C++
helpviewer_keywords:
- GOTO directive
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c86a9b5bc83110f20dccf73f51b1e1aabc693db2
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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