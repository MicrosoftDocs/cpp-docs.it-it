---
title: Classe IPersistStreamInitImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IPersistStreamInitImpl
- ATLCOM/ATL::IPersistStreamInitImpl
- ATLCOM/ATL::IPersistStreamInitImpl::GetClassID
- ATLCOM/ATL::IPersistStreamInitImpl::GetSizeMax
- ATLCOM/ATL::IPersistStreamInitImpl::InitNew
- ATLCOM/ATL::IPersistStreamInitImpl::IsDirty
- ATLCOM/ATL::IPersistStreamInitImpl::Load
- ATLCOM/ATL::IPersistStreamInitImpl::Save
dev_langs:
- C++
helpviewer_keywords:
- IPersistStreamInit ATL implementation
- IPersistStreamInitImpl class
- streams, ATL
ms.assetid: ef217c3c-020f-4cf8-871e-ef68e57865b8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 85e772b9222f2066259042e551fa393758559ab2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46115878"
---
# <a name="ipersiststreaminitimpl-class"></a>Classe IPersistStreamInitImpl

Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita del [IPersistStreamInit](/windows/desktop/api/ocidl/nn-ocidl-ipersiststreaminit) interfaccia.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE IPersistStreamInitImpl 
   : public IPersistStreamInit
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IPersistStreamInitImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPersistStreamInitImpl::GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|
|[IPersistStreamInitImpl::GetSizeMax](#getsizemax)|Recupera la dimensione del flusso necessario per salvare i dati dell'oggetto. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IPersistStreamInitImpl::InitNew](#initnew)|Inizializza un oggetto appena creato.|
|[IPersistStreamInitImpl::IsDirty](#isdirty)|Controlla se i dati dell'oggetto sono stato modificato dall'ultimo salvataggio.|
|[IPersistStreamInitImpl::Load](#load)|Carica le proprietà dell'oggetto dal flusso specificato.|
|[IPersistStreamInitImpl::Save](#save)|Salva le proprietà dell'oggetto nel flusso specificato.|

## <a name="remarks"></a>Note

Il [IPersistStreamInit](/windows/desktop/api/ocidl/nn-ocidl-ipersiststreaminit) interfaccia consente a un client di richiedere che l'oggetto carica e Salva i dati persistenti in un singolo flusso. Classe `IPersistStreamInitImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

**Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPersistStreamInit`

`IPersistStreamInitImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="getclassid"></a>  IPersistStreamInitImpl::GetClassID

Recupera il CLSID dell'oggetto.

```
STDMETHOD(GetClassID)(CLSID* pClassID);
```

### <a name="remarks"></a>Note

Visualizzare [IPersist:: GetClassID](/windows/desktop/api/objidl/nf-objidl-ipersist-getclassid) in Windows SDK.

##  <a name="getsizemax"></a>  IPersistStreamInitImpl::GetSizeMax

Recupera la dimensione del flusso necessario per salvare i dati dell'oggetto.

```
STDMETHOD(GetSizeMax)(ULARGE_INTEGER FAR* pcbSize);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Visualizzare [IPersistStreamInit::GetSizeMax](/windows/desktop/api/ocidl/nf-ocidl-ipersiststreaminit-getsizemax) in Windows SDK.

##  <a name="initnew"></a>  IPersistStreamInitImpl::InitNew

Inizializza un oggetto appena creato.

```
STDMETHOD(InitNew)();
```

### <a name="remarks"></a>Note

Visualizzare [IPersistStreamInit](/windows/desktop/api/ocidl/nf-ocidl-ipersiststreaminit-initnew) in Windows SDK.

##  <a name="isdirty"></a>  IPersistStreamInitImpl::IsDirty

Controlla se i dati dell'oggetto sono stato modificato dall'ultimo salvataggio.

```
STDMETHOD(IsDirty)();
```

### <a name="remarks"></a>Note

Visualizzare [IPersistStreamInit::IsDirty](/windows/desktop/api/ocidl/nf-ocidl-ipersiststreaminit-isdirty) in Windows SDK.

##  <a name="load"></a>  IPersistStreamInitImpl::Load

Carica le proprietà dell'oggetto dal flusso specificato.

```
STDMETHOD(Load)(LPSTREAM pStm);
```

### <a name="remarks"></a>Note

ATL Usa il mapping di proprietà dell'oggetto per recuperare queste informazioni.

Visualizzare [IPersistStreamInit::Load](/windows/desktop/api/ocidl/nf-ocidl-ipersiststreaminit-load) in Windows SDK.

##  <a name="save"></a>  IPersistStreamInitImpl::Save

Salva le proprietà dell'oggetto nel flusso specificato.

```
STDMETHOD(Save)(LPSTREAM pStm, BOOL fClearDirty);
```

### <a name="remarks"></a>Note

ATL Usa il mapping di proprietà dell'oggetto per archiviare queste informazioni.

Visualizzare [IPersistStreamInit::Save](/windows/desktop/api/ocidl/nf-ocidl-ipersiststreaminit-save) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Flussi e archivi](/windows/desktop/Stg/storages-and-streams)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
