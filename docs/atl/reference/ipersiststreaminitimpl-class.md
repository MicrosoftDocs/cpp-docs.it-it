---
description: 'Altre informazioni su: classe IPersistStreamInitImpl'
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
ms.openlocfilehash: f60483435be750c7031f2e7bf7f3f18cba36a023
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158153"
---
# <a name="ipersiststreaminitimpl-class"></a>Classe IPersistStreamInitImpl

Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita dell'interfaccia [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE IPersistStreamInitImpl
   : public IPersistStreamInit
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IPersistStreamInitImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IPersistStreamInitImpl:: GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|
|[IPersistStreamInitImpl:: GetSizeMax](#getsizemax)|Recupera la dimensione del flusso necessaria per salvare i dati dell'oggetto. L'implementazione ATL restituisce E_NOTIMPL.|
|[IPersistStreamInitImpl:: InitNew](#initnew)|Inizializza un oggetto appena creato.|
|[IPersistStreamInitImpl:: IsDirty](#isdirty)|Verifica se i dati dell'oggetto sono stati modificati dopo l'ultimo salvataggio.|
|[IPersistStreamInitImpl:: Load](#load)|Carica le proprietà dell'oggetto dal flusso specificato.|
|[IPersistStreamInitImpl:: Save](#save)|Salva le proprietà dell'oggetto nel flusso specificato.|

## <a name="remarks"></a>Commenti

L'interfaccia [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) consente a un client di richiedere che l'oggetto venga caricato e salvato i dati persistenti in un singolo flusso. La classe `IPersistStreamInitImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa inviando `IUnknown` informazioni al dispositivo di dump nelle compilazioni di debug.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPersistStreamInit`

`IPersistStreamInitImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ipersiststreaminitimplgetclassid"></a><a name="getclassid"></a> IPersistStreamInitImpl:: GetClassID

Recupera il CLSID dell'oggetto.

```
STDMETHOD(GetClassID)(CLSID* pClassID);
```

### <a name="remarks"></a>Commenti

Vedere [IPersist:: GetClassID](/windows/win32/api/objidl/nf-objidl-ipersist-getclassid) nella Windows SDK.

## <a name="ipersiststreaminitimplgetsizemax"></a><a name="getsizemax"></a> IPersistStreamInitImpl:: GetSizeMax

Recupera la dimensione del flusso necessaria per salvare i dati dell'oggetto.

```
STDMETHOD(GetSizeMax)(ULARGE_INTEGER FAR* pcbSize);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Commenti

Vedere [IPersistStreamInit:: GetSizeMax](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-getsizemax) nella Windows SDK.

## <a name="ipersiststreaminitimplinitnew"></a><a name="initnew"></a> IPersistStreamInitImpl:: InitNew

Inizializza un oggetto appena creato.

```
STDMETHOD(InitNew)();
```

### <a name="remarks"></a>Commenti

Vedere [IPersistStreamInit:: InitNew](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-initnew) nella Windows SDK.

## <a name="ipersiststreaminitimplisdirty"></a><a name="isdirty"></a> IPersistStreamInitImpl:: IsDirty

Verifica se i dati dell'oggetto sono stati modificati dopo l'ultimo salvataggio.

```
STDMETHOD(IsDirty)();
```

### <a name="remarks"></a>Commenti

Vedere [IPersistStreamInit:: IsDirty](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-isdirty) nell'Windows SDK.

## <a name="ipersiststreaminitimplload"></a><a name="load"></a> IPersistStreamInitImpl:: Load

Carica le proprietà dell'oggetto dal flusso specificato.

```
STDMETHOD(Load)(LPSTREAM pStm);
```

### <a name="remarks"></a>Commenti

ATL utilizza la mappa delle proprietà dell'oggetto per recuperare queste informazioni.

Vedere [IPersistStreamInit:: Load](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-load) nel Windows SDK.

## <a name="ipersiststreaminitimplsave"></a><a name="save"></a> IPersistStreamInitImpl:: Save

Salva le proprietà dell'oggetto nel flusso specificato.

```
STDMETHOD(Save)(LPSTREAM pStm, BOOL fClearDirty);
```

### <a name="remarks"></a>Commenti

ATL utilizza la mappa delle proprietà dell'oggetto per archiviare queste informazioni.

Vedere [IPersistStreamInit:: Save](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-save) nell'Windows SDK.

## <a name="see-also"></a>Vedi anche

[Archiviazione e flussi](/windows/win32/Stg/storages-and-streams)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
