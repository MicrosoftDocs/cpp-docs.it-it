---
title: 'Iopenrowsetimpl:: OPENROWSET | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- OpenRowset
- IOpenRowsetImpl::OpenRowset
- IOpenRowsetImpl.OpenRowset
dev_langs: C++
helpviewer_keywords: OpenRowset method
ms.assetid: 2ece8d6c-d165-4f1d-b155-8609bbb60eb6
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0382c114975733b07616b697b709a297bef9ec48
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="iopenrowsetimplopenrowset"></a>IOpenRowsetImpl::OpenRowset
Apre e restituisce un set di righe che include tutte le righe da una singola tabella di base o un indice.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 Vedere [IOpenRowset:: OPENROWSET](https://msdn.microsoft.com/en-us/library/ms716724.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="remarks"></a>Note  
 Questo metodo non viene trovato in ATLDB. H. Quando si crea un provider viene creato dalla creazione guidata oggetto ATL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IOpenRowsetImpl](../../data/oledb/iopenrowsetimpl-class.md)