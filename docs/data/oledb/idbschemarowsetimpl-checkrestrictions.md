---
title: "IDBSchemaRowsetImpl::CheckRestrictions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CheckRestrictions"
  - "IDBSchemaRowsetImpl::CheckRestrictions"
  - "IDBSchemaRowsetImpl.CheckRestrictions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CheckRestrictions (metodo)"
ms.assetid: 3c9d77d2-0e4b-48fa-80db-d735da19f1cf
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# IDBSchemaRowsetImpl::CheckRestrictions
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controlla la validità delle restrizioni rispetto a un set di righe dello schema.  
  
## Sintassi  
  
```  
  
HRESULT CheckRestrictions(  
   REFGUID   
rguidSchema  
,  
   ULONG   
cRestrictions  
,  
   const VARIANT   
rgRestrictions  
[]  
);  
  
```  
  
#### Parametri  
 `rguidSchema`  
 \[in\] Un riferimento al GUID del set di righe dello schema richiesto \(ad esempio `DBSCHEMA_TABLES`\).  
  
 `cRestrictions`  
 \[in\] Il numero di restrizioni che il consumer ha passato per il set di righe dello schema.  
  
 `rgRestrictions`  
 \[in\] Una matrice di lunghezza *cRestrictions* di valori di restrizione da impostare. Per altre informazioni vedere la descrizione del parametro `rgRestrictions` in [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md).  
  
## Note  
 Usa `CheckRestrictions` per controlla la validità delle restrizioni per un set di righe dello schema. Controlla le restrizioni per i set di righe dello schema`DBSCHEMA_TABLES`, **DBSCHEMA\_COLUMNS** e **DBSCHEMA\_PROVIDER\_TYPES**. È possibile chiamarlo per determinare se la chiamata di un consumer a **IDBSchemaRowset::GetRowset** è corretta. Se si desidera supportare set di righe dello schema diversi da quelli elencati sopra, creare una funzione personalizzata per eseguire questa operazione.  
  
 `CheckRestrictions` determina se il consumer sta chiamando [GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md) con la corretta restrizione e il tipo corretto di restrizione \(ad esempio un `VT_BSTR` per una stringa\) supportato dal provider. Determina inoltre se è supportato il numero corretto di restrizioni. Per impostazione predefinita `CheckRestrictions` chiederà al provider, tramite la chiamata di [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md), le restrizioni che supporta su un determinato set di righe. Quindi confronterà le restrizioni del consumer con quelle supportate dal provider dando un esito positivo o negativo.  
  
 Per altre informazioni sui set di righe dello schema, vedere [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in *OLE DB Programmer's Reference* \(Guida di riferimento per programmatori OLE DB\) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md)   
 [IDBSchemaRowsetImpl Class Members](http://msdn.microsoft.com/it-it/e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)