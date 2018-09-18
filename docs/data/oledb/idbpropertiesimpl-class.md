---
title: Classe IDBPropertiesImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IDBPropertiesImpl
- ATL.IDBPropertiesImpl
- ATL.IDBPropertiesImpl<T>
- ATL::IDBPropertiesImpl<T>
- ATL::IDBPropertiesImpl
- IDBPropertiesImpl::GetProperties
- IDBPropertiesImpl.GetProperties
- GetProperties
- IDBPropertiesImpl::GetPropertyInfo
- IDBPropertiesImpl.GetPropertyInfo
- GetPropertyInfo
- IDBPropertiesImpl.SetProperties
- SetProperties
- IDBPropertiesImpl::SetProperties
dev_langs:
- C++
helpviewer_keywords:
- IDBPropertiesImpl class
- GetProperties method
- GetPropertyInfo method
- SetProperties method
ms.assetid: a7f15a8b-95b2-4316-b944-d5d03f8d74ab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2c786783963bf2f3613228b87a7ede23eb75a450
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46025594"
---
# <a name="idbpropertiesimpl-class"></a>Classe IDBPropertiesImpl

Fornisce un'implementazione per il `IDBProperties` interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T>   
class ATL_NO_VTABLE IDBPropertiesImpl   
   : public IDBProperties, public CUtlProps<T>  
```  
  
### <a name="parameters"></a>Parametri  

*T*<br/>
La classe, derivata da `IDBPropertiesImpl`.  

## <a name="requirements"></a>Requisiti  

**Intestazione:** atldb.h  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[GetProperties](#getproperties)|Restituisce i valori delle proprietà nei gruppi di proprietà di origine dati, informazioni sull'origine dati e l'inizializzazione che sono attualmente impostati nell'oggetto origine dati o i valori delle proprietà nel gruppo di proprietà di inizializzazione che sono attualmente impostate nel enumeratore.|  
|[GetPropertyInfo](#getpropertyinfo)|Restituisce informazioni su tutte le proprietà supportate dal provider.|  
|[SetProperties](#setproperties)|Imposta le proprietà nei gruppi di proprietà origine dati e l'inizializzazione, per gli oggetti origine dati, o il gruppo di proprietà di inizializzazione, per gli enumeratori.|  
  
## <a name="remarks"></a>Note  

[IDBProperties](/previous-versions/windows/desktop/ms719607\(v=vs.85\)) è un'interfaccia obbligatoria per gli oggetti origine dati e un'interfaccia facoltativa per gli enumeratori. Tuttavia, se espone un enumeratore [IDBInitialize](/previous-versions/windows/desktop/ms713706\(v=vs.85\)), deve esporre `IDBProperties`. `IDBPropertiesImpl` implementa `IDBProperties` utilizzando una funzione statica definita da [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  

## <a name="getproperties"></a> Idbpropertiesimpl:: GetProperties

Restituisce i valori delle proprietà nei gruppi di proprietà di origine dati, informazioni sull'origine dati e l'inizializzazione che sono attualmente impostati nell'oggetto origine dati o i valori delle proprietà nel gruppo di proprietà di inizializzazione che sono attualmente impostate nel enumeratore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(GetProperties)(ULONG cPropertySets,   
   const DBPROPIDSET rgPropertySets[],   
   ULONG * pcProperties,   
   DBPROPSET ** prgProperties);  
```  
  
#### <a name="parameters"></a>Parametri  

Visualizzare [IDBProperties:: GetProperties](/previous-versions/windows/desktop/ms714344\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
Alcuni parametri corrispondono ai *riferimento per programmatori OLE DB* i parametri dei nomi diversi, descritte nelle `IDBProperties::GetProperties`:  
  
|Parametri di modelli OLE DB|*Riferimento per programmatori OLE DB* parametri|  
|--------------------------------|------------------------------------------------|  
|*cPropertySets*|*cPropertyIDSets*|  
|*rgPropertySets*|*rgPropertyIDSets*|  
|*pcProperties*|*pcPropertySets*|  
|*prgProperties*|*prgPropertySets*|  
  
### <a name="remarks"></a>Note  

Se il provider viene inizializzato, questo metodo restituisce i valori delle proprietà nella finestra di DBPROPSET_DATASOURCE, DBPROPSET_DATASOURCEINFO, gruppi di proprietà DBPROPSET_DBINIT attualmente impostate nell'oggetto di origine dati. Se il provider non è inizializzato, restituirà solo le proprietà del gruppo DBPROPSET_DBINIT. 
  
## <a name="getpropertyinfo"></a> Idbpropertiesimpl:: GetPropertyInfo

Restituisce informazioni sulle proprietà supportate dall'origine dati.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(GetPropertyInfo)(ULONG cPropertySets,   
   const DBPROPIDSET rgPropertySets[],   
   ULONG * pcPropertyInfoSets,   
   DBPROPINFOSET ** prgPropertyInfoSets,   
   OLECHAR ** ppDescBuffer);  
```  
  
#### <a name="parameters"></a>Parametri  

Visualizzare [IDBProperties:: GetPropertyInfo](/previous-versions/windows/desktop/ms718175\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
Alcuni parametri corrispondono ai *riferimento per programmatori OLE DB* i parametri dei nomi diversi, descritte nelle `IDBProperties::GetPropertyInfo`:  
  
|Parametri di modelli OLE DB|*Riferimento per programmatori OLE DB* parametri|  
|--------------------------------|------------------------------------------------|  
|*cPropertySets*|*cPropertyIDSets*|  
|*rgPropertySets*|*rgPropertyIDSets*|  
  
### <a name="remarks"></a>Note  

Viene utilizzato [idbinitializeimpl:: M_pcutlpropinfo](../../data/oledb/idbinitializeimpl-m-pcutlpropinfo.md) per implementare questa funzionalità. 

## <a name="setproperties"></a> Idbpropertiesimpl:: SetProperties

Imposta le proprietà nei gruppi di proprietà origine dati e l'inizializzazione, per gli oggetti origine dati, o il gruppo di proprietà di inizializzazione, per gli enumeratori.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(SetProperties)(ULONG cPropertySets,   
   DBPROPSET rgPropertySets[]);  
```  
  
#### <a name="parameters"></a>Parametri  

Visualizzare [IDBProperties:: SetProperties](/previous-versions/windows/desktop/ms723049\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
### <a name="remarks"></a>Note  

Se il provider viene inizializzato, questo metodo imposta i valori delle proprietà nella finestra di DBPROPSET_DATASOURCE, DBPROPSET_DATASOURCEINFO, gruppi di proprietà DBPROPSET_DBINIT per l'oggetto origine dati. Se il provider non è inizializzato, viene impostato solo le proprietà del gruppo DBPROPSET_DBINIT.  
  
## <a name="see-also"></a>Vedere anche  

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)