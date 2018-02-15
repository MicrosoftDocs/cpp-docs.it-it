---
title: COMM | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COMM
dev_langs:
- C++
helpviewer_keywords:
- COMM directive
ms.assetid: a23548c4-ad04-41fa-91da-945f228de742
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6258a584d39f598b32c43affc0ef2569b77b2047
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="comm"></a>COMM
Crea una variabile comunale con gli attributi specificati `definition`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
COMM definition [[, definition]] ...  
```  
  
## <a name="remarks"></a>Note  
 Ogni `definition` ha il formato seguente:  
  
 [[*langtype*]] [[**NEAR** &#124; **ESTREMO**]] *etichetta***:**`type`[[**:***conteggio*]]  
  
 Il *etichetta* è il nome della variabile. Il `type` può essere qualsiasi identificatore di tipo ([BYTE](../../assembler/masm/byte-masm.md), [WORD](../../assembler/masm/word.md)e così via) o un numero intero che specifica il numero di byte. Il *conteggio* specifica il numero di oggetti dati (uno è il valore predefinito).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)