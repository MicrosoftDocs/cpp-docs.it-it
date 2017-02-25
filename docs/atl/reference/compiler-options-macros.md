---
title: "Compiler Options Macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "opzioni del compilatore, macro"
ms.assetid: a869adc6-b3de-4299-b040-9ae20b45f82c
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Compiler Options Macros
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste funzionalità specifiche del compilatore di controllo di macro.  
  
|||  
|-|-|  
|[\_ATL\_ALL\_WARNINGS](../Topic/_ATL_ALL_WARNINGS.md)|Un simbolo che consente agli errori nei progetti converte le versioni precedenti ATL.|  
|[\_ATL\_APARTMENT\_THREADED](../Topic/_ATL_APARTMENT_THREADED.md)|Definire se uno o più degli oggetti utilizzano il threading apartment.|  
|[\_ATL\_CSTRING\_EXPLICIT\_CONSTRUCTORS](../Topic/_ATL_CSTRING_EXPLICIT_CONSTRUCTORS.md)|Rende i costruttori specifici `CString` esplicite, impedendo tutte le conversioni indesiderate.|  
|[\_ATL\_ENABLE\_PTM\_WARNING](../Topic/_ATL_ENABLE_PTM_WARNING.md)|Definire questa macro per utilizzare la sintassi conforme agli standard di C\+\+, che genera un errore del compilatore C4867 quando una sintassi non standard da inizializzare un puntatore a una funzione membro.|  
|[\_ATL\_FREE\_THREADED](../Topic/_ATL_FREE_THREADED.md)|Definire se uno o più degli oggetti utilizzano il threading free o neutro.|  
|[\_ATL\_MULTI\_THREADED](../Topic/_ATL_MULTI_THREADED.md)|Un simbolo che indica il progetto presenterà gli oggetti contrassegnati come entrambi, liberamente o neutra.  Macro [\_ATL\_FREE\_THREADED](../Topic/_ATL_FREE_THREADED.md) invece opportuno utilizzare.|  
|[\_ATL\_NO\_AUTOMATIC\_NAMESPACE](../Topic/_ATL_NO_AUTOMATIC_NAMESPACE.md)|Un simbolo che impedisce l'utilizzo predefinito dello spazio dei nomi come ATL.|  
|[\_ATL\_NO\_COM\_SUPPORT](../Topic/_ATL_NO_COM_SUPPORT.md)|Un simbolo che impedisce il codice rimozione correlato venga compilato con il progetto.|  
|[ATL\_NO\_VTABLE](../Topic/ATL_NO_VTABLE.md)|Un simbolo che impedisce il puntatore vtable essere inizializzato nel costruttore e della classe.|  
|[ATL\_NOINLINE](../Topic/ATL_NOINLINE.md)|Un simbolo che indica una funzione non deve essere inline.|  
|[\_ATL\_SINGLE\_THREADED](../Topic/_ATL_SINGLE_THREADED.md)|Definire se tutti gli oggetti utilizzano il singolo modello di threading.|  
  
## Vedere anche  
 [Macros](../../atl/reference/atl-macros.md)