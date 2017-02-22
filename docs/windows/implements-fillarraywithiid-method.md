---
title: "Metodo Implements::FillArrayWithIid | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Implements::FillArrayWithIid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FillArrayWithIid (metodo)"
ms.assetid: b2e62e3f-0ab9-4c70-aad7-856268544f44
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Metodo Implements::FillArrayWithIid
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inserisce l'ID di interfaccia specificata dallo zeresimo parametro di modello corrente nell'array di elementi specificato.  
  
## Sintassi  
  
```  
__forceinline static void FillArrayWithIid(  
   unsigned long &index,  
   _In_ IID* iids  
);  
```  
  
#### Parametri  
 `index`  
 Un indice a base zero che indica un elemento dell'array iniziale per questa operazione.  Quando questa operazione viene completata, `index` viene incrementato di 1.  
  
 `iids`  
 Array di tipo IID .  
  
## Note  
 Funzione di supporto interna.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Implementa la struttura](../windows/implements-structure.md)