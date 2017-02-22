---
title: "Funzione ActivateInstance | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Windows::Foundation::ActivateInstance"
  - "client/ABI::Windows::Foundation::ActivateInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActivateInstance (funzione)"
ms.assetid: 8cfd1dd9-5fda-4cc2-acf8-d40e783b3875
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Funzione ActivateInstance
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Registra e recupera un'istanza di tipo specifico definito in un ID della classe.  
  
## Sintassi  
  
```  
template<  
   typename T  
>  
inline HRESULT ActivateInstance(  
   _In_ HSTRING activatableClassId,  
   _Out_ Microsoft::WRL::Details::ComPtrRef<T> instance  
);  
```  
  
#### Parametri  
 `T`  
 Un tipo da attivare.  
  
 `activatableClassId`  
 Il nome dell'ID della classe che definisce il parametro `T`.  
  
 `instance`  
 Quando questa operazione completa il lavoro, un riferimento a un'istanza `T`.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un errore HRESULT che indica la causa dell'errore.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Windows::Foundation  
  
## Vedere anche  
 [Spazio dei nomi Windows::Foundation](../windows/windows-foundation-namespace.md)