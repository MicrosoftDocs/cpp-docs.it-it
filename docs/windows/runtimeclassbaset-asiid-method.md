---
title: "Metodo RuntimeClassBaseT::AsIID | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::RuntimeClassBaseT::AsIID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AsIID (metodo)"
ms.assetid: 90d7df8a-cf9e-4eef-8837-bc1a25f3fa1a
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Metodo RuntimeClassBaseT::AsIID
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template<  
   typename T  
>  
__forceinline static HRESULT AsIID(  
   _In_ T* implements,  
   REFIID riid,  
   _Deref_out_ void **ppvObject  
);  
```  
  
#### Parametri  
 `T`  
 Un tipo che implementa l'id dell'interfaccia specificata dal parametro `riid`.  
  
 `implements`  
 Una variabile del tipo specificato dal parametro di modello `T`.  
  
 `riid`  
 ID dell'interfaccia da richiamare.  
  
 `ppvObject`  
 Se l'operazione ha esito positivo, un puntatore a un puntatore a un'interfaccia specificata dal parametro `riid`.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che descrive l'errore.  
  
## Note  
 Recupera un puntatore all'interfaccia ID.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Struttura RuntimeClassBaseT](../windows/runtimeclassbaset-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)