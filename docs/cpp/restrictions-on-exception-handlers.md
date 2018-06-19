---
title: Limitazioni ai gestori di eccezioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- restrictions, exception handlers
- exception handling [C++], exception handlers
ms.assetid: 31d63524-0e8c-419f-b87c-061f4c0ea470
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1f739152b502a156dc62dfab279e5ad044cfff99
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32420204"
---
# <a name="restrictions-on-exception-handlers"></a>Limitazioni ai gestori di eccezioni
La limitazione principale nell'utilizzo dei gestori eccezioni è che non è possibile utilizzare un'istruzione `goto` per passare a un blocco di istruzioni `__try`. È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo. È possibile uscire da un blocco di istruzioni `__try` e annidare i gestori di eccezione quando lo si desidera.  
  
## <a name="see-also"></a>Vedere anche  
 [Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)   
 [Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)