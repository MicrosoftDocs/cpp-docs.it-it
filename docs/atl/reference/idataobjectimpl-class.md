---
title: Classe IDataObjectImpl
ms.date: 11/04/2016
f1_keywords:
- IDataObjectImpl
- ATLCTL/ATL::IDataObjectImpl
- ATLCTL/ATL::IDataObjectImpl::DAdvise
- ATLCTL/ATL::IDataObjectImpl::DUnadvise
- ATLCTL/ATL::IDataObjectImpl::EnumDAdvise
- ATLCTL/ATL::IDataObjectImpl::EnumFormatEtc
- ATLCTL/ATL::IDataObjectImpl::FireDataChange
- ATLCTL/ATL::IDataObjectImpl::GetCanonicalFormatEtc
- ATLCTL/ATL::IDataObjectImpl::GetData
- ATLCTL/ATL::IDataObjectImpl::GetDataHere
- ATLCTL/ATL::IDataObjectImpl::QueryGetData
- ATLCTL/ATL::IDataObjectImpl::SetData
helpviewer_keywords:
- data transfer [C++]
- data transfer [C++], Uniform Data Transfer
- IDataObjectImpl class
- IDataObject, ATL implementation
ms.assetid: b680f0f7-7795-40a1-a0f6-f48768201c89
ms.openlocfilehash: 618f8248a03297120ae2504bcb30ba8f080b184d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329834"
---
# <a name="idataobjectimpl-class"></a>Classe IDataObjectImpl

