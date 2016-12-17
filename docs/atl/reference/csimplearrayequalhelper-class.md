---
title: "CSimpleArrayEqualHelper Class | Microsoft Docs"
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
  - "CSimpleArrayEqualHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleArrayEqualHelper class"
ms.assetid: a2b55d89-78c9-42ef-842c-5304c6d20ad6
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSimpleArrayEqualHelper Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un helper per la classe [CSimpleArray](../../atl/reference/csimplearray-class.md).  
  
## Sintassi  
  
```  
  
      template <  
   class T   
>  
class CSimpleArrayEqualHelper  
```  
  
#### Parametri  
 `T`  
 Una classe derivata.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleArrayEqualHelper::IsEqual](../Topic/CSimpleArrayEqualHelper::IsEqual.md)|\(Proprietà statica\) testa due elementi oggetto `CSimpleArray` l'uguaglianza.|  
  
## Note  
 Questa classe di tratti è un oggetto aggiuntivo nella classe `CSimpleArray`.  Fornisce un metodo per confrontare due elementi archiviati in un oggetto `CSimpleArray`.  Per impostazione predefinita, gli elementi vengono confrontati utilizzando **operator\=\(\)**, ma se la matrice contiene i tipi di dati complessi che mancano nel proprio operatore di uguaglianza, sarà necessario eseguire l'override di questa classe.  
  
## Requisiti  
 **Header:** atlsimpcoll.h  
  
## Vedere anche  
 [CSimpleArray Class](../../atl/reference/csimplearray-class.md)   
 [CSimpleArrayEqualHelperFalse Class](../../atl/reference/csimplearrayequalhelperfalse-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)