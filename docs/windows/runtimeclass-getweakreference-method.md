---
title: "Metodo RuntimeClass::GetWeakReference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::RuntimeClass::GetWeakReference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetWeakReference (metodo)"
ms.assetid: 26656ace-7f20-4364-87c9-4a75dd30912e
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Metodo RuntimeClass::GetWeakReference
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene un puntatore al riferimento debole dell'oggetto per l'oggetto RuntimeClass corrente.  
  
## Sintassi  
  
```  
STDMETHOD(  
   GetWeakReference  
)(_Deref_out_ IWeakReference **weakReference);  
```  
  
#### Parametri  
 `weakReference`  
 Quando questa operazione termina, un puntatore al riferimento debole dell'oggetto.  
  
## Valore restituito  
 Sempre S\_OK.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)