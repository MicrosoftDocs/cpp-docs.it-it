---
title: "Metodo AsyncBase::ContinueAsyncOperation | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::ContinueAsyncOperation"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ContinueAsyncOperation (metodo)"
ms.assetid: ce38181d-2fc3-4579-b0ce-237a3c7648bc
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo AsyncBase::ContinueAsyncOperation
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Determina se l'operazione asincrona debba continuare o debba arrestarsi.  
  
## Sintassi  
  
```  
inline bool ContinueAsyncOperation();  
```  
  
## Valore restituito  
 `true` se lo stato corrente dell'operazione asincrona è *started*, che significa che l'operazione deve continuare.  In caso contrario, `false`, che significa che l'operazione dovrebbe arrestarsi.  
  
## Requisiti  
 **Intestazione:** async.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)