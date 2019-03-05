---
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
ms.openlocfilehash: 2a2b11746249b6ee4f6ddd578717aacc374d53bc
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57265249"
---
# <a name="iquickactivateimpl-class"></a>Classe IQuickActivateImpl

Questa classe combina l'inizializzazione di controllo dei contenitori in un'unica chiamata.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE IQuickActivateImpl : public IQuickActivate
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IQuickActivateImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IQuickActivateImpl::GetContentExtent](#getcontentextent)|Recupera le dimensioni di visualizzazione corrente per un controllo in esecuzione.|
|[IQuickActivateImpl::QuickActivate](#quickactivate)|Esegue un'inizializzazione dei controlli in fase di caricamento rapida.|
|[IQuickActivateImpl::SetContentExtent](#setcontentextent)|Informa il controllo di quanto lo spazio di visualizzazione ha assegnato al contenitore.|

## <a name="remarks"></a>Note

Il [IQuickActivate](/windows/desktop/api/ocidl/nn-ocidl-iquickactivate) interfaccia aiuta i contenitori di evitare ritardi durante il caricamento dei controlli mediante la combinazione di inizializzazione in un'unica chiamata. Il `QuickActivate` metodo consente al contenitore di passare un puntatore a un [QACONTAINER](/windows/desktop/api/ocidl/ns-ocidl-tagqacontainer) deve struttura che contiene i puntatori a tutte le interfacce al controllo. In fase di restituzione, il controllo passa nuovamente un puntatore a un [QACONTROL](/windows/desktop/api/ocidl/ns-ocidl-tagqacontrol) struttura che contiene i puntatori per le proprie interfacce, che vengono usate dal contenitore. Classe `IQuickActivateImpl` fornisce un'implementazione predefinita di `IQuickActivate` e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

**Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IQuickActivate`

`IQuickActivateImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="getcontentextent"></a>  IQuickActivateImpl::GetContentExtent

Recupera le dimensioni di visualizzazione corrente per un controllo in esecuzione.

```
STDMETHOD(GetContentExtent)(LPSIZEL pSize);
```

### <a name="remarks"></a>Note

La dimensione è per il rendering del controllo completo e viene specificata in unità HIMETRIC.

Visualizzare [IQuickActivate::GetContentExtent](/windows/desktop/api/ocidl/nf-ocidl-iquickactivate-getcontentextent) in Windows SDK.

##  <a name="quickactivate"></a>  IQuickActivateImpl::QuickActivate

Esegue un'inizializzazione dei controlli in fase di caricamento rapida.

```
STDMETHOD(QuickActivate)(
    QACONTAINER* pQACont,
    QACONTROL* pQACtrl);
```

### <a name="remarks"></a>Note

La struttura contiene i puntatori alle interfacce necessarie per il controllo e i valori di alcune proprietà di ambiente. Al momento della restituzione, il controllo passa un puntatore a un [QACONTROL](/windows/desktop/api/ocidl/ns-ocidl-tagqacontrol) struttura che contiene i puntatori per le proprie interfacce che richiede il contenitore e informazioni aggiuntive sullo stato.

Visualizzare [IQuickActivate::QuickActivate](/windows/desktop/api/ocidl/nf-ocidl-iquickactivate-quickactivate) in Windows SDK.

##  <a name="setcontentextent"></a>  IQuickActivateImpl::SetContentExtent

Informa il controllo di quanto lo spazio di visualizzazione ha assegnato al contenitore.

```
STDMETHOD(SetContentExtent)(LPSIZEL pSize);
```

### <a name="remarks"></a>Note

La dimensione è specificata in unità HIMETRIC.

Visualizzare [IQuickActivate::SetContentExtent](/windows/desktop/api/ocidl/nf-ocidl-iquickactivate-setcontentextent) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
