---
title: "Enumerazione AsyncStatusInternal | Microsoft Docs"
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
  - "async/Microsoft::WRL::Details::AsyncStatusInternal"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AsyncStatusInternal (enumerazione)"
ms.assetid: b783923f-3f1c-4487-9384-be572cbc62d7
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Enumerazione AsyncStatusInternal
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
enum AsyncStatusInternal;  
```  
  
## Note  
 Specifica un mapping tra enumerazioni interne per lo stato delle operazioni asincrone e l'enumerazione **Windows::Foundation::AsyncStatus**.  
  
## Membri  
 `_Created`  
 Equivalente a ::Windows::Foundation::AsyncStatus::Created  
  
 `_Started`  
 Equivalente a ::Windows::Foundation::AsyncStatus::Started  
  
 `_Completed`  
 Equivalente a ::Windows::Foundation::AsyncStatus::Completed  
  
 `_Cancelled`  
 Equivalente a ::Windows::Foundation::AsyncStatus::Cancelled  
  
 `_Error`  
 Equivalente a ::Windows::Foundation::AsyncStatus::Error  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)