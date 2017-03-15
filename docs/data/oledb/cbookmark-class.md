---
title: "Classe CBookmark | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CBookmark"
  - "ATL::CBookmark<nSize>"
  - "CBookmark"
  - "ATL.CBookmark<nSize>"
  - "ATL::CBookmark"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBookmark (classe)"
ms.assetid: bc942f95-6f93-41d9-bb6e-bcdae4ae0b7a
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Classe CBookmark
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizza un valore bookmark nel buffer.  
  
## Sintassi  
  
```  
template < DBLENGTH nSize = 0 >  
class CBookmark : public CBookmarkBase  
template < >  
class CBookmark< 0 > : public CBookmarkBase  
```  
  
#### Parametri  
 `nSize`  
 La dimensione del buffer bookmark in byte.  Quando `nSize` è zero, il buffer del segnalibro verrà creato dinamicamente in fase di esecuzione.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[CBookmark](../../data/oledb/cbookmark-class.md)|Il costruttore|  
|[GetBuffer](../../data/oledb/cbookmark-getbuffer.md)|Recupera il puntatore nel buffer.|  
|[GetSize](../../data/oledb/cbookmark-getsize.md)|Recupera la dimensione del buffer in byte.|  
|[SetBookmark](../../data/oledb/cbookmark-setbookmark.md)|Impostare il valore del segnalibro.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../../data/oledb/cbookmark-operator-equal.md)|Assegna una classe di `CBookmark` a un altro.|  
  
## Note  
 **CBookmark\<0\>** è una specializzazione di template di `CBookmark`; il suo buffer viene creato dinamicamente in fase di esecuzione.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)