Questa classe fornisce metodi per il supporto di Uniform Data Transfer e la gestione delle connessioni.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IDataObjectImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IDataObjectImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDataObjectImpl::DAdvise](#dadvise)|Stabilisce una connessione tra l'oggetto dati e un sink di avviso. Ciò consente al sink di avviso di ricevere notifiche delle modifiche nell'oggetto.|
|[IDataObjectImpl::DUnadvise](#dunadvise)|Termina una connessione stabilita in precedenza tramite `DAdvise`.|
|[IDataObjectImpl::EnumDAdvise](#enumdadvise)|Crea un enumeratore per scorrere le connessioni consultive correnti.|
|[IDataObjectImpl::EnumFormatEtc](#enumformatetc)|Crea un enumeratore per scorrere le strutture `FORMATETC` supportate dall'oggetto dati. L'implementazione ATL restituisce E_NOTIMPL.|
|[IDataObjectImpl::FireDataChangeIDataObjectImpl::FireDataChange](#firedatachange)|Invia una notifica di modifica a ogni sink di avviso.|
|[IDataObjectImpl::GetCanonicalFormatEtc](#getcanonicalformatetc)|Recupera una struttura `FORMATETC` logicamente equivalente a una più complessa. L'implementazione ATL restituisce E_NOTIMPL.|
|[IDataObjectImpl::GetDataIDataObjectImpl::GetData](#getdata)|Trasferisce i dati dall'oggetto dati al client. I dati vengono `FORMATETC` descritti in una `STGMEDIUM` struttura e trasferiti attraverso una struttura.|
|[IDataObjectImpl::GetDataHere](#getdatahere)|Analogamente a `GetData`, tranne `STGMEDIUM` per il fatto che il client deve allocare la struttura. L'implementazione ATL restituisce E_NOTIMPL.|
|[IDataObjectImpl::QueryGetData](#querygetdata)|Determina se l'oggetto dati supporta una struttura `FORMATETC` specifica per trasferire dati. L'implementazione ATL restituisce E_NOTIMPL.|
|[IDataObjectImpl::SetDataIDataObjectImpl::SetData](#setdata)|Trasferisce i dati dal client all'oggetto dati. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Osservazioni

L'interfaccia [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject) fornisce metodi per supportare il trasferimento uniforme dei dati. `IDataObject`utilizza le strutture di formato standard [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) e [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) per recuperare e archiviare i dati.

`IDataObject`gestisce inoltre le connessioni per consigliare ai sink di gestire le notifiche di modifica dei dati. Affinché il client riceva le notifiche di modifica dei dati dall'oggetto dati, il client deve implementare l'interfaccia [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink) su un oggetto denominato sink di avviso. Quando il client `IDataObject::DAdvise`chiama quindi , viene stabilita una connessione tra l'oggetto dati e il sink di avviso.

Classe `IDataObjectImpl` fornisce un'implementazione predefinita di `IDataObject` e implementa `IUnknown` inviando informazioni al dispositivo di dump nelle build di debug.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IDataObject`

`IDataObjectImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="idataobjectimpldadvise"></a><a name="dadvise"></a>IDataObjectImpl::DAdvise

Stabilisce una connessione tra l'oggetto dati e un sink di avviso.

```
HRESULT DAdvise(
    FORMATETC* pformatetc,
    DWORD advf,
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```

### <a name="remarks"></a>Osservazioni

Ciò consente al sink di avviso di ricevere notifiche delle modifiche nell'oggetto.

Per terminare la connessione, chiamare [DUnadvise](#dunadvise).

Vedere [IDataObject::DAdvise](/windows/win32/api/objidl/nf-objidl-idataobject-dadvise) in Windows SDK.

## <a name="idataobjectimpldunadvise"></a><a name="dunadvise"></a>IDataObjectImpl::DUnadvise

Termina una connessione stabilita in precedenza tramite [DAdvise](#dadvise).

```
HRESULT DUnadvise(DWORD dwConnection);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDataObject::DUnadvise](/windows/win32/api/objidl/nf-objidl-idataobject-dunadvise) in Windows SDK.

## <a name="idataobjectimplenumdadvise"></a><a name="enumdadvise"></a>IDataObjectImpl::EnumDAdvise

Crea un enumeratore per scorrere le connessioni consultive correnti.

```
HRESULT DAdvise(
    FORMATETC* pformatetc,
    DWORD advf,
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDataObject::EnumDAdvise](/windows/win32/api/objidl/nf-objidl-idataobject-enumdadvise) in Windows SDK.

## <a name="idataobjectimplenumformatetc"></a><a name="enumformatetc"></a>IDataObjectImpl::EnumFormatEtc

Crea un enumeratore per scorrere le strutture `FORMATETC` supportate dall'oggetto dati.

```
HRESULT EnumFormatEtc(
    DWORD dwDirection,
    IEnumFORMATETC** ppenumFormatEtc);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDataObject::EnumFormatEtc](/windows/win32/api/objidl/nf-objidl-idataobject-enumformatetc) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

## <a name="idataobjectimplfiredatachange"></a><a name="firedatachange"></a>IDataObjectImpl::FireDataChangeIDataObjectImpl::FireDataChange

Invia una notifica di modifica a ogni sink di avviso attualmente gestito.

```
HRESULT FireDataChange();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="idataobjectimplgetcanonicalformatetc"></a><a name="getcanonicalformatetc"></a>IDataObjectImpl::GetCanonicalFormatEtc

Recupera una struttura `FORMATETC` logicamente equivalente a una più complessa.

```
HRESULT GetCanonicalFormatEtc(FORMATETC* pformatetcIn, FORMATETC* pformatetcOut);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IDataObject::GetCanonicalFormatEtc](/windows/win32/api/objidl/nf-objidl-idataobject-getcanonicalformatetc) in Windows SDK.

## <a name="idataobjectimplgetdata"></a><a name="getdata"></a>IDataObjectImpl::GetDataIDataObjectImpl::GetData

Trasferisce i dati dall'oggetto dati al client.

```
HRESULT GetData(
    FORMATETC* pformatetcIn,
    STGMEDIUM* pmedium);
```

### <a name="remarks"></a>Osservazioni

Il parametro *pformatetcIn* deve specificare un tipo di TYMED_MFPICT del supporto di archiviazione.

Vedere [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) in Windows SDK.

## <a name="idataobjectimplgetdatahere"></a><a name="getdatahere"></a>IDataObjectImpl::GetDataHere

Analogamente a `GetData`, tranne `STGMEDIUM` per il fatto che il client deve allocare la struttura.

```
HRESULT GetDataHere(
    FORMATETC* pformatetc,
    STGMEDIUM* pmedium);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IDataObject::GetDataHere](/windows/win32/api/objidl/nf-objidl-idataobject-getdatahere) in Windows SDK.

## <a name="idataobjectimplquerygetdata"></a><a name="querygetdata"></a>IDataObjectImpl::QueryGetData

Determina se l'oggetto dati supporta una struttura `FORMATETC` specifica per trasferire dati.

```
HRESULT QueryGetData(FORMATETC* pformatetc);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IDataObject::QueryGetData](/windows/win32/api/objidl/nf-objidl-idataobject-querygetdata) in Windows SDK.

## <a name="idataobjectimplsetdata"></a><a name="setdata"></a>IDataObjectImpl::SetDataIDataObjectImpl::SetData

Trasferisce i dati dal client all'oggetto dati.

```
HRESULT SetData(
    FORMATETC* pformatetc,
    STGMEDIUM* pmedium,
    BOOL fRelease);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IDataObject::SetData](/windows/win32/api/objidl/nf-objidl-idataobject-setdata) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
