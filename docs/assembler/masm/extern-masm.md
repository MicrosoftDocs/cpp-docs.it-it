---
title: EXTERN (MASM) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: extern
dev_langs: C++
helpviewer_keywords: EXTERN directive
ms.assetid: 667d703d-3aaf-4139-a586-29bc5dab1aff
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 814922100d34534d51abed4cb682cc4181685066
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="extern-masm"></a>EXTERN (MASM)
Definisce uno o più variabili esterne, etichette o simboli denominati *nome* il cui tipo è `type`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
   EXTERN [[langtype]] name [[(altid)]] :  
type [[, [[langtype]] name [[(altid)]] :type]]...  
```  
  
## <a name="remarks"></a>Note  
 Il `type` può essere [ABS](../../assembler/masm/operator-abs.md), che importa *nome* come costante. Uguale a [EXTRN](../../assembler/masm/extrn.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)