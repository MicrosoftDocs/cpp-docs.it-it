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
ms.openlocfilehash: 8e3369edd0731ede0892a405ef3de4e7b4cfdef1
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495936"
---
# <a name="idataobjectimpl-class"></a>Classe IDataObjectImpl

Questa classe fornisce metodi per supportare Uniform Data Transfer e gestire le connessioni.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IDataObjectImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IDataObjectImpl`.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[IDataObjectImpl::DAdvise](#dadvise)|Stabilisce una connessione tra l'oggetto dati e un sink di notifica. Ciò consente al sink di notifica di ricevere le notifiche delle modifiche nell'oggetto.|
|[IDataObjectImpl::DUnadvise](#dunadvise)|Termina una connessione stabilita in precedenza `DAdvise`tramite.|
|[IDataObjectImpl::EnumDAdvise](#enumdadvise)|Crea un enumeratore per scorrere le connessioni consultive correnti.|
|[IDataObjectImpl::EnumFormatEtc](#enumformatetc)|Crea un enumeratore per scorrere le `FORMATETC` strutture supportate dall'oggetto dati. L'implementazione ATL restituisce E_NOTIMPL.|
|[IDataObjectImpl::FireDataChange](#firedatachange)|Invia una notifica di modifica a ogni sink di notifica.|
|[IDataObjectImpl::GetCanonicalFormatEtc](#getcanonicalformatetc)|Recupera una struttura logicamente equivalente `FORMATETC` a una struttura più complessa. L'implementazione ATL restituisce E_NOTIMPL.|
|[IDataObjectImpl::GetData](#getdata)|Trasferisce i dati dall'oggetto dati al client. I dati vengono descritti in una `FORMATETC` struttura e trasferiti tramite una `STGMEDIUM` struttura.|
|[IDataObjectImpl::GetDataHere](#getdatahere)|Simile a `GetData`, ad eccezione del fatto che il `STGMEDIUM` client deve allocare la struttura. L'implementazione ATL restituisce E_NOTIMPL.|
|[IDataObjectImpl::QueryGetData](#querygetdata)|Determina se l'oggetto dati supporta una struttura `FORMATETC` specifica per il trasferimento dei dati. L'implementazione ATL restituisce E_NOTIMPL.|
|[IDataObjectImpl::SetData](#setdata)|Trasferisce i dati dal client all'oggetto dati. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Note

L'interfaccia [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject) fornisce metodi per supportare Uniform Data Transfer. `IDataObject`Usa le strutture di formato standard [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) e [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-stgmedium) per recuperare e archiviare i dati.

`IDataObject`gestisce anche le connessioni ai sink di notifica per gestire le notifiche di modifica dei dati. Affinché il client riceva le notifiche di modifica dei dati dall'oggetto dati, il client deve implementare l'interfaccia [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink) su un oggetto denominato sink di notifica. Quando il client chiama `IDataObject::DAdvise`, viene stabilita una connessione tra l'oggetto dati e il sink di notifica.

La `IDataObjectImpl` classe fornisce un'implementazione predefinita `IDataObject` di e `IUnknown` implementa inviando informazioni al dispositivo di dump nelle compilazioni di debug.

**Articoli correlati** [Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

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

Ciò consente al sink di notifica di ricevere le notifiche delle modifiche nell'oggetto.

Per terminare la connessione, chiamare [DUnadvise](#dunadvise).

Vedere [IDataObject::D consigliare](/windows/win32/api/objidl/nf-objidl-idataobject-dadvise) nella Windows SDK.

##  <a name="dunadvise"></a>  IDataObjectImpl::DUnadvise

Termina una connessione stabilita in precedenza tramite [DAdvise](#dadvise).

```
HRESULT DUnadvise(DWORD dwConnection);
```

### <a name="remarks"></a>Note

Vedere [IDataObject::D Unadvise](/windows/win32/api/objidl/nf-objidl-idataobject-dunadvise) nel Windows SDK.

##  <a name="enumdadvise"></a>IDataObjectImpl:: EnumDAdvise

Crea un enumeratore per scorrere le connessioni consultive correnti.

```
HRESULT DAdvise(
    FORMATETC* pformatetc,
    DWORD advf,
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```

### <a name="remarks"></a>Note

Vedere [IDataObject:: EnumDAdvise](/windows/win32/api/objidl/nf-objidl-idataobject-enumdadvise) nel Windows SDK.

##  <a name="enumformatetc"></a>IDataObjectImpl:: EnumFormatEtc

Crea un enumeratore per scorrere le `FORMATETC` strutture supportate dall'oggetto dati.

```
HRESULT EnumFormatEtc(
    DWORD dwDirection,
    IEnumFORMATETC** ppenumFormatEtc);
```

### <a name="remarks"></a>Note

Vedere [IDataObject:: EnumFormatEtc](/windows/win32/api/objidl/nf-objidl-idataobject-enumformatetc) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

##  <a name="firedatachange"></a>  IDataObjectImpl::FireDataChange

Invia una notifica di modifica a ogni sink di avviso attualmente gestito.

```
HRESULT FireDataChange();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="getcanonicalformatetc"></a>  IDataObjectImpl::GetCanonicalFormatEtc

Recupera una struttura logicamente equivalente `FORMATETC` a una struttura più complessa.

```
HRESULT GetCanonicalFormatEtc(FORMATETC* pformatetcIn, FORMATETC* pformatetcOut);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Vedere [IDataObject:: GetCanonicalFormatEtc](/windows/win32/api/objidl/nf-objidl-idataobject-getcanonicalformatetc) nel Windows SDK.

##  <a name="getdata"></a>  IDataObjectImpl::GetData

Trasferisce i dati dall'oggetto dati al client.

```
HRESULT GetData(
    FORMATETC* pformatetcIn,
    STGMEDIUM* pmedium);
```

### <a name="remarks"></a>Note

Il parametro *pformatetcIn* deve specificare un tipo di supporto di archiviazione di TYMED_MFPICT.

Vedere [IDataObject:: GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) nel Windows SDK.

##  <a name="getdatahere"></a>  IDataObjectImpl::GetDataHere

Simile a `GetData`, ad eccezione del fatto che il `STGMEDIUM` client deve allocare la struttura.

```
HRESULT GetDataHere(
    FORMATETC* pformatetc,
    STGMEDIUM* pmedium);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Vedere [IDataObject:: GetDataHere](/windows/win32/api/objidl/nf-objidl-idataobject-getdatahere) nel Windows SDK.

##  <a name="querygetdata"></a>  IDataObjectImpl::QueryGetData

Determina se l'oggetto dati supporta una struttura `FORMATETC` specifica per il trasferimento dei dati.

```
HRESULT QueryGetData(FORMATETC* pformatetc);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Vedere [IDataObject:: QueryGetData](/windows/win32/api/objidl/nf-objidl-idataobject-querygetdata) nel Windows SDK.

##  <a name="setdata"></a>  IDataObjectImpl::SetData

Trasferisce i dati dal client all'oggetto dati.

```
HRESULT SetData(
    FORMATETC* pformatetc,
    STGMEDIUM* pmedium,
    BOOL fRelease);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Vedere [IDataObject:: SetData](/windows/win32/api/objidl/nf-objidl-idataobject-setdata) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
