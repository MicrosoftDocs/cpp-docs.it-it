---
title: "IRowsetUpdateImpl::Update | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::IRowsetUpdateImpl::Update"
  - "IRowsetUpdateImpl::Update"
  - "IRowsetUpdateImpl.Update"
  - "ATL.IRowsetUpdateImpl.Update"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Update (metodo)"
ms.assetid: 9ec6884d-aa9c-4871-a803-c048f162403c
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetUpdateImpl::Update
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Trasmette le modifiche apportate alla riga dall'ultima raccolta o aggiornamento.  
  
## Sintassi  
  
```  
  
      STDMETHOD ( Update )(  
   HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBCOUNTITEM* pcRows,  
   HROW** prgRows,  
   DBROWSTATUS** prgRowStatus   
);  
```  
  
#### Parametri  
 `hReserved`  
 \[in\] corrisponde al parametro di `hChapter` in [IRowsetUpdate::Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx).  
  
 Per altri parametri, vedere [IRowsetUpdate::Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx)*in OLE DB Programmer's Reference*.  
  
## Note  
 Le modifiche vengono trasmesse chiamando [IRowsetChangeImpl::FlushData](../../data/oledb/irowsetchangeimpl-flushdata.md).  Il consumer deve chiamare [CRowset::Update](../../data/oledb/crowset-update.md) perché le modifiche siano effettive.  Impostare *il prgRowstatus* su un valore appropriato come descritto in [Stati di riga](https://msdn.microsoft.com/en-us/library/ms722752.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)