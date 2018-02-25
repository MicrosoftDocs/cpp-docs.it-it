---
title: SCHEMA_ENTRY | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- SCHEMA_ENTRY
dev_langs:
- C++
helpviewer_keywords:
- SCHEMA_ENTRY macro
ms.assetid: e8bee479-80f3-417e-8f41-cdaddd49690c
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: eed324c184036262093e266c8d246874cd2865a7
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="schemaentry"></a>SCHEMA_ENTRY
Associa un GUID a una classe.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      SCHEMA_ENTRY(guid,  
   rowsetClass);   
```  
  
#### <a name="parameters"></a>Parametri  
 `guid`  
 Un GUID di rowset dello schema. Vedere [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) nel *riferimento per programmatori OLE DB* per un elenco di set di righe dello schema e i relativi GUID.  
  
 *rowsetClass*  
 La classe che verrà creata per rappresentare il set di righe dello schema.  
  
## <a name="remarks"></a>Note  
 [IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md) quindi possibile eseguire una query della mappa per un elenco di GUID, o se è stato specificato un GUID, è possibile creare un set di righe. Set di righe dello schema `IDBSchemaRowsetImpl` crea è simile a uno standard `CRowsetImpl`-classe derivata, ad eccezione del fatto che è necessario fornire un **Execute** metodo che ha la firma seguente:  
  
```  
HRESULT Execute (LONG* pcRowsAffected,  
    ULONG cRestrictions,  
    const VARIANT* rgRestrictions);  
```  
  
 Questo **Execute** funzione inserisce i dati del set di righe. Crea la creazione guidata progetto ATL, come descritto in [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) nel *riferimento per programmatori OLE DB*, tre iniziale rowset dello schema nel progetto per ognuno dei tre schemi OLE DB obbligatori:  
  
-   `DBSCHEMA_TABLES`  
  
-   **DBSCHEMA_COLUMNS**  
  
-   **DBSCHEMA_PROVIDER_TYPES**  
  
 La procedura guidata aggiunge anche tre voci corrispondenti nel mapping dello schema. Vedere [la creazione di un modello Provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md) per ulteriori informazioni sulla creazione guidata per creare un provider.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per modelli Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [BEGIN_SCHEMA_MAP](../../data/oledb/begin-schema-map.md)   
 [END_SCHEMA_MAP](../../data/oledb/end-schema-map.md)