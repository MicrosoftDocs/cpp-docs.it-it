---
title: "Funzione GetActivationFactory | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Details::GetActivationFactory"
  - "client/ABI::Windows::Foundation::GetActivationFactory"
  - "client/Windows::Foundation::GetActivationFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetActivationFactory (funzione)"
ms.assetid: 5736d285-6beb-42aa-8788-e261c0010afe
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Funzione GetActivationFactory
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Recupera una factory di attivazione per il tipo specificato dal parametro di modello.  
  
## Sintassi  
  
```  
template<  
   typename T  
>  
inline HRESULT GetActivationFactory(  
   _In_ HSTRING activatableClassId,  
   _Out_ Microsoft::WRL::Details::ComPtrRef<T> factory  
);  
```  
  
#### Parametri  
 `T`  
 Un parametro di modello che specifica il tipo della factory di attivazione.  
  
 `activatableClassId`  
 Il nome della classe della factory di attivazione può produrre.  
  
 `factory`  
 Quando questa operazione completa, un riferimento alla factory di attivazione per tipo `T`.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un errore HRESULT che indica il perchè l'operazione non è riuscita.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Windows::Foundation  
  
## Vedere anche  
 [Spazio dei nomi Windows::Foundation](../windows/windows-foundation-namespace.md)