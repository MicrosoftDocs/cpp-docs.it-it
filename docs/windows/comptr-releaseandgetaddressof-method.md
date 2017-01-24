---
title: "Metodo ComPtr::ReleaseAndGetAddressOf | Microsoft Docs"
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
  - "client/Microsoft::WRL::ComPtr::ReleaseAndGetAddressOf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseAndGetAddressOf (metodo)"
ms.assetid: 3751dcb4-d50e-432c-89e4-e736be34d434
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo ComPtr::ReleaseAndGetAddressOf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rilascia l'interfaccia associata a questo ComPtr, quindi viene recuperato l'indirizzo del membro dati [ptr\_](../windows/comptr-ptr-data-member.md), che contiene un puntatore all'interfaccia rilasciata.  
  
## Sintassi  
  
```  
T** ReleaseAndGetAddressOf();  
```  
  
## Valore restituito  
 L'indirizzo del membro dati [ptr\_](../windows/comptr-ptr-data-member.md) di questo ComPtr.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)   
 [Membro dati ComPtr::ptr\_](../windows/comptr-ptr-data-member.md)