---
title: Enumerazioni di spazio dei nomi Concurrency (AMP) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- amp/Concurrency::access_type
- amp/Concurrency::queuing_mode
dev_langs:
- C++
ms.assetid: 4c87457e-184f-4992-81ab-ca75e7d524ab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a67b5e77b8ab8c52e55dea96e64a3f16a4d70e39
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33695668"
---
# <a name="concurrency-namespace-enums-amp"></a>Enumerazioni di spazio dei nomi Concurrency (AMP)
|||  
|-|-|  
|[Enumerazione access_type](#access_type)|[Enumerazione queuing_mode](#queuing_mode)|  
  
##  <a name="access_type"></a>  Enumerazione access_type  
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

  
##  <a name="queuing_mode"></a>  Enumerazione queuing_mode  
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
