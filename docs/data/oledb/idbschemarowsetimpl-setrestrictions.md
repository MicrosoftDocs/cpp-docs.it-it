---
title: "IDBSchemaRowsetImpl::SetRestrictions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IDBSchemaRowsetImpl::SetRestrictions"
  - "SetRestrictions"
  - "IDBSchemaRowsetImpl.SetRestrictions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetRestrictions (metodo)"
ms.assetid: 707d5065-b853-4d38-9b67-3066b4d3b279
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# IDBSchemaRowsetImpl::SetRestrictions
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica le restrizioni supportate su uno specifico set di righe dello schema.  
  
## Sintassi  
  
```  
  
void SetRestrictions(  
   ULONG   
cRestrictions  
,  
   GUID* /*   
rguidSchema  
*/,  
   ULONG*   
rgRestrictions  
);  
  
```  
  
#### Parametri  
 `cRestrictions`  
 \[in\] Numero di restrizioni nella matrice `rgRestrictions` e numero di GUID nella matrice `rguidSchema`.  
  
 `rguidSchema`  
 \[in\] Matrice di GUID del set di righe dello schema per il quale recuperare le restrizioni. Ogni elemento della matrice contiene il GUID di un set di righe di uno schema \(ad esempio, `DBSCHEMA_TABLES`\).  
  
 `rgRestrictions`  
 \[in\] Matrice di lunghezza `cRestrictions` di valori di restrizione da impostare. Ogni elemento corrisponde alle restrizioni nel set di righe dello schema identificato dal GUID. Se il provider non supporta il set di righe dello schema, l'elemento è impostato su zero. In caso contrario, il valore **ULONG** contiene una maschera di bit che rappresenta le restrizioni supportate in tale set di righe dello schema. Per altre informazioni sulle restrizioni corrispondenti a un particolare set di righe dello schema, vedere la tabella dei GUID dei set di righe in [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in *OLE DB Programmer's Reference* \(Guida di riferimento per programmatori OLE DB\) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Note  
 L'oggetto **IDBSchemaRowset** chiama `SetRestrictions` per determinare le restrizioni supportate su uno specifico set di righe dello schema \(viene chiamato da [GetSchemas](../../data/oledb/idbschemarowsetimpl-getschemas.md) tramite un puntatore con upcast\). Le restrizioni consentono agli utenti di recuperare solo le righe corrispondenti \(ad esempio, trovare tutte le colonne nella tabella "MyTable"\). Sono facoltative e, nel caso in cui nessuna sia supportata \(impostazione predefinita\), vengono restituiti sempre tutti i dati.  
  
 L'implementazione predefinita di questo metodo imposta gli elementi della matrice `rgRestrictions` su 0. Per impostare restrizioni diverse da quelle predefinite nella classe di sessione eseguire l'override di tali impostazioni.  
  
 Per informazioni su come implementare il supporto per i set di righe dello schema, vedere [Supporto dei set di righe dello schema](../../data/oledb/supporting-schema-rowsets.md).  
  
 Per un esempio di provider che supporta i set di righe dello schema, vedere l'esempio [UpdatePV](../../top/visual-cpp-samples.md).  
  
 Per altre informazioni sui set di righe dello schema, vedere [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in *OLE DB Programmer's Reference* \(Guida di riferimento per programmatori OLE DB\) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md)   
 [IDBSchemaRowsetImpl Class Members](http://msdn.microsoft.com/it-it/e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)   
 [Supporto dei rowset dello schema](../../data/oledb/supporting-schema-rowsets.md)   
 [UpdatePV](../../top/visual-cpp-samples.md)