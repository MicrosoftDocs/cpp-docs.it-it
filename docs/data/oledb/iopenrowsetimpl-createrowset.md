---
title: "IOpenRowsetImpl::CreateRowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IOpenRowsetImpl.CreateRowset"
  - "IOpenRowsetImpl::CreateRowset"
  - "CreateRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateRowset (metodo)"
ms.assetid: 69041cf6-7a2f-4409-a26e-6e984c24986e
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# IOpenRowsetImpl::CreateRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea un oggetto rowset.  Non chiamato direttamente dall'utente.  Vedere [IOpenRowset::OpenRowset](https://msdn.microsoft.com/en-us/library/ms716724.aspx)*in OLE DB Programmer's Reference.*  
  
## Sintassi  
  
```  
  
      template <class   
      RowsetClass  
      >  
HRESULT CreateRowset(  
   IUnknown* pUnkOuter,  
   DBID* pTableID,  
   DBID* pIndexID,  
   REFIID riid,  
   ULONG cPropertySets,  
   DBPROPSET rgPropertySets[],  
   IUnknown** ppRowset,  
   RowsetClass*& pRowsetObj   
);  
```  
  
#### Parametri  
 `RowsetClass`  
 Un membro della classe modello che rappresenta la classe del rowset dell'utente.  Solitamente generato dalla procedura guidata.  
  
 `pRowsetObj`  
 \[out\] puntatore A un oggetto rowset.  In genere questo parametro non viene utilizzato, ma può essere utilizzato se è necessario eseguire ulteriori operazioni sul rowset prima di passarli a un oggetto COM.  La durata di `pRowsetObj` è associata da `ppRowset`.  
  
 Per altri parametri, vedere [IOpenRowset::OpenRowset](https://msdn.microsoft.com/en-us/library/ms716724.aspx)*in OLE DB Programmer's Reference.*  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IOpenRowsetImpl](../../data/oledb/iopenrowsetimpl-class.md)