---
title: Classe IPersistStreamInitImpl
ms.date: 11/04/2016
f1_keywords:
- IPersistStreamInitImpl
- ATLCOM/ATL::IPersistStreamInitImpl
- ATLCOM/ATL::IPersistStreamInitImpl::GetClassID
- ATLCOM/ATL::IPersistStreamInitImpl::GetSizeMax
- ATLCOM/ATL::IPersistStreamInitImpl::InitNew
- ATLCOM/ATL::IPersistStreamInitImpl::IsDirty
- ATLCOM/ATL::IPersistStreamInitImpl::Load
- ATLCOM/ATL::IPersistStreamInitImpl::Save
helpviewer_keywords:
- IPersistStreamInit ATL implementation
- IPersistStreamInitImpl class
- streams, ATL
ms.assetid: ef217c3c-020f-4cf8-871e-ef68e57865b8
ms.openlocfilehash: 0d6ac4639ac0cfb97416ca80b7a2ec3903d7b8e6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326457"
---
# <a name="ipersiststreaminitimpl-class"></a>Classe IPersistStreamInitImpl

Questa classe `IUnknown` implementa e fornisce un'implementazione predefinita del [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) interfaccia.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE IPersistStreamInitImpl
   : public IPersistStreamInit
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IPersistStreamInitImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPersistStreamInitImpl::GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|
|[IPersistStreamInitImpl::GetSizeMax](#getsizemax)|Recupera le dimensioni del flusso necessario per salvare i dati dell'oggetto. L'implementazione ATL restituisce E_NOTIMPL.|
|[IPersistStreamInitImpl::InitNew](#initnew)|Inizializza un oggetto appena creato.|
|[IPersistStreamInitImpl::IsDirty](#isdirty)|Controlla se i dati dell'oggetto sono stati modificati dall'ultimo salvataggio.|
|[IPersistStreamInitImpl::Carica](#load)|Carica le proprietà dell'oggetto dal flusso specificato.|
|[IPersistStreamInitImpl::Salva](#save)|Salva le proprietà dell'oggetto nel flusso specificato.|

## <a name="remarks"></a>Osservazioni

L'interfaccia [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) consente a un client di richiedere che l'oggetto carichi e salvi i dati persistenti in un singolo flusso. Classe `IPersistStreamInitImpl` fornisce un'implementazione predefinita `IUnknown` di questa interfaccia e implementa inviando informazioni al dispositivo di dump nelle build di debug.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPersistStreamInit`

`IPersistStreamInitImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ipersiststreaminitimplgetclassid"></a><a name="getclassid"></a>IPersistStreamInitImpl::GetClassID

Recupera il CLSID dell'oggetto.

```
STDMETHOD(GetClassID)(CLSID* pClassID);
```

### <a name="remarks"></a>Osservazioni

Vedere [IPersist::GetClassID](/windows/win32/api/objidl/nf-objidl-ipersist-getclassid) in Windows SDK.

## <a name="ipersiststreaminitimplgetsizemax"></a><a name="getsizemax"></a>IPersistStreamInitImpl::GetSizeMax

Recupera le dimensioni del flusso necessario per salvare i dati dell'oggetto.

```
STDMETHOD(GetSizeMax)(ULARGE_INTEGER FAR* pcbSize);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IPersistStreamInit::GetSizeMax](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-getsizemax) in Windows SDK.

## <a name="ipersiststreaminitimplinitnew"></a><a name="initnew"></a>IPersistStreamInitImpl::InitNew

Inizializza un oggetto appena creato.

```
STDMETHOD(InitNew)();
```

### <a name="remarks"></a>Osservazioni

Vedere [IPersistStreamInit::InitNew](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-initnew) in Windows SDK.

## <a name="ipersiststreaminitimplisdirty"></a><a name="isdirty"></a>IPersistStreamInitImpl::IsDirty

Controlla se i dati dell'oggetto sono stati modificati dall'ultimo salvataggio.

```
STDMETHOD(IsDirty)();
```

### <a name="remarks"></a>Osservazioni

Vedere [IPersistStreamInit::IsDirty](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-isdirty) in Windows SDK.

## <a name="ipersiststreaminitimplload"></a><a name="load"></a>IPersistStreamInitImpl::Carica

Carica le proprietà dell'oggetto dal flusso specificato.

```
STDMETHOD(Load)(LPSTREAM pStm);
```

### <a name="remarks"></a>Osservazioni

ATL utilizza la mappa delle proprietà dell'oggetto per recuperare queste informazioni.

Vedere [IPersistStreamInit::Load](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-load) in Windows SDK.

## <a name="ipersiststreaminitimplsave"></a><a name="save"></a>IPersistStreamInitImpl::Salva

Salva le proprietà dell'oggetto nel flusso specificato.

```
STDMETHOD(Save)(LPSTREAM pStm, BOOL fClearDirty);
```

### <a name="remarks"></a>Osservazioni

ATL utilizza la mappa delle proprietà dell'oggetto per archiviare queste informazioni.

Vedere [IPersistStreamInit::Save](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-save) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Archivi e flussi](/windows/win32/Stg/storages-and-streams)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
