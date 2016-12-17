---
title: "Metodo AsyncBase::TryTransitionToError | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::TryTransitionToError"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TryTransitionToError (metodo)"
ms.assetid: f6d11c25-1ce3-43f9-af1c-97c4dc0f6f0f
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo AsyncBase::TryTransitionToError
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica se il codice di errore specificato può modificare lo stato di errore interno.  
  
## Sintassi  
  
```  
bool TryTransitionToError(  
   const HRESULT error  
);  
```  
  
#### Parametri  
 `error`  
 Un errore HRESULT.  
  
## Valore restituito  
 `true` se lo stato di errore interno è stato modificato; in caso contrario, `false`.  
  
## Note  
 Questa operazione modifica lo stato di errore solo se lo stato di errore è già impostato su S\_OK.  Questa operazione non ha effetto se lo stato di errore è già errore, annullato, completato, o chiuso.  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)