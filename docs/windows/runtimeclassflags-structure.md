---
title: "Struttura RuntimeClassFlags | Microsoft Docs"
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
  - "implements/Microsoft::WRL::RuntimeClassFlags"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RuntimeClassFlags (struttura)"
ms.assetid: 7098d605-bd14-4d51-82f4-3def8296a938
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura RuntimeClassFlags
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Contiene il tipo per un'istanza [RuntimeClass](../windows/runtimeclass-class.md).  
  
## Sintassi  
  
```  
template <  
   unsigned int flags  
>  
struct RuntimeClassFlags;  
```  
  
#### Parametri  
 `flags`  
 Valore di [Enumerazione RuntimeClassType](../windows/runtimeclasstype-enumeration.md).  
  
## Membri  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante RuntimeClassFlags::value](../windows/runtimeclassflags-value-constant.md)|Contiene un valore [Enumerazione RuntimeClassType](../windows/runtimeclasstype-enumeration.md).|  
  
## Gerarchia di ereditarietà  
 `RuntimeClassFlags`  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)