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
ms.openlocfilehash: 7e1984249caf66e2986341f9c9f7a939d7039125
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329558"
---
# <a name="iquickactivateimpl-class"></a>Classe IQuickActivateImpl

Questa classe combina l'inizializzazione del controllo dei contenitori in una singola chiamata.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE IQuickActivateImpl : public IQuickActivate
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IQuickActivateImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IQuickActivateImpl::GetContentExtent](#getcontentextent)|Recupera le dimensioni di visualizzazione correnti per un controllo in esecuzione.|
|[IQuickActivateImpl::QuickActivate](#quickactivate)|Esegue l'inizializzazione rapida dei controlli caricati.|
|[IQuickActivateImpl::SetContentExtent](#setcontentextent)|Informa il controllo della quantità di spazio di visualizzazione assegnato dal contenitore.|

## <a name="remarks"></a>Osservazioni

L'interfaccia [IQuickActivate](/windows/win32/api/ocidl/nn-ocidl-iquickactivate) consente ai contenitori di evitare ritardi durante il caricamento dei controlli combinando l'inizializzazione in una singola chiamata. Il `QuickActivate` metodo consente al contenitore di passare un puntatore a una struttura [QACONTAINER](/windows/win32/api/ocidl/ns-ocidl-qacontainer) che contiene puntatori a tutte le interfacce necessarie per il controllo. Al ritorno, il controllo passa un puntatore a una struttura [QACONTROL](/windows/win32/api/ocidl/ns-ocidl-qacontrol) che contiene i puntatori alle proprie interfacce, utilizzate dal contenitore. Classe `IQuickActivateImpl` fornisce un'implementazione predefinita di `IQuickActivate` e implementa `IUnknown` inviando informazioni al dispositivo di dump nelle build di debug.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IQuickActivate`

`IQuickActivateImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="iquickactivateimplgetcontentextent"></a><a name="getcontentextent"></a>IQuickActivateImpl::GetContentExtent

Recupera le dimensioni di visualizzazione correnti per un controllo in esecuzione.

```
STDMETHOD(GetContentExtent)(LPSIZEL pSize);
```

### <a name="remarks"></a>Osservazioni

La dimensione è per un rendering completo del controllo ed è specificata in unità HIMETRIC.

Vedere [IQuickActivate::GetContentExtent](/windows/win32/api/ocidl/nf-ocidl-iquickactivate-getcontentextent) in Windows SDK.

## <a name="iquickactivateimplquickactivate"></a><a name="quickactivate"></a>IQuickActivateImpl::QuickActivate

Esegue l'inizializzazione rapida dei controlli caricati.

```
STDMETHOD(QuickActivate)(
    QACONTAINER* pQACont,
    QACONTROL* pQACtrl);
```

### <a name="remarks"></a>Osservazioni

La struttura contiene puntatori alle interfacce necessarie per il controllo e i valori di alcune proprietà di ambiente. Al momento della restituzione, il controllo passa un puntatore a una struttura [QACONTROL](/windows/win32/api/ocidl/ns-ocidl-qacontrol) che contiene puntatori alle proprie interfacce richieste dal contenitore e informazioni aggiuntive sullo stato.

Vedere [IQuickActivate::QuickActivate](/windows/win32/api/ocidl/nf-ocidl-iquickactivate-quickactivate) in Windows SDK.

## <a name="iquickactivateimplsetcontentextent"></a><a name="setcontentextent"></a>IQuickActivateImpl::SetContentExtent

Informa il controllo della quantità di spazio di visualizzazione assegnato dal contenitore.

```
STDMETHOD(SetContentExtent)(LPSIZEL pSize);
```

### <a name="remarks"></a>Osservazioni

La dimensione è specificata in unità HIMETRIC.

Vedere [IQuickActivate::SetContentExtent](/windows/win32/api/ocidl/nf-ocidl-iquickactivate-setcontentextent) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[CComControl (classe)](../../atl/reference/ccomcontrol-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
