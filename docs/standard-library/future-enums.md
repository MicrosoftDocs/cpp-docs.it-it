---
title: Enumerazioni &lt;future&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 8c675645-db47-4cab-bc0e-7b87f8a302df
caps.latest.revision: 11
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: b1f8c56de97789bea4f0923cd87e8144382e1ed0
ms.lasthandoff: 02/24/2017

---
# <a name="ltfuturegt-enums"></a>Enumerazioni &lt;future&gt;
||||  
|-|-|-|  
|[Enumerazione future_errc](#future_errc_enumeration)|[Enumerazione future_status](#future_status_enumeration)|[Enumerazione launch](#launch_enumeration)|  
  
##  <a name="a-namefutureerrcenumerationa--futureerrc-enumeration"></a>Enumerazione <a name="future_errc_enumeration"></a>  future_errc  
 Fornisce i nomi simbolici per tutti gli errori segnalati dalla classe [future_error](../standard-library/future-error-class.md).  
  
class future_errc { broken_promise, future_already_retrieved, promise_already_satisfied, no_state };  
  
##  <a name="a-namefuturestatusenumerationa--futurestatus-enumeration"></a>Enumerazione <a name="future_status_enumeration"></a>  future_status  
 Fornisce i nomi simbolici per i motivi che una funzione di attesa temporizzata può restituire.  
  
```
enum future_status{    ready,
    timeout,
 deferred};
```  
  
##  <a name="a-namelaunchenumerationa--launch-enumeration"></a>Enumerazione <a name="launch_enumeration"></a>  launch  
 Rappresenta un tipo di maschera di bit che descrive le modalità possibili per la funzione modello [async](../standard-library/future-functions.md#async_function).  
  
class launch{ async, deferred };  
  
## <a name="see-also"></a>Vedere anche  
 [\<future>](../standard-library/future.md)




