---
title: "Funzione RaiseException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "internal/Microsoft::WRL::Details::RaiseException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RaiseException (funzione)"
ms.assetid: f9c74f6d-112a-4d2e-900f-622f795d5dbf
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Funzione RaiseException
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
inline void __declspec(noreturn)  
   RaiseException(  
      HRESULT hr,   
      DWORD dwExceptionFlags = EXCEPTION_NONCONTINUABLE);  
```  
  
#### Parametri  
 `hr`  
 Il codice dell'eccezione generata, ovvero HRESULT di un'operazione non riuscita.  
  
 `dwExceptionFlags`  
 Un flag che indica un'eccezione non critica \(il valore del flag è zero\), o eccezione noncontinuable \(il valore del flag è diverso da zero\).  Per impostazione predefinita, l'eccezione è noncontinuable.  
  
## Note  
 Genera un'eccezione nel thread chiamante.  
  
 Per ulteriori informazioni, vedere la funzione di Windows **RaiseException**.  
  
## Requisiti  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)