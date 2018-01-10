---
title: Enumerazioni di spazio dei nomi Concurrency (AMP) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp/Concurrency::access_type
- amp/Concurrency::queuing_mode
dev_langs: C++
ms.assetid: 4c87457e-184f-4992-81ab-ca75e7d524ab
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8979ab026d5bf6aef9d0dd8677bf2ec47a8c6142
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="concurrency-namespace-enums-amp"></a>Enumerazioni di spazio dei nomi Concurrency (AMP)
|||  
|-|-|  
|[Enumerazione access_type](#access_type)|[Enumerazione queuing_mode](#queuing_mode)|  
  
##  <a name="access_type"></a>Enumerazione access_type  
 Tipo di enumerazione utilizzato per indicare i vari tipi di accesso ai dati.  
  
```  
enum access_type;  
```  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`access_type_auto`|Scegliere automaticamente il miglior `access_type` per i tasti di scelta rapida.|  
|`access_type_none`|Dedicato. L'allocazione è accessibile solo nel tasto di scelta rapida e non nella CPU.|  
|`access_type_read`|Condiviso. L'allocazione è accessibile nel tasto di scelta rapida e leggibile sulla CPU.|  
|`access_type_read_write`|Condiviso. L'allocazione è accessibile nel tasto di scelta rapida e sia accessibile in scrittura sulla CPU.|  
|`access_type_write`|Condiviso. L'allocazione è accessibile nel tasto di scelta rapida e sia leggibile e scrivibile sulla CPU.|  

  
##  <a name="queuing_mode"></a>Enumerazione queuing_mode  
 Specifica le modalità di Accodamento messaggi che sono supportate per i tasti di scelta rapida.  
  
```  
enum queuing_mode;  
``` 
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`queuing_mode_immediate`|Comandi di una modalità di accodamento che specifica che qualsiasi, ad esempio, [parallel_for_each (funzione) (C++ AMP)](concurrency-namespace-functions-amp.md#parallel_for_each), vengono inviati al dispositivo di tasti di scelta rapida corrispondente come restituiscono al chiamante.|  
|`queuing_mode_automatic`|Una modalità di accodamento che specifica che i comandi accodate in una coda di comandi che corrisponde alla [accelerator_view](accelerator-view-class.md) oggetto. I comandi vengono inviati al dispositivo quando [accelerator_view:: Flush](accelerator-view-class.md#flush) viene chiamato.|   
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
