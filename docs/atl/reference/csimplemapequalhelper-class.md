---
title: "CSimpleMapEqualHelper Class | Microsoft Docs"
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
  - "CSimpleMapEqualHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleMapEqualHelper class"
ms.assetid: 9bb2968a-d609-405c-8272-ff3b42df6164
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSimpleMapEqualHelper Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un helper per la classe [CSimpleMap](../../atl/reference/csimplemap-class.md).  
  
## Sintassi  
  
```  
  
      template <  
   class TKey,  
   class TVal   
>  
class CSimpleMapEqualHelper  
```  
  
#### Parametri  
 `TKey`  
 l'elemento chiave.  
  
 `TVal`  
 l'elemento di valore.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleMapEqualHelper::IsEqualKey](../Topic/CSimpleMapEqualHelper::IsEqualKey.md)|\(Proprietà statica\) testa due chiavi per uguaglianza.|  
|[CSimpleMapEqualHelper::IsEqualValue](../Topic/CSimpleMapEqualHelper::IsEqualValue.md)|\(Proprietà statica\) verifica l'uguaglianza di due valori.|  
  
## Note  
 Questa classe di tratti è un oggetto aggiuntivo nella classe `CSimpleMap`.  Fornisce metodi per confrontare due elementi oggetto `CSimpleMap` \(in particolare, la chiave e componenti di valore\) per uguaglianza.  Per impostazione predefinita, le chiavi e i valori vengono confrontati utilizzando `operator==()`, ma se la mappa contiene i tipi di dati complessi che mancano nel proprio operatore di uguaglianza, la classe può essere sottoposto a override per fornire la funzionalità richiesta aggiuntiva.  
  
## Requisiti  
 **intestazione:** atlsimpcoll.h  
  
## Vedere anche  
 [CSimpleMapEqualHelperFalse Class](../../atl/reference/csimplemapequalhelperfalse-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)