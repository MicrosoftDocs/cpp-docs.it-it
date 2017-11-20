---
title: EXTERNDEF | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: EXTERNDEF
dev_langs: C++
helpviewer_keywords: EXTERNDEF directive
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 64aa9cc69825ef1f932024bc45c051e16c99e2eb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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