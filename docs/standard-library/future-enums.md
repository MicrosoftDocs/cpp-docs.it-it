---
title: Enumerazioni &lt;future&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- future/std::future_errc
- future/std::future_status
- future/std::launch
ms.assetid: 8c675645-db47-4cab-bc0e-7b87f8a302df
caps.latest.revision: 11
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 835abafde46858bd108dfa648a246345bd254eaf
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="ltfuturegt-enums"></a>Enumerazioni &lt;future&gt;
||||  
|-|-|-|  
|[future_errc](#future_errc)|[future_status](#future_status)|[avvio veloce](#launch)|  
  
##  Enumerazione <a name="future_errc"></a>  future_errc  
 Fornisce i nomi simbolici per tutti gli errori segnalati dalla classe [future_error](../standard-library/future-error-class.md).  
  
class future_errc { broken_promise, future_already_retrieved, promise_already_satisfied, no_state };  
  
##  Enumerazione <a name="future_status"></a>  future_status  
 Fornisce i nomi simbolici per i motivi che una funzione di attesa temporizzata può restituire.  
  
```
enum future_status{    ready,
    timeout,
 deferred};
```  
  
##  Enumerazione <a name="launch"></a>  launch  
 Rappresenta un tipo di maschera di bit che descrive le modalità possibili per la funzione modello [async](../standard-library/future-functions.md#async).  
  
class launch{ async, deferred };  
  
## <a name="see-also"></a>Vedere anche  
 [\<future>](../standard-library/future.md)




