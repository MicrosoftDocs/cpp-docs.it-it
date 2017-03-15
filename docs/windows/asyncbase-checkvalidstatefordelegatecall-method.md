---
title: "Metodo AsyncBase::CheckValidStateForDelegateCall | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::CheckValidStateForDelegateCall"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CheckValidStateForDelegateCall (metodo)"
ms.assetid: d997ebe7-2378-4e74-a379-f0f85e6922f0
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo AsyncBase::CheckValidStateForDelegateCall
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se le proprietà di delegati possono essere modificate nello stato corrente asincrono.  
  
## Sintassi  
  
```  
inline HRESULT CheckValidStateForDelegateCall();  
```  
  
## Valore restituito  
 S\_OK se le proprietà del delegato può essere modificato; in caso contrario, E\_ILLEGAL\_METHOD\_CALL.  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)