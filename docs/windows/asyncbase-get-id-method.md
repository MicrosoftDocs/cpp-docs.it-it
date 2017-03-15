---
title: "Metodo AsyncBase::get_Id | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::get_Id"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "get_Id (metodo)"
ms.assetid: 591d8366-ea76-4deb-9278-9d3bc394a42b
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo AsyncBase::get_Id
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Richiama la gestione dell'operazione asincrona.  
  
## Sintassi  
  
```  
STDMETHOD(  
   get_Id  
)(unsigned int *id) override;  
```  
  
#### Parametri  
 `id`  
 Posizione in cui deve essere memorizzato l'handle.  
  
## Valore restituito  
 S\_OK se ha avuto esito positivo; in caso contrario, E\_ILLEGAL\_METHOD\_CALL.  
  
## Note  
 Questo metodo implementa IAsyncInfo::get\_Id.  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)