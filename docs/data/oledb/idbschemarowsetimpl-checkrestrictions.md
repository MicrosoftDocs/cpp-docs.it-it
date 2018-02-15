---
title: 'IDBSchemaRowsetImpl:: CheckRestrictions | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CheckRestrictions
- IDBSchemaRowsetImpl::CheckRestrictions
- IDBSchemaRowsetImpl.CheckRestrictions
dev_langs:
- C++
helpviewer_keywords:
- CheckRestrictions method
ms.assetid: 3c9d77d2-0e4b-48fa-80db-d735da19f1cf
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ab19a661e02bcfd0f5ca3730c69e22adfc3ae4db
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="idbschemarowsetimplcheckrestrictions"></a>IDBSchemaRowsetImpl::CheckRestrictions
Controlla la validità delle restrizioni rispetto a un set di righe dello schema.  
  
## <a name="syntax"></a>Sintassi  
  
```
HRESULT CheckRestrictions(REFGUID rguidSchema,  
   ULONG cRestrictions,  const VARIANT rgRestrictions[]);  
```  
  
#### <a name="parameters"></a>Parametri  
 `rguidSchema`  
 [in] Un riferimento al GUID del set di righe dello schema richiesto (ad esempio `DBSCHEMA_TABLES`).  
  
 `cRestrictions`  
 [in] Il numero di restrizioni che il consumer ha passato per il set di righe dello schema.  
  
 `rgRestrictions`  
 [in] Una matrice di lunghezza *cRestrictions* di valori di restrizione da impostare. Per altre informazioni vedere la descrizione del parametro `rgRestrictions` in [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md).  
  
## <a name="remarks"></a>Note  
 Usa `CheckRestrictions` per controlla la validità delle restrizioni per un set di righe dello schema. Controlla le restrizioni per i set di righe dello schema `DBSCHEMA_TABLES`, **DBSCHEMA_COLUMNS**e **DBSCHEMA_PROVIDER_TYPES** . È possibile chiamarlo per determinare se la chiamata di un consumer a **IDBSchemaRowset::GetRowset** è corretta. Se si desidera supportare set di righe dello schema diversi da quelli elencati sopra, creare una funzione personalizzata per eseguire questa operazione.  
  
 `CheckRestrictions` determina se il consumer sta chiamando [GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md) con la corretta restrizione e il tipo corretto di restrizione (ad esempio un `VT_BSTR` per una stringa) supportato dal provider. Determina inoltre se è supportato il numero corretto di restrizioni. Per impostazione predefinita `CheckRestrictions` chiederà al provider, tramite la chiamata di [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md) , le restrizioni che supporta su un determinato set di righe. Quindi confronterà le restrizioni del consumer con quelle supportate dal provider dando un esito positivo o negativo.  
  
 Per ulteriori informazioni sui set di righe dello schema, vedere [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) nel *riferimento per programmatori OLE DB* in Windows SDK.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [IDBSchemaRowsetImpl (classe)](../../data/oledb/idbschemarowsetimpl-class.md)   
 [Membri di classe IDBSchemaRowsetImpl](http://msdn.microsoft.com/en-us/e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)