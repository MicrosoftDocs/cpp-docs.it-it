---
title: "Metodo AsyncBase::get_Status | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::get_Status"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "get_Status (metodo)"
ms.assetid: 9823ecb9-212e-471d-b76f-7b8f21208905
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo AsyncBase::get_Status
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ritorna un valore che indica lo stato dell'operazione asincrona.  
  
## Sintassi  
  
```  
STDMETHOD(  
   get_Status  
)(AsyncStatus *status) override;  
```  
  
#### Parametri  
 `status`  
 Posizione in cui deve essere memorizzato lo stato.  Per ulteriori informazioni vedere l'enumerazione Windows::Foundation::AsyncStatus.  
  
## Valore restituito  
 S\_OK se ha avuto esito positivo; in caso contrario, E\_ILLEGAL\_METHOD\_CALL.  
  
## Note  
 Questo metodo implementa IAsyncInfo::get\_Status.  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)