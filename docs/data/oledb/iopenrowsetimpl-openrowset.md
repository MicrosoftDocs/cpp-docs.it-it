---
title: "IOpenRowsetImpl::OpenRowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OpenRowset"
  - "IOpenRowsetImpl::OpenRowset"
  - "IOpenRowsetImpl.OpenRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OpenRowset (metodo)"
ms.assetid: 2ece8d6c-d165-4f1d-b155-8609bbb60eb6
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# IOpenRowsetImpl::OpenRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Apre e restituisce un rowset che include tutte le righe di una tabella o di un indice di base.  
  
## Sintassi  
  
```  
  
      HRESULT OpenRowset(  
   IUnknown* pUnkOuter,  
   DBID* pTableID,  
   DBID* pIndexID,  
   REFIID riid,  
   ULONG cPropertySets,  
   DBPROPSET rgPropertySets[],  
   IUnknown** ppRowset   
);  
```  
  
#### Parametri  
 Vedere [IOpenRowset::OpenRowset](https://msdn.microsoft.com/en-us/library/ms716724.aspx) nella *Guida di riferimento per programmatori OLE DB*.  
  
## Note  
 Questo metodo non viene trovato in ATLDB.H.  Viene creato dalla creazione guidata di un progetto ATL quando si crea un provider.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IOpenRowsetImpl](../../data/oledb/iopenrowsetimpl-class.md)