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
ms.openlocfilehash: b73cfe83075b9595bc98ca05ab2ec2e1771a038d
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57271970"
---
# <a name="idataobjectimpl-class"></a>Classe IDataObjectImpl

Questa classe fornisce metodi per supportare il trasferimento dei dati uniformi e la gestione delle connessioni.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IDataObjectImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IDataObjectImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDataObjectImpl::DAdvise](#dadvise)|Stabilisce una connessione tra l'oggetto dati e un sink di notifica. In questo modo il sink di notifica ricevere le notifiche delle modifiche nell'oggetto.|
|[IDataObjectImpl::DUnadvise](#dunadvise)|Termina una connessione precedentemente stabilita tramite `DAdvise`.|
|[IDataObjectImpl::EnumDAdvise](#enumdadvise)|Crea un enumeratore per scorrere le connessioni consultive correnti.|
|[IDataObjectImpl::EnumFormatEtc](#enumformatetc)|Crea un enumeratore per scorrere la `FORMATETC` strutture supportate dall'oggetto dati. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IDataObjectImpl::FireDataChange](#firedatachange)|Invia una notifica di modifica a ogni sink di notifica.|
|[IDataObjectImpl::GetCanonicalFormatEtc](#getcanonicalformatetc)|Recupera un logicamente equivalente `FORMATETC` struttura a uno più complessa. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IDataObjectImpl::GetData](#getdata)|Trasferisce i dati dall'oggetto dati al client. I dati sono descritti un `FORMATETC` strutturare e vengono trasferiti tramite un `STGMEDIUM` struttura.|
|[IDataObjectImpl::GetDataHere](#getdatahere)|Simile a `GetData`, tranne il client deve allocare il `STGMEDIUM` struttura. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IDataObjectImpl::QueryGetData](#querygetdata)|Determina se l'oggetto dati supporta una particolare `FORMATETC` struttura per il trasferimento dei dati. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IDataObjectImpl::SetData](#setdata)|Trasferisce i dati dal client per l'oggetto dati. L'implementazione di ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Note

Il [IDataObject](/windows/desktop/api/objidl/nn-objidl-idataobject) interfaccia fornisce metodi per supportare il trasferimento dei dati uniformi. `IDataObject` utilizza le strutture di formato standard [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) e [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) per recuperare e archiviare i dati.

`IDataObject` gestisce inoltre le connessioni per gestire le notifiche di modifica di dati sink di notifica. Affinché il client di ricevere le notifiche di modifica dei dati dall'oggetto dati, il client deve implementare il [IAdviseSink](/windows/desktop/api/objidl/nn-objidl-iadvisesink) interfaccia sull'oggetto chiamato un sink di notifica. Quando il client chiama quindi `IDataObject::DAdvise`, viene stabilita una connessione tra l'oggetto dati e il sink di notifica.

Classe `IDataObjectImpl` fornisce un'implementazione predefinita di `IDataObject` e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

**Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IDataObject`

`IDataObjectImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="dadvise"></a>  IDataObjectImpl::DAdvise

Stabilisce una connessione tra l'oggetto dati e un sink di notifica.

```
HRESULT DAdvise(
    FORMATETC* pformatetc,
    DWORD advf,
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```

### <a name="remarks"></a>Note

In questo modo il sink di notifica ricevere le notifiche delle modifiche nell'oggetto.

Per terminare la connessione, chiamare [DUnadvise](#dunadvise).

Visualizzare [IDataObject::DAdvise](/windows/desktop/api/objidl/nf-objidl-idataobject-dadvise) in Windows SDK.

##  <a name="dunadvise"></a>  IDataObjectImpl::DUnadvise

Termina una connessione precedentemente stabilita tramite [DAdvise](#dadvise).

```
HRESULT DUnadvise(DWORD dwConnection);
```

### <a name="remarks"></a>Note

Visualizzare [IDataObject::DUnadvise](/windows/desktop/api/objidl/nf-objidl-idataobject-dunadvise) in Windows SDK.

##  <a name="enumdadvise"></a>  IDataObjectImpl::EnumDAdvise

Crea un enumeratore per scorrere le connessioni consultive correnti.

```
HRESULT DAdvise(
    FORMATETC* pformatetc,
    DWORD advf,
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```

### <a name="remarks"></a>Note

Visualizzare [IDataObject::EnumDAdvise](/windows/desktop/api/objidl/nf-objidl-idataobject-enumdadvise) in Windows SDK.

##  <a name="enumformatetc"></a>  IDataObjectImpl::EnumFormatEtc

Crea un enumeratore per scorrere la `FORMATETC` strutture supportate dall'oggetto dati.

```
HRESULT EnumFormatEtc(
    DWORD dwDirection,
    IEnumFORMATETC** ppenumFormatEtc);
```

### <a name="remarks"></a>Note

Visualizzare [IDataObject::EnumFormatEtc](/windows/desktop/api/objidl/nf-objidl-idataobject-enumformatetc) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

##  <a name="firedatachange"></a>  IDataObjectImpl::FireDataChange

Invia una notifica di modifica a ogni sink di notifica che è attualmente gestito.

```
HRESULT FireDataChange();
```

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="getcanonicalformatetc"></a>  IDataObjectImpl::GetCanonicalFormatEtc

Recupera un logicamente equivalente `FORMATETC` struttura a uno più complessa.

```
HRESULT GetCanonicalFormatEtc(FORMATETC* pformatetcIn, FORMATETC* pformatetcOut);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Visualizzare [IDataObject::GetCanonicalFormatEtc](/windows/desktop/api/objidl/nf-objidl-idataobject-getcanonicalformatetc) in Windows SDK.

##  <a name="getdata"></a>  IDataObjectImpl::GetData

Trasferisce i dati dall'oggetto dati al client.

```
HRESULT GetData(
    FORMATETC* pformatetcIn,
    STGMEDIUM* pmedium);
```

### <a name="remarks"></a>Note

Il *pformatetcIn* parametro deve specificare un tipo di supporto di archiviazione di TYMED_MFPICT.

Visualizzare [IDataObject:: GetData](/windows/desktop/api/objidl/nf-objidl-idataobject-getdata) in Windows SDK.

##  <a name="getdatahere"></a>  IDataObjectImpl::GetDataHere

Simile a `GetData`, tranne il client deve allocare il `STGMEDIUM` struttura.

```
HRESULT GetDataHere(
    FORMATETC* pformatetc,
    STGMEDIUM* pmedium);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Visualizzare [IDataObject::GetDataHere](/windows/desktop/api/objidl/nf-objidl-idataobject-getdatahere) in Windows SDK.

##  <a name="querygetdata"></a>  IDataObjectImpl::QueryGetData

Determina se l'oggetto dati supporta una particolare `FORMATETC` struttura per il trasferimento dei dati.

```
HRESULT QueryGetData(FORMATETC* pformatetc);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Visualizzare [IDataObject::QueryGetData](/windows/desktop/api/objidl/nf-objidl-idataobject-querygetdata) in Windows SDK.

##  <a name="setdata"></a>  IDataObjectImpl::SetData

Trasferisce i dati dal client per l'oggetto dati.

```
HRESULT SetData(
    FORMATETC* pformatetc,
    STGMEDIUM* pmedium,
    BOOL fRelease);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Visualizzare [IDataObject::SetData](/windows/desktop/api/objidl/nf-objidl-idataobject-setdata) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
