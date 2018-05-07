---
title: Classe IDBSchemaRowsetImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IDBSchemaRowsetImpl
dev_langs:
- C++
helpviewer_keywords:
- IDBSchemaRowsetImpl class
ms.assetid: bd7bf0d7-a1c6-4afa-88e3-cfdbdf560703
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: dc9da29bcd49b227596325913d521347b6b0ca0e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="idbschemarowsetimpl-class"></a>IDBSchemaRowsetImpl (classe)
Fornisce l'implementazione per i set di righe dello schema.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class SessionClass>  
class ATL_NO_VTABLE IDBSchemaRowsetImpl : public IDBSchemaRowset  
```  
  
#### <a name="parameters"></a>Parametri  
 `SessionClass`  
 La classe da cui `IDBSchemaRowsetImpl` viene ereditata. In genere, questa classe corrisponde alla classe sessione dell'utente.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CheckRestrictions](../../data/oledb/idbschemarowsetimpl-checkrestrictions.md)|Controlla la validità delle restrizioni rispetto a un set di righe dello schema.|  
|[CreateSchemaRowset](../../data/oledb/idbschemarowsetimpl-createschemarowset.md)|Implementa una funzione di creazione di oggetti COM per l'oggetto specificato dal parametro di modello.|  
|[SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md)|Specifica le restrizioni supportate su uno specifico set di righe dello schema.|  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md)|Restituisce un set di righe dello schema.|  
|[GetSchemas](../../data/oledb/idbschemarowsetimpl-getschemas.md)|Restituisce un elenco di set di righe dello schema accessibili da [IDBSchemaRowsetImpl::GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md).|  
  
## <a name="remarks"></a>Note  
 Questa classe implementa l'interfaccia [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) e la funzione di creazione di modelli [CreateSchemaRowset](../../data/oledb/idbschemarowsetimpl-createschemarowset.md).  
  
 OLE DB usa set di righe dello schema per restituire dati relativi ai dati in un provider. Questi dati vengono spesso definiti "metadati". Per impostazione predefinita, un provider deve sempre supportare `DBSCHEMA_TABLES`, **DBSCHEMA_COLUMNS**e **DBSCHEMA_PROVIDER_TYPES**, come descritto in [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in *OLE DB Programmer's Reference*(Guida di riferimento per programmatori OLE DB). I set di righe vengono definiti in una mappa di schema. Per informazioni sulle voci della mappa di schema, vedere [SCHEMA_ENTRY](../../data/oledb/schema-entry.md).  
  
 La creazione guidata provider OLEDB, all'interno della creazione guidata oggetto ATL, genera automaticamente il codice per i set di righe dello schema nel progetto. Per impostazione predefinita, la procedura guidata supporta i set di righe dello schema obbligatori menzionati in precedenza. Quando si crea un consumer con la creazione guidata oggetto ATL, la procedura guidata usa i set di dati dello schema per associare i dati corretti a un provider. Se non si implementano i set di righe dello schema per fornire i metadati corretti, la procedura guidata non li assocerà.  
  
 Per informazioni su come supportare i set di righe dello schema nel provider, vedere [Supporto dei set di righe dello schema](../../data/oledb/supporting-schema-rowsets.md).  
  
 Per altre informazioni sui set di dati dello schema, vedere [Set di righe dello schema](https://msdn.microsoft.com/en-us/library/ms712921.aspx) in *OLE DB Programmer's Reference*(Guida di riferimento per programmatori OLE DB).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Membri di classe IDBSchemaRowsetImpl](http://msdn.microsoft.com/en-us/e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)   
 [Supporto dei rowset dello schema](../../data/oledb/supporting-schema-rowsets.md)