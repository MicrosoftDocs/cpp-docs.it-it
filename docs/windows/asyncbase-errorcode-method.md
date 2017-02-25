---
title: "Metodo AsyncBase::ErrorCode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::ErrorCode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ErrorCode (metodo)"
ms.assetid: 3f5f0f69-d60a-4a67-8cc6-a55fdc89a192
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo AsyncBase::ErrorCode
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Recupera il codice di errore per l'operazione asincrona corrente.  
  
## Sintassi  
  
```  
inline void ErrorCode(  
   HRESULT *error  
);  
```  
  
#### Parametri  
 `error`  
 La posizione in cui questa operazione archiviare il codice di errore corrente.  
  
## Note  
 Questo operazione è thread\-safe.  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)