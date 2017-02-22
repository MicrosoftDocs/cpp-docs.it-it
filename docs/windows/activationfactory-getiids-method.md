---
title: "Metodo ActivationFactory::GetIids | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::ActivationFactory::GetIids"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetIids (metodo)"
ms.assetid: 0983d709-d155-4d65-aae4-5b2c8bb0fede
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo ActivationFactory::GetIids
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Recupera un array dell'interfaccia implementata ID.  
  
## Sintassi  
  
```  
STDMETHOD(  
   GetIids  
)(_Out_ ULONG *iidCount, _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);  
```  
  
#### Parametri  
 `iidCount`  
 Quando l'operazione viene completata, il numero di interace ID nell'array `iids`.  
  
 `iids`  
 Quando questa operazione viene completata, un array dell'interfaccia implementata ID.  
  
## Valore restituito  
 S\_OK se ha avuto successo, in caso contrario un HRESULT, che descrive perchè l'operazione è fallita.  E\_OUTOFMEMORY è un possibile errore HRESULT.  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ActivationFactory](../windows/activationfactory-class.md)