---
title: Scrittura di un gestore di eccezioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- structured exception handling, exception handlers
- exception handling, exception handlers
ms.assetid: 71473fee-f773-4a34-bf12-82a3af79579c
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 5f3f81ff6ea954cda7270ff32650d5744280d918
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
