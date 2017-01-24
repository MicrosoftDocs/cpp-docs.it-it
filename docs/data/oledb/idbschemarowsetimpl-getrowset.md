---
title: "IDBSchemaRowsetImpl::GetRowset | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::IDBSchemaRowsetImpl::GetRowset"
  - "ATL.IDBSchemaRowsetImpl.GetRowset"
  - "IDBSchemaRowsetImpl<SessionClass>::GetRowset"
  - "IDBSchemaRowsetImpl.GetRowset"
  - "IDBSchemaRowsetImpl::GetRowset"
  - "ATL::IDBSchemaRowsetImpl<SessionClass>::GetRowset"
  - "GetRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetRowset (metodo)"
ms.assetid: 3ae28c22-e186-4a15-8591-b0192e784a6f
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDBSchemaRowsetImpl::GetRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un set di righe dello schema.  
  
## Sintassi  
  
```  
  
STDMETHOD (GetRowset)(  
   IUnknown *  
pUnkOuter  
,  
   REFGUID   
rguidSchema  
,  
   ULONG   
cRestrictions  
,  
   const VARIANT   
rgRestrictions  
[],  
   REFIID   
riid  
,  
   ULONG   
cPropertySets  
,  
   DBPROPSET   
rgPropertySets  
[],  
   IUnknown **  
ppRowset  
);  
  
```  
  
#### Parametri  
 `pUnkOuter`  
 \[in\] Un **IUnknown** esterno in caso di aggregazione, **NULL** altrimenti.  
  
 `rguidSchema`  
 \[in\] Un riferimento al GUID del set di righe dello schema richiesto \(ad esempio `DBSCHEMA_TABLES`\).  
  
 `cRestrictions`  
 \[in\] Conteggio delle limitazioni da applicare al set di righe.  
  
 `rgRestrictions`  
 \[in\] Matrice di `cRestrictions` **VARIANT** che rappresenta le restrizioni.  
  
 `riid`  
 \[in\] IID per richiedere il set di righe dello schema appena creato.  
  
 `cPropertySets`  
 \[in\] Il numero di insiemi di proprietà da impostare.  
  
 `rgPropertySets`  
 \[in\/out\] Matrice delle strutture [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) per impostare il set di righe dello schema appena creato.  
  
 `ppRowset`  
 \[out\] Puntatore all'interfaccia richiesta nel set di righe dello schema appena creato.  
  
## Note  
 Il metodo richiede che l'utente disponga di una mappa di schema nella classe di sessione. Usando le informazioni di mapping dello schema, `GetRowset` crea uno specifico oggetto set di righe se il parametro `rguidSchema` è uguale a uno dei GUID delle voci di mapping. Per una descrizione della voce di mapping, vedere [SCHEMA\_ENTRY](../../data/oledb/schema-entry.md).  
  
 Vedere [IDBSchemaRowset::GetRowset](https://msdn.microsoft.com/en-us/library/ms722634.aspx) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md)   
 [IDBSchemaRowsetImpl Class Members](http://msdn.microsoft.com/it-it/e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [IDBSchemaRowsetImpl::GetSchemas](../../data/oledb/idbschemarowsetimpl-getschemas.md)   
 [Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)