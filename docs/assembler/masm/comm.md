---
title: COMM | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- COMM
dev_langs:
- C++
helpviewer_keywords:
- COMM directive
ms.assetid: a23548c4-ad04-41fa-91da-945f228de742
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 111dac47089fea13febe787e5b73557b287beea8
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="comm"></a>COMM
Crea una variabile comunale con gli attributi specificati `definition`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
COMM definition [[, definition]] ...  
```  
  
## <a name="remarks"></a>Note  
 Ogni `definition` ha il formato seguente:  
  
 [[*langtype*]] [[**NEAR** &#124; **ESTREMO**]] *etichetta ***:**`type`[[**:*** conteggio*]]  
  
 Il *etichetta* è il nome della variabile. Il `type` può essere qualsiasi identificatore di tipo ([BYTE](../../assembler/masm/byte-masm.md), [WORD](../../assembler/masm/word.md)e così via) o un numero intero che specifica il numero di byte. Il *conteggio* specifica il numero di oggetti dati (uno è il valore predefinito).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)