---
title: "Metodo AsyncBase::CheckValidStateForResultsCall | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::CheckValidStateForResultsCall"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CheckValidStateForResultsCall (metodo)"
ms.assetid: 87ca6805-bff1-4063-b855-6dd26132deff
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo AsyncBase::CheckValidStateForResultsCall
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se i risultati di un'operazione asincrona possono essere raccolti nello stato corrente asincrono.  
  
## Sintassi  
  
```  
inline HRESULT CheckValidStateForResultsCall();  
```  
  
## Valore restituito  
 S\_OK se i risultati possono essere raccolti; in caso contrario, E\_ILLEGAL\_METHOD\_CALLE\_ILLEGAL\_METHOD\_CALL.  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)