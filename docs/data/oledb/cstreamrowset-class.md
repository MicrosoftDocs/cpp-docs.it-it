---
title: Classe CStreamRowset | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CStreamRowset<TAccessor>
- ATL::CStreamRowset
- CStreamRowset
- ATL.CStreamRowset<TAccessor>
- ATL.CStreamRowset
- CStreamRowset::CStreamRowset
- CStreamRowset.CStreamRowset
- ATL.CStreamRowset.CStreamRowset
- ATL::CStreamRowset::CStreamRowset
- CStreamRowset
- CStreamRowset<TAccessor>::CStreamRowset
- ATL::CStreamRowset<TAccessor>::CStreamRowset
- CStreamRowset<TAccessor>.Close
- ATL.CStreamRowset<TAccessor>.Close
- CStreamRowset::Close
- CStreamRowset<TAccessor>::Close
- ATL::CStreamRowset::Close
- ATL.CStreamRowset.Close
- ATL::CStreamRowset<TAccessor>::Close
- CStreamRowset.Close
dev_langs:
- C++
helpviewer_keywords:
- CStreamRowset class
- CStreamRowset class, constructor
- Close method
ms.assetid: a106e953-a38a-464e-8ea5-28963d9e4811
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 8b9f1c7aef4116ae057d771e66b5027c5783f64e
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39338012"
---
# <a name="cstreamrowset-class"></a>Classe CStreamRowset
Utilizzato in una `CCommand` o `CTable` dichiarazione.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CAccessorBase>  
class CStreamRowset  
```  
  
### <a name="parameters"></a>Parametri  
 *TAccessor*  
 Una classe di funzione di accesso.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CStreamRowset](#cstreamrowset)|Costruttore. Crea e inizializza il `CStreamRowset` oggetto.|  
|[Chiudi](#close)|Rilascia il [ISequentialStream](https://msdn.microsoft.com/library/ms718035.aspx) puntatore a interfaccia nella classe.|  
  
## <a name="remarks"></a>Note  
 Uso `CStreamRowset` nella `CCommand` o `CTable` dichiarazione, ad esempio:  
  
 [!code-cpp[NVC_OLEDB_Consumer#11](../../data/oledb/codesnippet/cpp/cstreamrowset-class_1.cpp)]  
  
 oppure  
  
 [!code-cpp[NVC_OLEDB_Consumer#12](../../data/oledb/codesnippet/cpp/cstreamrowset-class_2.cpp)]  
  
 `ICommand::Execute` Restituisce un `ISequentialStream` puntatore che viene archiviato in `m_spStream`. È quindi possibile usare il `Read` metodo per recuperare i dati (stringa Unicode) in formato XML. Ad esempio:  
  
 [!code-cpp[NVC_OLEDB_Consumer#13](../../data/oledb/codesnippet/cpp/cstreamrowset-class_3.cpp)]  
  
 SQL Server 2000 esegue il formattazione XML e restituirà tutte le colonne e tutte le righe del set di righe in un'unica stringa XML.  
  
> [!NOTE]
>  Questa funzionalità funziona solo con SQL Server 2000.  
  
## <a name="cstreamrowset"></a> CStreamRowset:: CStreamRowset
Crea e inizializza il `CStreamRowset` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
CStreamRowset();  
```  

## <a name="close"></a> CStreamRowset:: Close
Rilascia il [ISequentialStream](https://msdn.microsoft.com/library/ms718035.aspx) puntatore a interfaccia nella classe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
void Close();   
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)