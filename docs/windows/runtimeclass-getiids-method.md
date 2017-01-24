---
title: "Metodo RuntimeClass::GetIids | Microsoft Docs"
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
  - "implements/Microsoft::WRL::RuntimeClass::GetIids"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetIids (metodo)"
ms.assetid: 826a67d1-ebc4-4940-b5d5-7cd66885e4a1
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo RuntimeClass::GetIids
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene una matrice che contiene l'interfaccia ID implementata dall'oggetto corrente di RuntimeClass.  
  
## Sintassi  
  
```  
STDMETHOD(  
   GetIids  
)  
   (_Out_ ULONG *iidCount,   
   _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);  
```  
  
#### Parametri  
 `iidCount`  
 Quando l'operazione viene completata, il numero complessivo di elementi nell'array `iids`.  
  
 `iids`  
 Quando questa operazione completa, un puntatore a un array di interfaccie ID.  
  
## Valore restituito  
 S\_OK se l'operazione viene completata correttamente, in caso contrario E\_OUTOFMEMORY.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)