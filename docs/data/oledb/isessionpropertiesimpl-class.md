---
title: Classe ISessionPropertiesImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ISessionPropertiesImpl
- ISessionPropertiesImpl::GetProperties
- ISessionPropertiesImpl.GetProperties
- GetProperties
- ISessionPropertiesImpl.SetProperties
- SetProperties
- ISessionPropertiesImpl::SetProperties
dev_langs:
- C++
helpviewer_keywords:
- ISessionPropertiesImpl class
- GetProperties method
- SetProperties method
ms.assetid: ca0ba254-c7dc-4c52-abec-cf895a0c6a63
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: eca3e25e1476023ef4b7192efd2ffbd4170e88ca
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42573050"
---
# <a name="isessionpropertiesimpl-class"></a>Classe ISessionPropertiesImpl
Fornisce un'implementazione del [ISessionProperties](/previous-versions/windows/desktop/ms713721\(v=vs.85\)) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class PropClass = T>  
class ATL_NO_VTABLE ISessionPropertiesImpl :  
   public ISessionProperties,    
   public CUtlProps<PropClass>  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 La classe, derivata da `ISessionPropertiesImpl`.  
  
 *PropClass*  
 Una classe di proprietà definibili dall'utente che viene impostato su *T*.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[GetProperties](#getproperties)|Restituisce l'elenco delle proprietà del gruppo di proprietà di sessione attualmente impostati nella sessione.|  
|[SetProperties](#setproperties)|Imposta le proprietà del gruppo di proprietà di sessione.|  
  
## <a name="remarks"></a>Note  
 Un'interfaccia obbligatoria sulle sessioni. Questa classe implementa le proprietà della sessione chiamando una funzione statica definita per il [mapping dell'insieme di proprietà](../../data/oledb/begin-propset-map.md). Il mapping di set di proprietà deve essere specificato nella classe di sessione.  
  
## <a name="getproperties"></a> Isessionpropertiesimpl:: GetProperties
Restituisce l'elenco delle proprietà di `DBPROPSET_SESSION` gruppo di proprietà attualmente impostati nella sessione.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(GetProperties)(ULONG cPropertyIDSets,   
   const DBPROPIDSET rgPropertyIDSets[],   
   ULONG * pcPropertySets,   
   DBPROPSET ** prgPropertySets);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [ISessionProperties::GetProperties](/previous-versions/windows/desktop/ms723643\(v=vs.85\)) nel *riferimento per programmatori OLE DB*. 

## <a name="setproperties"></a> Isessionpropertiesimpl:: SetProperties
Imposta le proprietà nel `DBPROPSET_SESSION` gruppo di proprietà.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(SetProperties)(ULONG cPropertySets,   
   DBPROPSET rgPropertySets[]);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [ISessionProperties::SetProperties](/previous-versions/windows/desktop/ms714405\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)