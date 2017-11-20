---
title: GOTO (MASM) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: goto
dev_langs: C++
helpviewer_keywords: GOTO directive
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 896d99b2ed4abe2080e646b6a541eb1e489d2b75
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="goto-masm"></a>GOTO (MASM)
Trasferisce l'assembly per la riga contrassegnata **:***macrolabel*.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
GOTO   
macrolabel  
  
```  
  
## <a name="remarks"></a>Note  
 **GOTO** è consentito solo all'interno di [MACRO](../../assembler/masm/macro.md), [per](../../assembler/masm/for-masm.md), [FORC](../../assembler/masm/forc.md), [ripetere](../../assembler/masm/repeat.md), e **durante**blocchi. L'etichetta deve essere l'unica direttiva sulla riga e deve essere preceduto da due punti iniziali.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)