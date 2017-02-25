---
title: "Metodo ChainInterfaces::CanCastTo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::ChainInterfaces::CanCastTo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanCastTo (metodo)"
ms.assetid: 8be44875-53ed-494b-91a0-0f8e399685bb
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo ChainInterfaces::CanCastTo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica se l'id di interfaccia specificato è possibile eseguire il cast a ognuna delle specializzazioni definite dai parametri di modello non di default.  
  
## Sintassi  
  
```  
__forceinline bool CanCastTo(  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
```  
  
#### Parametri  
 `riid`  
 Un ID di interfaccia.  
  
 `ppv`  
 Un puntatore all'ultima interfaccia ID al quale è stato eseguito il cast correttamente.  
  
## Valore restituito  
 `true` se tutti i cast alle operazioni hanno avuto successo, altrimenti `false`.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)