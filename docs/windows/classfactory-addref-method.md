---
title: "Metodo ClassFactory::AddRef | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::ClassFactory::AddRef"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddRef (metodo)"
ms.assetid: 5b091785-dea4-42b6-a502-0db5fc7a5a2e
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo ClassFactory::AddRef
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Incrementa il conteggio dei riferimenti per l'oggetto ClassFactory corrente.  
  
## Sintassi  
  
```  
STDMETHOD_(  
   ULONG,  
   AddRef  
)();  
```  
  
## Valore restituito  
 S\_OK se ha avuto successo, in caso contrario un HRESULT, che descrive perchè l'operazione è fallita.  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ClassFactory](../windows/classfactory-class.md)