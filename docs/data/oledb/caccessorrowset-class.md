---
title: CAccessorRowset (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CAccessorRowset
- ATL.CAccessorRowset
- ATL::CAccessorRowset
dev_langs: C++
helpviewer_keywords: CAccessorRowset class
ms.assetid: bd4f58ed-cebf-4d43-8985-1e5fcbf06953
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9750393a96a504b20ce861624ba94f8336fd9d4f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="caccessorrowset-class"></a>Classe CAccessorRowset
Incapsula un set di righe e le funzioni di accesso associati in un'unica classe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <   
   class TAccessor = CNoAccessor,    
   template <typename T> class TRowset = CRowset    
>  
class CAccessorRowset :   
   public TAccessor,    
   public TRowset<TAccessor>  
```  
  
#### <a name="parameters"></a>Parametri  
 `TAccessor`  
 Una classe di funzione di accesso.  
  
 `TRowset`  
 Una classe di rowset.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Operazione di binding](../../data/oledb/caccessorrowset-bind.md)|Consente di creare associazioni (utilizzato quando **bBind** è specificato come false in [CCommand::](../../data/oledb/ccommand-open.md)).|  
|[CAccessorRowset](../../data/oledb/caccessorrowset-caccessorrowset.md)|Costruttore.|  
|[Chiudi](../../data/oledb/caccessorrowset-close.md)|Chiude il set di righe e le funzioni di accesso.|  
|[FreeRecordMemory](../../data/oledb/caccessorrowset-freerecordmemory.md)|Libera tutte le colonne nel record corrente che devono essere liberate.|  
|[GetColumnInfo](../../data/oledb/caccessorrowset-getcolumninfo.md)|Implementa [IColumnsInfo:: GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx).|  
  
## <a name="remarks"></a>Note  
 Classe `TAccessor` gestisce la funzione di accesso. Classe *TRowset* gestisce il set di righe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)