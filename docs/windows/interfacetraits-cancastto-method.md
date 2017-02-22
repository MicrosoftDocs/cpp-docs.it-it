---
title: "Metodo InterfaceTraits::CanCastTo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::InterfaceTraits::CanCastTo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanCastTo (metodo)"
ms.assetid: 275847cb-69ea-42bf-910f-05ba6ef8b48d
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Metodo InterfaceTraits::CanCastTo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
  
template<typename T>  
static __forceinline bool CanCastTo(  
   _In_ T* ptr,  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
  
```  
  
#### Parametri  
 `ptr`  
 Il nome del puntatore ad un tipo.  
  
 `riid`  
 L'interfaccia ID di `Base`.  
  
 `ppv`  
 Se l'operazione ha successo, `ppv` punta all'interfaccia specificata da `Base`.  In caso contratio, `ppv` viene impostato a `nullptr`.  
  
## Valore restituito  
 `true` se l'operazione ha esito positivo e su `ptr` viene eseguito il cast da un puntatore a `Base`; in caso contrario, `false`.  
  
## Note  
 Indica se sul puntatore specificato è possibile eseguire il cast da puntatore a `Base`.  
  
 Per ulteriori informazioni su `Base`, vedere la sezione pubblica Typedef in [Struttura InterfaceTraits](../windows/interfacetraits-structure.md).  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Struttura InterfaceTraits](../windows/interfacetraits-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)