---
title: "Metodo Implements::CastToUnknown | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Implements::CastToUnknown"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CastToUnknown (metodo)"
ms.assetid: ca3324f7-4136-406b-8698-7389f4f3d3c7
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Metodo Implements::CastToUnknown
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene un puntatore all'interfaccia IUnknown sottostante.  
  
## Sintassi  
  
```  
__forceinline IUnknown* CastToUnknown();  
```  
  
## Valore restituito  
 Questa operazione ha sempre esito positivo e restituisce il puntatore di IUnknown.  
  
## Note  
 Funzione di supporto interna.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Implementa la struttura](../windows/implements-structure.md)