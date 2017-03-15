---
title: "Metodo AsyncBase::get_ErrorCode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::get_ErrorCode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "get_ErrorCode (metodo)"
ms.assetid: 50b4f8a2-9a21-4ea0-bb5d-7ff524d62aea
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo AsyncBase::get_ErrorCode
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Recupera il codice di errore per l'operazione asincrona corrente.  
  
## Sintassi  
  
```  
STDMETHOD(  
   get_ErrorCode  
)(HRESULT* errorCode) override;  
```  
  
#### Parametri  
 `errorCode`  
 La posizione in cui il codice di errore corrente viene memorizzato.  
  
## Valore restituito  
 S\_OK se ha avuto esito positivo; in caso contrario, E\_ILLEGAL\_METHOD\_CALL se l'operazione asincrona corrente viene chiusa.  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)