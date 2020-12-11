---
description: 'Altre informazioni su: classe IQuickActivateImpl'
title: Classe IQuickActivateImpl
ms.date: 11/04/2016
f1_keywords:
- IQuickActivateImpl
- ATLCTL/ATL::IQuickActivateImpl
- ATLCTL/ATL::IQuickActivateImpl::GetContentExtent
- ATLCTL/ATL::IQuickActivateImpl::QuickActivate
- ATLCTL/ATL::IQuickActivateImpl::SetContentExtent
helpviewer_keywords:
- activating ATL controls
- controls [ATL], activating
- IQuickActivateImpl class
- IQuickActivate ATL implementation
ms.assetid: aa80c056-1041-494e-b21d-2acca7dc27ea
ms.openlocfilehash: 1e9dc2891351512ec3ebe54ebe6711ee9d4a3fa0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158127"
---
# <a name="iquickactivateimpl-class"></a>Classe IQuickActivateImpl

Questa classe combina l'inizializzazione del controllo dei contenitori in un'unica chiamata.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE IQuickActivateImpl : public IQuickActivate
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IQuickActivateImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IQuickActivateImpl:: GetContentExtent](#getcontentextent)|Recupera le dimensioni di visualizzazione correnti per un controllo in esecuzione.|
|[IQuickActivateImpl:: QuickActivate](#quickactivate)|Esegue l'inizializzazione rapida dei controlli caricati.|
|[IQuickActivateImpl:: SetContentExtent](#setcontentextent)|Informa il controllo della quantità di spazio di visualizzazione assegnata al contenitore.|

## <a name="remarks"></a>Commenti

L'interfaccia [IQuickActivate](/windows/win32/api/ocidl/nn-ocidl-iquickactivate) consente ai contenitori di evitare ritardi durante il caricamento dei controlli combinando l'inizializzazione in un'unica chiamata. Il `QuickActivate` metodo consente al contenitore di passare un puntatore a una struttura [QACONTAINER](/windows/win32/api/ocidl/ns-ocidl-qacontainer) che include puntatori a tutte le interfacce necessarie per il controllo. Al ritorno, il controllo passa di nuovo un puntatore a una struttura [QACONTROL](/windows/win32/api/ocidl/ns-ocidl-qacontrol) che include i puntatori alle relative interfacce, che vengono usate dal contenitore. `IQuickActivateImpl`La classe fornisce un'implementazione predefinita di `IQuickActivate` e implementa inviando `IUnknown` informazioni al dispositivo di dump nelle compilazioni di debug.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IQuickActivate`

`IQuickActivateImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="iquickactivateimplgetcontentextent"></a><a name="getcontentextent"></a> IQuickActivateImpl:: GetContentExtent

Recupera le dimensioni di visualizzazione correnti per un controllo in esecuzione.

```
STDMETHOD(GetContentExtent)(LPSIZEL pSize);
```

### <a name="remarks"></a>Commenti

La dimensione è per un rendering completo del controllo e viene specificata in unità HIMETRIC.

Vedere [IQuickActivate:: GetContentExtent](/windows/win32/api/ocidl/nf-ocidl-iquickactivate-getcontentextent) nella Windows SDK.

## <a name="iquickactivateimplquickactivate"></a><a name="quickactivate"></a> IQuickActivateImpl:: QuickActivate

Esegue l'inizializzazione rapida dei controlli caricati.

```
STDMETHOD(QuickActivate)(
    QACONTAINER* pQACont,
    QACONTROL* pQACtrl);
```

### <a name="remarks"></a>Commenti

La struttura contiene i puntatori alle interfacce necessarie per il controllo e i valori di alcune proprietà di ambiente. Al momento della restituzione, il controllo passa un puntatore a una struttura [QACONTROL](/windows/win32/api/ocidl/ns-ocidl-qacontrol) che contiene puntatori alle proprie interfacce richieste dal contenitore e informazioni aggiuntive sullo stato.

Vedere [IQuickActivate:: QuickActivate](/windows/win32/api/ocidl/nf-ocidl-iquickactivate-quickactivate) nella Windows SDK.

## <a name="iquickactivateimplsetcontentextent"></a><a name="setcontentextent"></a> IQuickActivateImpl:: SetContentExtent

Informa il controllo della quantità di spazio di visualizzazione assegnata al contenitore.

```
STDMETHOD(SetContentExtent)(LPSIZEL pSize);
```

### <a name="remarks"></a>Commenti

La dimensione è specificata in unità HIMETRIC.

Vedere [IQuickActivate:: SetContentExtent](/windows/win32/api/ocidl/nf-ocidl-iquickactivate-setcontentextent) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
