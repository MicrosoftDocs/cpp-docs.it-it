---
title: 'IRowsetUpdateImpl:: M_mapcacheddata | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IRowsetUpdateImpl.m_mapCachedData
- IRowsetUpdateImpl::m_mapCachedData
- m_mapCachedData
dev_langs:
- C++
helpviewer_keywords:
- m_mapCachedData
ms.assetid: 65131743-8580-48c8-bb22-68f17c9dfa13
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: bd19f8706e50d1eefb26dadfb837d8bd4f13f061
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33103255"
---
# <a name="irowsetupdateimplmmapcacheddata"></a>IRowsetUpdateImpl::m_mapCachedData
Una mappa contenente i dati originali per l'operazione posticipata.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      CAtlMap<   
   HROW hRow,    
   Storage* pData   
>   
m_mapCachedData;  
```  
  
#### <a name="parameters"></a>Parametri  
 `hRow`  
 Handle per le righe per i dati.  
  
 `pData`  
 Puntatore ai dati da memorizzare nella cache. I dati sono di tipo *archiviazione* (classe di record utente). Vedere il *archiviazione* argomento di modello in [classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)