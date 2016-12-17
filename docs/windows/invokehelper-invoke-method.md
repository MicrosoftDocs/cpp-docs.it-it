---
title: "Metodo InvokeHelper::Invoke | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::Details::InvokeHelper::Invoke"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Invoke (metodo)"
ms.assetid: 98618815-c30e-4699-b3dd-203c91b1bf3b
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo InvokeHelper::Invoke
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
STDMETHOD(  
   Invoke  
)();  
STDMETHOD(  
   Invoke  
)(typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
```  
  
#### Parametri  
 `arg1`  
 Argomento 1.  
  
 `arg2`  
 Argomento 2.  
  
 `arg3`  
 Argomento 3.  
  
 `arg4`  
 Argomento 4.  
  
 `arg5`  
 Argomento 5.  
  
 `arg6`  
 Argomento 6.  
  
 `arg7`  
 Argomento 7.  
  
 `arg8`  
 Argomento 8.  
  
 `arg9`  
 Argomento 9.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che descrive l'errore.  
  
## Note  
 Chiama il gestore eventi la cui firma contiene il numero specificato di argomenti.  
  
## Requisiti  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Struttura InvokeHelper](../windows/invokehelper-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)