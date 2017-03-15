---
title: "Metodo ChainInterfaces::FillArrayWithIid | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::ChainInterfaces::FillArrayWithIid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FillArrayWithIid (metodo)"
ms.assetid: f1ce699c-dfb6-40a9-9ea0-e6703d3cf971
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo ChainInterfaces::FillArrayWithIid
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Archivia l'interfaccia ID definita dal parametro di modello `I0` in una posizione specificata in un array specificato di interfacce ID.  
  
## Sintassi  
  
```  
__forceinline static void FillArrayWithIid(  
   _Inout_ unsigned long &index,  
   _In_ IID* iids  
);  
```  
  
#### Parametri  
 `index`  
 Puntatore a un valore di indice nell'array `iids`.  
  
 `iids`  
 Un array di interfacce ID.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)