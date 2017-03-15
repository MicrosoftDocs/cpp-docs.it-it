---
title: "__RTDynamicCast | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__RTDynamicCast"
apilocation: 
  - "msvcr90.dll"
  - "msvcr110.dll"
  - "msvcr120.dll"
  - "msvcrt.dll"
  - "msvcr100.dll"
  - "msvcr80.dll"
  - "msvcr110_clr0400.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__RTDynamicCast"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__RTDynamicCast"
ms.assetid: 56aa2d7a-aa47-46ef-830d-e37175611239
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 3
---
# __RTDynamicCast
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Implementazione dell'operatore [dynamic\_cast](../cpp/dynamic-cast-operator.md).  
  
## Sintassi  
  
```cpp  
PVOID __RTDynamicCast (  
   PVOID inptr,   
   LONG VfDelta,  
   PVOID SrcType,  
   PVOID TargetType,   
   BOOL isReference  
   ) throw(...)  
```  
  
#### Parametri  
 `inptr`  
 Puntatore ad un oggetto polimorfico.  
  
 `VfDelta`  
 Offset del puntatore a funzione virtuale nell'oggetto.  
  
 `SrcType`  
 Tipo statico dell'oggetto puntato dal parametro `inptr`.  
  
 `TargetType`  
 Risultato di cast desiderato.  
  
 `isReference`  
 `true` se l'input è un riferimento; `false` se l'input è un puntatore.  
  
## Valore restituito  
 Puntatore al sotto\-oggetto appropriato, in caso di esito positivo; in caso contrario, NULL.  
  
## Eccezioni  
 `bad_cast()` se l'input a `dynamic_cast<>` è un riferimento e il cast ha esito negativo.  
  
## Note  
 Converte `inptr` un oggetto del tipo `TargetType`.  Il tipo `inptr` deve essere un puntatore se `TargetType` è un puntatore, o un l\-value se `TargetType` è un riferimento.  `TargetType` deve essere un puntatore o un riferimento a un tipo di classe oppure a un "puntatore a void.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|\_\_RTDynamicCast|rtti.h|