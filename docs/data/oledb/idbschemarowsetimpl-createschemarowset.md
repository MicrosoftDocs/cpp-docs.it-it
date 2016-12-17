---
title: "IDBSchemaRowsetImpl::CreateSchemaRowset | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IDBSchemaRowsetImpl::CreateSchemaRowset"
  - "ATL::IDBSchemaRowsetImpl::CreateSchemaRowset"
  - "CreateSchemaRowset"
  - "IDBSchemaRowsetImpl.CreateSchemaRowset"
  - "ATL.IDBSchemaRowsetImpl.CreateSchemaRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateSchemaRowset (metodo)"
ms.assetid: ad3e3e4d-45b9-461c-b7b8-3af6843631b1
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDBSchemaRowsetImpl::CreateSchemaRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa una funzione di creazione di oggetti COM per l'oggetto specificato dal parametro di modello.  
  
## Sintassi  
  
```  
  
template < class   
SchemaRowsetClass  
 >  
HRESULT CreateSchemaRowset(  
   IUnknown *  
pUnkOuter  
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
   IUnknown**   
ppRowset  
,  
   SchemaRowsetClass*&   
pSchemaRowset  
);  
  
```  
  
#### Parametri  
 `pUnkOuter`  
 \[in\] Un [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) esterno in caso di aggregazione, **NULL** altrimenti.  
  
 `cRestrictions`  
 \[in\] Il conteggio delle limitazioni applicate al set di righe dello schema.  
  
 `rgRestrictions`  
 \[in\] Una matrice di `cRestrictions` **VARIANT** da applicare al set di righe.  
  
 `riid`  
 \[in\] L'interfaccia a [QueryInterface](../../atl/queryinterface.md) per l'**IUnknown** di output.  
  
 `cPropertySets`  
 \[in\] Il numero di insiemi di proprietà da impostare.  
  
 `rgPropertySets`  
 \[in\] Una matrice di strutture [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) che specificano le proprietà da impostare.  
  
 `ppRowset`  
 \[out\] L'**IUnknown** in uscita richiesta da `riid`. Questa **IUnknown** è un'interfaccia sull'oggetto set di righe dello schema.  
  
 `pSchemaRowset`  
 \[out\] Un puntatore a un'istanza della classe del set di righe dello schema. Questo parametro in genere non viene usato ma può essere aggiunto se è necessario eseguire altro lavoro sul set di righe dello schema passandolo a un oggetto COM. La durata di `pSchemaRowset` è associata da `ppRowset`.  
  
## Valore restituito  
 Un valore `HRESULT` standard.  
  
## Note  
 Questa funzione implementa un creatore generico per tutti i tipi di set di righe dello schema. Di solito l'utente non chiama questa funzione. Viene chiamata dall'implementazione della mappa dello schema.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md)   
 [IDBSchemaRowsetImpl Class Members](http://msdn.microsoft.com/it-it/e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [SCHEMA\_ENTRY](../../data/oledb/schema-entry.md)   
 [Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)