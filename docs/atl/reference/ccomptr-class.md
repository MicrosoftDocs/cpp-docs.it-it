---
title: "CComPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComPtr class"
ms.assetid: 22d9ea8d-ed66-4c34-940f-141db11e83bd
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CComPtr Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una classe del puntatore intelligente per gestire i puntatori all'interfaccia COM.  
  
## Sintassi  
  
```  
  
      template<  
   class T   
>  
class CComPtr  
```  
  
#### Parametri  
 `T`  
 Un'interfaccia COM che specifica il tipo di puntatore da archiviare.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtr::CComPtr](../Topic/CComPtr::CComPtr.md)|Costruttore.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtr::operator \=](../Topic/CComPtr::operator%20=.md)|Assegna un puntatore a un puntatore a un membro.|  
  
## Note  
 ATL utilizza `CComPtr` e [CComQIPtr](../../atl/reference/ccomqiptr-class.md) per gestire i puntatori all'interfaccia COM.  Entrambi sono derivati da [CComPtrBase](../../atl/reference/ccomptrbase-class.md)e entrambi eseguono il conteggio dei riferimenti automatico.  
  
 Le classi [CComQIPtr](../../atl/reference/ccomqiptr-class.md) e **CComPtr** possono risolvere le perdite di memoria esegue il conteggio dei riferimenti automatico.  Le seguenti funzioni che eseguono le stesse operazioni logiche, tuttavia, nota come la seconda versione può essere meno soggetta a errori utilizzando la classe **CComPtr** :  
  
 [!code-cpp[NVC_ATL_Utilities#130](../../atl/codesnippet/CPP/ccomptr-class_1.cpp)]  
  
 [!code-cpp[NVC_ATL_Utilities#131](../../atl/codesnippet/CPP/ccomptr-class_2.cpp)]  
  
 Nelle build di debug, atlsd.lib collegamento per l'analisi del codice.  
  
## Gerarchia di ereditarietà  
 [CComPtrBase](../../atl/reference/ccomptrbase-class.md)  
  
 `CComPtr`  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [CComPtr::CComPtr](../Topic/CComPtr::CComPtr.md)   
 [CComQIPtr::CComQIPtr](../Topic/CComQIPtr::CComQIPtr.md)   
 [Class Overview](../../atl/atl-class-overview.md)