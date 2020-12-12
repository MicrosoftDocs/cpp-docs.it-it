---
description: 'Altre informazioni su: Classe IDBInitializeImpl'
title: Classe IDBInitializeImpl
ms.date: 11/04/2016
f1_keywords:
- ATL.IDBInitializeImpl<T>
- ATL::IDBInitializeImpl<T>
- IDBInitializeImpl
- ATL::IDBInitializeImpl
- ATL.IDBInitializeImpl
- IDBInitializeImpl.IDBInitializeImpl
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
helpviewer_keywords:
- IDBInitializeImpl class
- IDBInitializeImpl constructor
- Initialize method
- Uninitialize method
- m_dwStatus
- m_pCUtlPropInfo
ms.assetid: e4182f81-0443-44f5-a0d3-e7e075d6f883
ms.openlocfilehash: 6b37998c78c3e88921318654653995ff356ba18a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287320"
---
# <a name="idbinitializeimpl-class"></a>Classe IDBInitializeImpl

Fornisce un'implementazione per l'interfaccia [IDBInitialize](/previous-versions/windows/desktop/ms713706(v=vs.85)) .

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class ATL_NO_VTABLE IDBInitializeImpl : public IDBInitialize
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IDBInitializeImpl` .

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Description |
|-|-|
|[IDBInitializeImpl](#idbinitializeimpl)|Costruttore.|

### <a name="interface-methods"></a>Metodi di interfaccia

| Nome | Description |
|-|-|
|[Inizializzare](#initialize)|Avvia il provider.|
|[Uninitialize](#uninitialize)|Arresta il provider.|

### <a name="data-members"></a>Membri dei dati

| Nome | Description |
|-|-|
|[m_dwStatus](#dwstatus)|Flag dell'origine dati.|
|[m_pCUtlPropInfo](#pcutlpropinfo)|Puntatore all'implementazione delle informazioni sulle proprietà del database.|

## <a name="remarks"></a>Commenti

Interfaccia obbligatoria sugli oggetti origine dati e sull'interfaccia facoltativa sugli enumeratori.

## <a name="idbinitializeimplidbinitializeimpl"></a><a name="idbinitializeimpl"></a> IDBInitializeImpl:: IDBInitializeImpl

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
IDBInitializeImpl();
```

### <a name="remarks"></a>Osservazioni

Inizializza tutti i membri dati.

## <a name="idbinitializeimplinitialize"></a><a name="initialize"></a> IDBInitializeImpl:: Initialize

Inizializza l'oggetto datasource preparandone il supporto della proprietà.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(Initialize)(void);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDBInitialize:: Initialize](/previous-versions/windows/desktop/ms718026(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="idbinitializeimpluninitialize"></a><a name="uninitialize"></a> IDBInitializeImpl:: Uninitialize

Inserisce l'oggetto origine dati in uno stato non inizializzato liberando risorse interne, ad esempio il supporto della proprietà.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(Uninitialize)(void);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDBInitialize:: Uninitialize](/previous-versions/windows/desktop/ms719648(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="idbinitializeimplm_dwstatus"></a><a name="dwstatus"></a> IDBInitializeImpl:: m_dwStatus

Flag dell'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
DWORD m_dwStatus;
```

### <a name="remarks"></a>Osservazioni

Questi flag specificano o indicano lo stato di diversi attributi per l'oggetto origine dati. Contiene uno o più dei valori seguenti **`enum`** :

```cpp
enum DATASOURCE_FLAGS {
    DSF_MASK_INIT     = 0xFFFFF00F,
    DSF_PERSIST_DIRTY = 0x00000001,
    DSF_INITIALIZED   = 0x00000010,
};
```

| Valore | Description |
|-|-|
|`DSF_MASK_INIT`|Maschera per consentire il ripristino dello stato non inizializzato.|
|`DSF_PERSIST_DIRTY`|Impostare se l'oggetto origine dati richiede la persistenza, ovvero se sono state apportate modifiche.|
|`DSF_INITIALIZED`|Impostare se l'origine dati è stata inizializzata.|

## <a name="idbinitializeimplm_pcutlpropinfo"></a><a name="pcutlpropinfo"></a> IDBInitializeImpl:: m_pCUtlPropInfo

Puntatore all'oggetto di implementazione per le informazioni sulle proprietà del database.

### <a name="syntax"></a>Sintassi

```cpp
CUtlPropInfo< T >* m_pCUtlPropInfo;
```

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
