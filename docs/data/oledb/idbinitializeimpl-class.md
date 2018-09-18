---
title: Classe IDBInitializeImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.IDBInitializeImpl<T>
- ATL::IDBInitializeImpl<T>
- IDBInitializeImpl
- ATL::IDBInitializeImpl
- ATL.IDBInitializeImpl
- IDBInitializeImpl.IDBInitializeImpl
- IDBInitializeImpl
- IDBInitializeImpl::IDBInitializeImpl
- Initialize
- IDBInitializeImpl::Initialize
- IDBInitializeImpl.Initialize
- IDBInitializeImpl.Uninitialize
- Uninitialize
- IDBInitializeImpl::Uninitialize
- ATL::IDBInitializeImpl::m_dwStatus
- IDBInitializeImpl.m_dwStatus
- ATL.IDBInitializeImpl.m_dwStatus
- IDBInitializeImpl::m_dwStatus
- IDBInitializeImpl<T>::m_dwStatus
- ATL.IDBInitializeImpl<T>.m_dwStatus
- ATL::IDBInitializeImpl<T>::m_dwStatus
- m_dwStatus
- ATL::IDBInitializeImpl<T>::m_pCUtlPropInfo
- m_pCUtlPropInfo
- IDBInitializeImpl::m_pCUtlPropInfo
- ATL.IDBInitializeImpl.m_pCUtlPropInfo
- IDBInitializeImpl<T>::m_pCUtlPropInfo
- IDBInitializeImpl.m_pCUtlPropInfo
- ATL::IDBInitializeImpl::m_pCUtlPropInfo
dev_langs:
- C++
helpviewer_keywords:
- IDBInitializeImpl class
- IDBInitializeImpl constructor
- Initialize method
- Uninitialize method
- m_dwStatus
- m_pCUtlPropInfo
ms.assetid: e4182f81-0443-44f5-a0d3-e7e075d6f883
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4f44d43d48f862ca2ca5465d5ea9ee44d0e9040e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46072420"
---
# <a name="idbinitializeimpl-class"></a>Classe IDBInitializeImpl

Fornisce un'implementazione per il [IDBInitialize](/previous-versions/windows/desktop/ms713706\(v=vs.85\)) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T>  
class ATL_NO_VTABLE IDBInitializeImpl : public IDBInitialize  
```  
  
### <a name="parameters"></a>Parametri  

*T*<br/>
La classe, derivata da `IDBInitializeImpl`.  

## <a name="requirements"></a>Requisiti  

**Intestazione:** atldb.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[IDBInitializeImpl](#idbinitializeimpl)|Costruttore.|  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[Initialize](#initialize)|Avvia il provider.|  
|[Annullare l'inizializzazione](#uninitialize)|Arresta il provider.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_dwStatus](#dwstatus)|I flag dell'origine dati.|  
|[m_pCUtlPropInfo](#pcutlpropinfo)|Un puntatore all'implementazione di informazioni sulle proprietà di database.|  
  
## <a name="remarks"></a>Note  

Un'interfaccia obbligatoria in oggetti origine dei dati e interfaccia facoltativa negli enumeratori.  

## <a name="idbinitializeimpl"></a> Idbinitializeimpl:: Idbinitializeimpl

Costruttore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
IDBInitializeImpl();  
```  
  
### <a name="remarks"></a>Note  

Inizializza tutti i membri dati. 
  
## <a name="initialize"></a> Idbinitializeimpl:: Initialize

Inizializza l'oggetto datasource preparandone il supporto della proprietà.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(Initialize)(void);  
```  
  
### <a name="remarks"></a>Note  

Visualizzare [IDBInitialize:: Initialize](/previous-versions/windows/desktop/ms718026\(v=vs.85\)) nel *riferimento per programmatori OLE DB*. 

## <a name="uninitialize"></a> Idbinitializeimpl:: UnInitialize

Punti dati di origine oggetto in uno stato non inizializzato da liberare le risorse interne, ad esempio il supporto della proprietà.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(Uninitialize)(void);  
```  
  
### <a name="remarks"></a>Note  

Visualizzare [IDBInitialize:: UnInitialize](/previous-versions/windows/desktop/ms719648\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.

## <a name="dwstatus"></a> Idbinitializeimpl:: M_dwstatus

I flag dell'origine dati.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
DWORD m_dwStatus;  
```  
  
### <a name="remarks"></a>Note  

Questi flag specificare o indicano lo stato di vari attributi per l'oggetto origine dati. Contiene uno o più dei seguenti **enum** valori:  
  
```cpp  
enum DATASOURCE_FLAGS {  
    DSF_MASK_INIT     = 0xFFFFF00F,  
    DSF_PERSIST_DIRTY = 0x00000001,  
    DSF_INITIALIZED   = 0x00000010,  
};  
```  
  
|||  
|-|-|  
|`DSF_MASK_INIT`|Maschera per abilitare il ripristino dello stato non inizializzato.|  
|`DSF_PERSIST_DIRTY`|Set se l'oggetto origine dati richiede la persistenza (vale a dire, se sono state apportate modifiche).|  
|`DSF_INITIALIZED`|Impostato se l'origine dati è stata inizializzata.|  

## <a name="pcutlpropinfo"></a> Idbinitializeimpl:: M_pcutlpropinfo

Un puntatore all'oggetto di implementazione per le informazioni sulle proprietà di database.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
CUtlPropInfo< T >* m_pCUtlPropInfo;  
```  
  
## <a name="see-also"></a>Vedere anche  

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)