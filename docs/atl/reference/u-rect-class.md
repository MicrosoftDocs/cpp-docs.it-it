---
title: "_U_RECT Class | Microsoft Docs"
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
  - "ATL::_U_RECT"
  - "_U_RECT"
  - "ATL._U_RECT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_U_RECT class"
  - "U_RECT class"
ms.assetid: 5f880a2d-09cf-4327-bf32-a3519c4dcd63
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _U_RECT Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe di adattatori dell'argomento consente puntatori o riferimenti `RECT` da passare a una funzione implementata in termini di puntatori.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class _U_RECT  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[\_U\_RECT::\_U\_RECT](../Topic/_U_RECT::_U_RECT.md)|Costruttore.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[\_U\_RECT::m\_lpRect](../Topic/_U_RECT::m_lpRect.md)|Puntatore a `RECT`.|  
  
## Note  
 La classe definisce due overload del costruttore: uno accetta un argomento **RECT&** e l'altro accetta un argomento `LPRECT`.  Il primo contiene l'indirizzo dell'argomento di riferimento in un singolo membro dati della classe, [m\_lpRect](../Topic/_U_RECT::m_lpRect.md).  L'argomento del costruttore del puntatore viene memorizzato direttamente senza conversione.  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)