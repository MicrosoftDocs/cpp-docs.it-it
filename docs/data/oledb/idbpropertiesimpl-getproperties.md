---
title: 'Idbpropertiesimpl:: GetProperties | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IDBPropertiesImpl::GetProperties
- IDBPropertiesImpl.GetProperties
- GetProperties
dev_langs:
- C++
helpviewer_keywords:
- GetProperties method
ms.assetid: ab24aebd-366d-49a1-b49b-bb46c6d90f05
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ee384683d83845b88cb4026f8ff67f6bb69ba8b0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33103343"
---
# <a name="idbpropertiesimplgetproperties"></a>IDBPropertiesImpl::GetProperties
Restituisce i valori delle proprietà nei gruppi di proprietà di origine dati, informazioni sull'origine dati e l'inizializzazione che sono attualmente impostati nell'oggetto origine dati o i valori delle proprietà nel gruppo di proprietà di inizializzazione che vengono impostati il enumeratore.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(GetProperties)(ULONG cPropertySets,   
   const DBPROPIDSET rgPropertySets[],   
   ULONG * pcProperties,   
   DBPROPSET ** prgProperties);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IDBProperties::GetProperties](https://msdn.microsoft.com/en-us/library/ms714344.aspx) nel *di riferimento per programmatori OLE DB*.  
  
 Alcuni parametri corrispondono ai *riferimento per programmatori OLE DB* parametri dei nomi diversi, che sono descritte nel **IDBProperties::GetProperties**:  
  
|Parametri di modelli OLE DB|*Riferimento per programmatori OLE DB* parametri|  
|--------------------------------|------------------------------------------------|  
|`cPropertySets`|`cPropertyIDSets`|  
|`rgPropertySets`|`rgPropertyIDSets`|  
|*pcProperties*|*pcPropertySets*|  
|*prgProperties*|*prgPropertySets*|  
  
## <a name="remarks"></a>Note  
 Se il provider viene inizializzato, questo metodo restituisce i valori delle proprietà nel **DBPROPSET_DATASOURCE**, **DBPROPSET_DATASOURCEINFO**, **DBPROPSET_DBINIT** gruppi di proprietà che sono attualmente impostati nell'oggetto origine dati. Se non è possibile inizializzare il provider, restituisce **DBPROPSET_DBINIT** solo proprietà del gruppo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IDBPropertiesImpl](../../data/oledb/idbpropertiesimpl-class.md)   
 [IDBPropertiesImpl::GetPropertyInfo](../../data/oledb/idbpropertiesimpl-getpropertyinfo.md)   
 [IDBPropertiesImpl::SetProperties](../../data/oledb/idbpropertiesimpl-setproperties.md)