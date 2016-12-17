---
title: "CComAutoDeleteCriticalSection Class | Microsoft Docs"
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
  - "ATL.CComAutoDeleteCriticalSection"
  - "CComAutoDeleteCriticalSection"
  - "ATL::CComAutoDeleteCriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComAutoDeleteCriticalSection class"
ms.assetid: 2396dbea-1c60-4841-b50e-c4e18af311a3
caps.latest.revision: 17
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComAutoDeleteCriticalSection Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per ottenere e il rilascio della proprietà di un oggetto sezione critica.  
  
## Sintassi  
  
```  
  
class CComAutoDeleteCriticalSection : public CComSafeDeleteCriticalSection  
  
```  
  
## Note  
 `CComAutoDeleteCriticalSection` deriva dalla classe [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md).  Tuttavia, `CComAutoDeleteCriticalSection` esegue l'override del metodo [Condizione](../Topic/CComSafeDeleteCriticalSection::Term.md) di accesso `private`, che impone la pulizia di memoria interna per verificare solo quando le istanze di questa classe sono esterne a l o in modo esplicito eliminati dalla memoria.  
  
 Questa classe non fornisce metodi aggiuntivi sulla classe di base.  Vedere [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) e [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) per ulteriori informazioni sulle classi di supporto della sezione critica.  
  
## Gerarchia di ereditarietà  
 [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)  
  
 [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md)  
  
 `CComAutoDeleteCriticalSection`  
  
## Requisiti  
 **Header:** atlcore.h  
  
## Vedere anche  
 [CComSafeDeleteCriticalSection Class](../../atl/reference/ccomsafedeletecriticalsection-class.md)   
 [CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)