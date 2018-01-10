---
title: CStreamRowset (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CStreamRowset<TAccessor>
- ATL::CStreamRowset
- CStreamRowset
- ATL.CStreamRowset<TAccessor>
- ATL.CStreamRowset
dev_langs: C++
helpviewer_keywords: CStreamRowset class
ms.assetid: a106e953-a38a-464e-8ea5-28963d9e4811
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 32c4aa20f805ee141918e7c073709ec33b4d29ca
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cstreamrowset-class"></a>Classe CStreamRowset
Utilizzato un `CCommand` o `CTable` dichiarazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class TAccessor = CAccessorBase>  
class CStreamRowset  
```  
  
#### <a name="parameters"></a>Parametri  
 `TAccessor`  
 Una classe di funzione di accesso.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CStreamRowset](../../data/oledb/cstreamrowset-cstreamrowset.md)|Costruttore. Crea e inizializza il `CStreamRowset` oggetto.|  
|[Chiudi](../../data/oledb/cstreamrowset-close.md)|Versioni di [ISequentialStream](https://msdn.microsoft.com/en-us/library/ms718035.aspx) puntatore a interfaccia nella classe.|  
  
## <a name="remarks"></a>Note  
 Utilizzare `CStreamRowset` nel `CCommand` o `CTable` dichiarazione, ad esempio:  
  
 [!code-cpp[NVC_OLEDB_Consumer#11](../../data/oledb/codesnippet/cpp/cstreamrowset-class_1.cpp)]  
  
 oppure  
  
 [!code-cpp[NVC_OLEDB_Consumer#12](../../data/oledb/codesnippet/cpp/cstreamrowset-class_2.cpp)]  
  
 `ICommand::Execute`Restituisce un `ISequentialStream` puntatore, che viene archiviato in `m_spStream`. Utilizzare quindi la **lettura** metodo per recuperare i dati (stringa Unicode) in formato XML. Ad esempio:  
  
 [!code-cpp[NVC_OLEDB_Consumer#13](../../data/oledb/codesnippet/cpp/cstreamrowset-class_3.cpp)]  
  
 SQL Server 2000 esegue il formattazione XML e restituisce tutte le colonne e tutte le righe del set di righe in un'unica stringa XML.  
  
> [!NOTE]
>  Questa funzionalità funziona solo con SQL Server 2000.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)