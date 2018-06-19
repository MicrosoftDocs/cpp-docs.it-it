---
title: 'IDBSchemaRowsetImpl:: SetRestrictions | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IDBSchemaRowsetImpl::SetRestrictions
- SetRestrictions
- IDBSchemaRowsetImpl.SetRestrictions
dev_langs:
- C++
helpviewer_keywords:
- SetRestrictions method
ms.assetid: 707d5065-b853-4d38-9b67-3066b4d3b279
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 8b6effd432b033941d404c4935cdbad5a2336ac8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33105855"
---
# <a name="idbschemarowsetimplsetrestrictions"></a>IDBSchemaRowsetImpl::SetRestrictions
Specifica le restrizioni supportate su uno specifico set di righe dello schema.  
  
## <a name="syntax"></a>Sintassi  
  
```
void SetRestrictions(ULONG cRestrictions,  
  GUID* /* rguidSchema */,  
   ULONG* rgRestrictions);  
```  
  
#### <a name="parameters"></a>Parametri  
 `cRestrictions`  
 [in] Numero di restrizioni nella matrice `rgRestrictions` e numero di GUID nella matrice `rguidSchema` .  
  
 `rguidSchema`  
 [in] Matrice di GUID del set di righe dello schema per il quale recuperare le restrizioni. Ogni elemento della matrice contiene il GUID di un set di righe di uno schema (ad esempio, `DBSCHEMA_TABLES`).  
  
 `rgRestrictions`  
 [in] Matrice di lunghezza `cRestrictions` di valori di restrizione da impostare. Ogni elemento corrisponde alle restrizioni nel set di righe dello schema identificato dal GUID. Se il provider non supporta il set di righe dello schema, l'elemento è impostato su zero. In caso contrario, il valore **ULONG** contiene una maschera di bit che rappresenta le restrizioni supportate in tale set di righe dello schema. Per ulteriori informazioni sulle restrizioni corrispondenti a un set di righe dello schema specifico, consultare la tabella di righe dello schema GUID in [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) nel *riferimento per programmatori OLE DB* in Windows SDK.  
  
## <a name="remarks"></a>Note  
 L'oggetto **IDBSchemaRowset** chiama `SetRestrictions` per determinare le restrizioni supportate su uno specifico set di righe dello schema (viene chiamato da [GetSchemas](../../data/oledb/idbschemarowsetimpl-getschemas.md) tramite un puntatore con upcast). Le restrizioni consentono agli utenti di recuperare solo le righe corrispondenti (ad esempio, trovare tutte le colonne nella tabella "MyTable"). Sono facoltative e, nel caso in cui nessuna sia supportata (impostazione predefinita), vengono restituiti sempre tutti i dati.  
  
 L'implementazione predefinita di questo metodo imposta gli elementi della matrice `rgRestrictions` su 0. Per impostare restrizioni diverse da quelle predefinite nella classe di sessione eseguire l'override di tali impostazioni.  
  
 Per informazioni su come implementare il supporto per i set di righe dello schema, vedere [Supporto dei set di righe dello schema](../../data/oledb/supporting-schema-rowsets.md).  
  
 Per un esempio di provider che supporta i set di righe dello schema, vedere l'esempio [UpdatePV](../../visual-cpp-samples.md) .  
  
 Per ulteriori informazioni sui set di righe dello schema, vedere [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) nel *riferimento per programmatori OLE DB* in Windows SDK.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [IDBSchemaRowsetImpl (classe)](../../data/oledb/idbschemarowsetimpl-class.md)   
 [Membri di classe IDBSchemaRowsetImpl](http://msdn.microsoft.com/en-us/e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)   
 [Supporto dei rowset dello Schema](../../data/oledb/supporting-schema-rowsets.md)   
 [UpdatePV](../../visual-cpp-samples.md)