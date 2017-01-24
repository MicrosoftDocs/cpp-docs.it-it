---
title: "Metodo RuntimeClassBaseT::GetImplementedIIDS | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::RuntimeClassBaseT::GetImplementedIIDS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetImplementedIIDS (metodo)"
ms.assetid: adae54da-521d-4add-87f5-242fbd85f33b
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo RuntimeClassBaseT::GetImplementedIIDS
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template<  
   typename T  
>  
__forceinline static HRESULT GetImplementedIIDS(  
   _In_ T* implements,  
   _Out_ ULONG *iidCount,  
   _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids  
);  
```  
  
#### Parametri  
 `T`  
 Tipo del parametro `implements`.  
  
 `implements`  
 Puntatore al tipo specificato dal parametro `T`.  
  
 `iidCount`  
 Numero massimo di Interfacce ID da recuperare.  
  
 `iids`  
 Se l'operazione viene completata correttamente, un array di interfacce ID implementate dal tipo `T`.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che descrive l'errore.  
  
## Note  
 Recupera un array di interfacce ID che sono implementate da un tipo specifico.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Struttura RuntimeClassBaseT](../windows/runtimeclassbaset-structure.md)