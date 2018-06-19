---
title: Registri salvati dal chiamante-chiamato | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 0533bd4b-d6bb-4ce1-8201-495e16870cbb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8f65e88c8609d6a2097e9e54c3f52cbd27dce36d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32366796"
---
# <a name="callercallee-saved-registers"></a>Registri salvati dal chiamante o dal chiamato
I registri RAX, ovvero RCX, RDX, R8, R9, R10, R11 sono considerati volatili e deve essere considerato distrutti su chiamate di funzione (a meno che in caso contrario quindi dall'analisi, ad esempio Ottimizzazione intero programma).  
  
 I registri RBX, RBP, RDI, RSI, RSP, R12, R13, R14 e R15 sono considerati non volatili e devono essere salvati e ripristinato da una funzione che li utilizza.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)