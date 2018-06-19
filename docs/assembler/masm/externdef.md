---
title: EXTERNDEF | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- EXTERNDEF
dev_langs:
- C++
helpviewer_keywords:
- EXTERNDEF directive
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b010f52f91a04388f34052fcc5c374690cff13df
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32052700"
---
# <a name="externdef"></a>EXTERNDEF
Definisce uno o più variabili esterne, etichette o simboli denominati *nome* il cui tipo è `type`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
EXTERNDEF [[langtype]] name:type [[, [[langtype]] name:type]]...  
```  
  
## <a name="remarks"></a>Note  
 Se *nome* è definito nel modulo, viene considerato come [pubblica](../../assembler/masm/public-masm.md). Se *nome* viene fatto riferimento nel modulo, viene considerato come [EXTERN](../../assembler/masm/extern-masm.md). Se *nome* non è viene fatto riferimento, viene ignorato. Il `type` può essere [ABS](../../assembler/masm/operator-abs.md), che importa *nome* come costante. In genere usato nel file di inclusione.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)