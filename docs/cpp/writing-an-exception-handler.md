---
title: Scrittura di un gestore di eccezioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- structured exception handling [C++], exception handlers
- exception handling [C++], exception handlers
ms.assetid: 71473fee-f773-4a34-bf12-82a3af79579c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 01d16d95cc246ad7ef0fe9f03c20e2652fe81aad
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="writing-an-exception-handler"></a>Scrittura di un gestore di eccezioni
I gestori di eccezioni vengono in genere utilizzati per risolvere errori specifici. È possibile utilizzare la sintassi relativa alla gestione delle eccezioni per filtrare le eccezioni diverse da quelle che si è in grado di gestire. Le altre eccezioni devono essere passate ad altri gestori (possibilmente nella libreria di runtime o nel sistema operativo) progettati in modo da cercare tali eccezioni specifiche.  
  
 I gestori delle eccezioni utilizzano l'istruzione try-except.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Try-except istruzione](../cpp/try-except-statement.md)  
  
-   [Scrittura di un filtro eccezioni](../cpp/writing-an-exception-filter.md)  
  
-   [Generazione di eccezioni software](../cpp/raising-software-exceptions.md)  
  
-   [Eccezioni hardware](../cpp/hardware-exceptions.md)  
  
-   [Limitazioni ai gestori di eccezioni](../cpp/restrictions-on-exception-handlers.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)