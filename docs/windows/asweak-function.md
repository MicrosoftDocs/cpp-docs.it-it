---
title: "Funzione AsWeak | Microsoft Docs"
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
  - "client/Microsoft::WRL::AsWeak"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AsWeak (funzione)"
ms.assetid: a6f10cfc-c1d6-4761-adb9-1a119cc99913
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione AsWeak
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Recupera un riferimento debole a un'istanza specificata.  
  
## Sintassi  
  
```  
template<  
   typename T  
>  
HRESULT AsWeak(  
   _In_ T* p,  
   _Out_ WeakRef* pWeak  
);  
```  
  
#### Parametri  
 `T`  
 Puntatore al tipo di parametro `p`.  
  
 `p`  
 Un' istanza di un tipo.  
  
 `pWeak`  
 Quando questa operazione viene completata, un puntatore a un riferimento debole al parametro `p`.  
  
## Valore restituito  
 S\_OK, se l'operazione riesce, in caso contrario, un errore HRESULT che indica la causa dell'errore.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)