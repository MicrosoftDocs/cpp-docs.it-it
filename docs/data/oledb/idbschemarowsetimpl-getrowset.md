---
title: 'IDBSchemaRowsetImpl:: GetRowset | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::IDBSchemaRowsetImpl::GetRowset
- ATL.IDBSchemaRowsetImpl.GetRowset
- IDBSchemaRowsetImpl<SessionClass>::GetRowset
- IDBSchemaRowsetImpl.GetRowset
- IDBSchemaRowsetImpl::GetRowset
- ATL::IDBSchemaRowsetImpl<SessionClass>::GetRowset
- GetRowset
dev_langs:
- C++
helpviewer_keywords:
- GetRowset method
ms.assetid: 3ae28c22-e186-4a15-8591-b0192e784a6f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4ec479809bf95d4a88338401013b7f5980b703d8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33103749"
---
# <a name="idbschemarowsetimplgetrowset"></a>IDBSchemaRowsetImpl::GetRowset
Restituisce un set di righe dello schema.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD (GetRowset)(IUnknown *pUnkOuter,  
   REFGUID rguidSchema,  
   ULONG cRestrictions,  
   const VARIANT rgRestrictions[],  
   REFIID riid,  
   ULONG cPropertySets,  
   DBPROPSET rgPropertySets[],  
   IUnknown **ppRowset);  
```  
  
#### <a name="parameters"></a>Parametri  
 `pUnkOuter`  
 [in] Un **IUnknown** esterno in caso di aggregazione, **NULL**altrimenti.  
  
 `rguidSchema`  
 [in] Un riferimento al GUID del set di righe dello schema richiesto (ad esempio `DBSCHEMA_TABLES`).  
  
 `cRestrictions`  
 [in] Conteggio delle limitazioni da applicare al set di righe.  
  
 `rgRestrictions`  
 [in] Matrice di `cRestrictions`**VARIANT**che rappresenta le restrizioni.  
  
 `riid`  
 [in] IID per richiedere il set di righe dello schema appena creato.  
  
 `cPropertySets`  
 [in] Il numero di insiemi di proprietà da impostare.  
  
 `rgPropertySets`  
 [in/out] Matrice delle strutture [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) per impostare il set di righe dello schema appena creato.  
  
 `ppRowset`  
 [out] Puntatore all'interfaccia richiesta nel set di righe dello schema appena creato.  
  
## <a name="remarks"></a>Note  
 Il metodo richiede che l'utente disponga di una mappa di schema nella classe di sessione. Usando le informazioni di mapping dello schema, `GetRowset` crea uno specifico oggetto set di righe se il parametro `rguidSchema` è uguale a uno dei GUID delle voci di mapping. Per una descrizione della voce di mapping, vedere [SCHEMA_ENTRY](../../data/oledb/schema-entry.md) .  
  
 Vedere [IDBSchemaRowset:: GetRowset](https://msdn.microsoft.com/en-us/library/ms722634.aspx) in Windows SDK.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [IDBSchemaRowsetImpl (classe)](../../data/oledb/idbschemarowsetimpl-class.md)   
 [Membri di classe IDBSchemaRowsetImpl](http://msdn.microsoft.com/en-us/e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [IDBSchemaRowsetImpl::GetSchemas](../../data/oledb/idbschemarowsetimpl-getschemas.md)   
 [Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)