---
title: Enumerazioni di spazio dei nomi Concurrency (AMP) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 4c87457e-184f-4992-81ab-ca75e7d524ab
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: b9555023e01cb765ca943fcaaf785cdc2b4e2d0d
ms.lasthandoff: 02/24/2017

---
# <a name="concurrency-namespace-enums-amp"></a>Enumerazioni di spazio dei nomi Concurrency (AMP)
|||  
|-|-|  
|[Enumerazione access_type](#access_type)|[Enumerazione queuing_mode](#queuing_mode)|  
  
##  <a name="a-nameaccesstypea--accesstype-enumeration"></a><a name="access_type"></a>Enumerazione access_type  
 Tipo di enumerazione utilizzato per indicare i vari tipi di accesso ai dati.  
  
```  
enum access_type;  
```  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`access_type_auto`|Scegliere automaticamente il miglior `access_type` per i tasti di scelta rapida.|  
|`access_type_none`|Dedicato. L'allocazione è accessibile solo sul tasto di scelta rapida e non sulla CPU.|  
|`access_type_read`|Condiviso. L'allocazione è accessibile nel tasto di scelta rapida e leggibile sulla CPU.|  
|`access_type_read_write`|Condiviso. L'allocazione è accessibile nel tasto di scelta rapida e sia accessibile in scrittura sulla CPU.|  
|`access_type_write`|Condiviso. L'allocazione è accessibile nel tasto di scelta rapida e sia leggibile e scrivibile sulla CPU.|  

  
##  <a name="a-namequeuingmodea--queuingmode-enumeration"></a><a name="queuing_mode"></a>Enumerazione queuing_mode  
 Specifica le modalità di Accodamento messaggi sono supportate per i tasti di scelta rapida.  
  
```  
enum queuing_mode;  
``` 
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`queuing_mode_immediate`|Comandi di una modalità di accodamento che specifica che qualsiasi, ad esempio, [funzione parallel_for_each (C++ AMP)](concurrency-namespace-functions-amp.md#parallel_for_each), vengono inviati al dispositivo di tasti di scelta rapida corrispondente come restituiscono al chiamante.|  
|`queuing_mode_automatic`|Una modalità di accodamento che specifica che i comandi di essere messi in coda in una coda di comandi che corrisponde al [accelerator_view](accelerator-view-class.md) oggetto. I comandi vengono inviati al dispositivo quando [accelerator_view:: Flush](accelerator-view-class.md#flush) viene chiamato.|   
  
## <a name="see-also"></a>Vedere anche  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)

