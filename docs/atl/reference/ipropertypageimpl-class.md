---
title: IPropertyPageImpl (classe)
ms.date: 11/04/2016
f1_keywords:
- IPropertyPageImpl
- ATLCTL/ATL::IPropertyPageImpl
- ATLCTL/ATL::IPropertyPageImpl::IPropertyPageImpl
- ATLCTL/ATL::IPropertyPageImpl::Activate
- ATLCTL/ATL::IPropertyPageImpl::Apply
- ATLCTL/ATL::IPropertyPageImpl::Deactivate
- ATLCTL/ATL::IPropertyPageImpl::GetPageInfo
- ATLCTL/ATL::IPropertyPageImpl::Help
- ATLCTL/ATL::IPropertyPageImpl::IsPageDirty
- ATLCTL/ATL::IPropertyPageImpl::Move
- ATLCTL/ATL::IPropertyPageImpl::SetDirty
- ATLCTL/ATL::IPropertyPageImpl::SetObjects
- ATLCTL/ATL::IPropertyPageImpl::SetPageSite
- ATLCTL/ATL::IPropertyPageImpl::Show
- ATLCTL/ATL::IPropertyPageImpl::TranslateAccelerator
- ATLCTL/ATL::IPropertyPageImpl::m_bDirty
- ATLCTL/ATL::IPropertyPageImpl::m_dwDocString
- ATLCTL/ATL::IPropertyPageImpl::m_dwHelpContext
- ATLCTL/ATL::IPropertyPageImpl::m_dwHelpFile
- ATLCTL/ATL::IPropertyPageImpl::m_dwTitle
- ATLCTL/ATL::IPropertyPageImpl::m_nObjects
- ATLCTL/ATL::IPropertyPageImpl::m_pPageSite
- ATLCTL/ATL::IPropertyPageImpl::m_ppUnk
- ATLCTL/ATL::IPropertyPageImpl::m_size
helpviewer_keywords:
- property pages
- IPropertyPage ATL implementation
- IPropertyPageImpl class
ms.assetid: f9b7c8b1-7a04-4eab-aa63-63efddb740fa
ms.openlocfilehash: ac8fcb3b8b2bd0f876cf28d58e195000112373f4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329579"
---
# <a name="ipropertypageimpl-class"></a>IPropertyPageImpl (classe)

Questa classe `IUnknown` implementa e fornisce un'implementazione predefinita del [IPropertyPage](/windows/win32/api/ocidl/nn-ocidl-ipropertypage) interfaccia.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IPropertyPageImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IPropertyPageImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPropertyPageImpl::IPropertyPageImplIPropertyPageImpl::IPropertyPageImpl](#ipropertypageimpl)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPropertyPageImpl::Attivare](#activate)|Crea la finestra di dialogo per la pagina delle proprietà.|
|[IPropertyPageImpl::Applicare](#apply)|Applica i valori della pagina delle `SetObjects`proprietà correnti agli oggetti sottostanti specificati tramite . L'implementazione ATL restituisce S_OK.|
|[IPropertyPageImpl::Dattivazione](#deactivate)|Elimina la finestra `Activate`creata con .|
|[IPropertyPageImpl::GetPageInfo](#getpageinfo)|Recupera informazioni sulla pagina delle proprietà.|
|[Informazioni su IPropertyPageImpl::Help](#help)|Richiama la Guida di Windows per la pagina delle proprietà.|
|[IPropertyPageImpl::IsPageDirtyIPropertyIPropertyPageImpl::IsPageDirty](#ispagedirty)|Indica se la pagina delle proprietà è stata modificata dopo l'attivazione.|
|[IPropertyPageImpl::Sposta](#move)|Posiziona e ridimensiona la finestra di dialogo della pagina delle proprietà.|
|[IPropertyPageImpl::SetDirtyIPropertyPageImpl::SetDirty](#setdirty)|Contrassegna lo stato della pagina delle proprietà come modificato o invariato.|
|[IPropertyPageImpl::SetObjects](#setobjects)|Fornisce una `IUnknown` matrice di puntatori per gli oggetti associati alla pagina delle proprietà. Questi oggetti ricevono i valori della `Apply`pagina delle proprietà corrente tramite una chiamata a .|
|[IPropertyPageImpl::SetPageSite](#setpagesite)|Fornisce alla pagina `IPropertyPageSite` delle proprietà un puntatore, tramite il quale la pagina delle proprietà comunica con il frame della proprietà.|
|[IPropertyPageImpl::Mostra](#show)|Rende visibile o invisibile la finestra di dialogo della pagina delle proprietà.|
|[IPropertyPageImpl::TranslateAccelerator](#translateaccelerator)|Elabora una sequenza di tasti specificata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPropertyPageImpl::m_bDirty](#m_bdirty)|Specifica se lo stato della pagina delle proprietà è stato modificato.|
|[IPropertyPageImpl::m_dwDocString](#m_dwdocstring)|Archivia l'identificatore di risorsa associato alla stringa di testo che descrive la pagina delle proprietà.|
|[IPropertyPageImpl::m_dwHelpContext](#m_dwhelpcontext)|Archivia l'identificatore di contesto per l'argomento della Guida associato alla pagina delle proprietà.|
|[IPropertyPageImpl::m_dwHelpFile](#m_dwhelpfile)|Archivia l'identificatore di risorsa associato al nome del file della Guida che descrive la pagina delle proprietà.|
|[IPropertyPageImpl::m_dwTitle](#m_dwtitle)|Archivia l'identificatore di risorsa associato alla stringa di testo visualizzata nella scheda della pagina delle proprietà.|
|[IPropertyPageImpl::m_nObjects](#m_nobjects)|Archivia il numero di oggetti associati alla pagina delle proprietà.|
|[IPropertyPageImpl::m_pPageSite](#m_ppagesite)|Punta all'interfaccia `IPropertyPageSite` tramite la quale la pagina delle proprietà comunica con la cornice delle proprietà.|
|[IPropertyPageImpl::m_ppUnk](#m_ppunk)|Punta a una `IUnknown` matrice di puntatori agli oggetti associati alla pagina delle proprietà.|
|[IPropertyPageImpl::m_size](#m_size)|Memorizza l'altezza e la larghezza della finestra di dialogo della pagina delle proprietà, in pixel.|

## <a name="remarks"></a>Osservazioni

Il [IPropertyPage](/windows/win32/api/ocidl/nn-ocidl-ipropertypage) interfaccia consente a un oggetto di gestire una determinata pagina delle proprietà all'interno di una finestra delle proprietà. Classe `IPropertyPageImpl` fornisce un'implementazione predefinita `IUnknown` di questa interfaccia e implementa inviando informazioni al dispositivo di dump nelle build di debug.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPropertyPage`

`IPropertyPageImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="ipropertypageimplactivate"></a><a name="activate"></a>IPropertyPageImpl::Attivare

Crea la finestra di dialogo per la pagina delle proprietà.

```
HRESULT Activate(
    HWND hWndParent,
    LPCRECT pRect,
    BOOL bModal);
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, la finestra di dialogo è sempre indipendentemente dalla modalità, indipendentemente dal valore del parametro *bModal.*

Vedere [IPropertyPage::Activate](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-activate) in Windows SDK.

## <a name="ipropertypageimplapply"></a><a name="apply"></a>IPropertyPageImpl::Applicare

Applica i valori della pagina delle `SetObjects`proprietà correnti agli oggetti sottostanti specificati tramite .

```
HRESULT Apply();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IPropertyPage::Apply](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-apply) in Windows SDK.

## <a name="ipropertypageimpldeactivate"></a><a name="deactivate"></a>IPropertyPageImpl::Dattivazione

Elimina la finestra di dialogo creata con [Attiva](#activate).

```
HRESULT Deactivate();
```

### <a name="remarks"></a>Osservazioni

Vedere [IPropertyPage::Deactivate](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-deactivate) in Windows SDK.

## <a name="ipropertypageimplgetpageinfo"></a><a name="getpageinfo"></a>IPropertyPageImpl::GetPageInfo

Riempie la *struttura pPageInfo* con le informazioni contenute nei membri dati.

```
HRESULT GetPageInfo(PROPPAGEINFO* pPageInfo);
```

### <a name="remarks"></a>Osservazioni

`GetPageInfo`carica le risorse stringa associate a [m_dwDocString](#m_dwdocstring), [m_dwHelpFile](#m_dwhelpfile)e [m_dwTitle](#m_dwtitle).

Vedere [IPropertyPage::GetPageInfo](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-getpageinfo) in Windows SDK.

## <a name="ipropertypageimplhelp"></a><a name="help"></a>Informazioni su IPropertyPageImpl::Help

Richiama la Guida di Windows per la pagina delle proprietà.

```
HRESULT Help(PROPPAGEINFO* pPageInfo);
```

### <a name="remarks"></a>Osservazioni

Vedere [IPropertyPage::Help](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-help) in Windows SDK.

## <a name="ipropertypageimplipropertypageimpl"></a><a name="ipropertypageimpl"></a>IPropertyPageImpl::IPropertyPageImplIPropertyPageImpl::IPropertyPageImpl

Costruttore.

```
IPropertyPageImpl();
```

### <a name="remarks"></a>Osservazioni

Inizializza tutti i membri dati.

## <a name="ipropertypageimplispagedirty"></a><a name="ispagedirty"></a>IPropertyPageImpl::IsPageDirtyIPropertyIPropertyPageImpl::IsPageDirty

Indica se la pagina delle proprietà è stata modificata dopo l'attivazione.

```
HRESULT IsPageDirty(void);
```

### <a name="remarks"></a>Osservazioni

`IsPageDirty`restituisce S_OK se la pagina è stata modificata da quando è stata attivata.

## <a name="ipropertypageimplm_bdirty"></a><a name="m_bdirty"></a>IPropertyPageImpl::m_bDirty

Specifica se lo stato della pagina delle proprietà è stato modificato.

```
BOOL m_bDirty;
```

## <a name="ipropertypageimplm_nobjects"></a><a name="m_nobjects"></a>IPropertyPageImpl::m_nObjects

Archivia il numero di oggetti associati alla pagina delle proprietà.

```
ULONG m_nObjects;
```

## <a name="ipropertypageimplm_dwhelpcontext"></a><a name="m_dwhelpcontext"></a>IPropertyPageImpl::m_dwHelpContext

Archivia l'identificatore di contesto per l'argomento della Guida associato alla pagina delle proprietà.

```
DWORD m_dwHelpContext;
```

## <a name="ipropertypageimplm_dwdocstring"></a><a name="m_dwdocstring"></a>IPropertyPageImpl::m_dwDocString

Archivia l'identificatore di risorsa associato alla stringa di testo che descrive la pagina delle proprietà.

```
UINT m_dwDocString;
```

## <a name="ipropertypageimplm_dwhelpfile"></a><a name="m_dwhelpfile"></a>IPropertyPageImpl::m_dwHelpFile

Archivia l'identificatore di risorsa associato al nome del file della Guida che descrive la pagina delle proprietà.

```
UINT m_dwHelpFile;
```

## <a name="ipropertypageimplm_dwtitle"></a><a name="m_dwtitle"></a>IPropertyPageImpl::m_dwTitle

Archivia l'identificatore di risorsa associato alla stringa di testo visualizzata nella scheda della pagina delle proprietà.

```
UINT m_dwTitle;
```

## <a name="ipropertypageimplm_ppagesite"></a><a name="m_ppagesite"></a>IPropertyPageImpl::m_pPageSite

Punta all'interfaccia [IPropertyPageSite](/windows/win32/api/ocidl/nn-ocidl-ipropertypagesite) tramite la quale la pagina delle proprietà comunica con il frame della proprietà.

```
IPropertyPageSite* m_pPageSite;
```

## <a name="ipropertypageimplm_ppunk"></a><a name="m_ppunk"></a>IPropertyPageImpl::m_ppUnk

Punta a una `IUnknown` matrice di puntatori agli oggetti associati alla pagina delle proprietà.

```
IUnknown** m_ppUnk;
```

## <a name="ipropertypageimplm_size"></a><a name="m_size"></a>IPropertyPageImpl::m_size

Memorizza l'altezza e la larghezza della finestra di dialogo della pagina delle proprietà, in pixel.

```
SIZE m_size;
```

## <a name="ipropertypageimplmove"></a><a name="move"></a>IPropertyPageImpl::Sposta

Posiziona e ridimensiona la finestra di dialogo della pagina delle proprietà.

```
HRESULT Move(LPCRECT pRect);
```

### <a name="remarks"></a>Osservazioni

Vedere [IPropertyPage::Move](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-move) in Windows SDK.

## <a name="ipropertypageimplsetdirty"></a><a name="setdirty"></a>IPropertyPageImpl::SetDirtyIPropertyPageImpl::SetDirty

Contrassegna lo stato della pagina delle proprietà come modificato o invariato, a seconda del valore di *bDirty*.

```
void SetDirty(BOOL bDirty);
```

### <a name="parameters"></a>Parametri

*bSporco*<br/>
[in] Se TRUE, lo stato della pagina delle proprietà è contrassegnato come modificato. In caso contrario, viene contrassegnato come invariato.

### <a name="remarks"></a>Osservazioni

Se necessario, `SetDirty` informa il frame che la pagina delle proprietà è stata modificata.

## <a name="ipropertypageimplsetobjects"></a><a name="setobjects"></a>IPropertyPageImpl::SetObjects

Fornisce una `IUnknown` matrice di puntatori per gli oggetti associati alla pagina delle proprietà.

```
HRESULT SetObjects(ULONG nObjects, IUnknown** ppUnk);
```

### <a name="remarks"></a>Osservazioni

Vedere [IPropertyPage::SetObjects](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-setobjects) in Windows SDK.

## <a name="ipropertypageimplsetpagesite"></a><a name="setpagesite"></a>IPropertyPageImpl::SetPageSite

Fornisce alla pagina delle proprietà un puntatore [IPropertyPageSite,](/windows/win32/api/ocidl/nn-ocidl-ipropertypagesite) tramite il quale la pagina delle proprietà comunica con la cornice della proprietà.

```
HRESULT SetPageSite(IPropertyPageSite* pPageSite);
```

### <a name="remarks"></a>Osservazioni

Vedere [IPropertyPage::SetPageSite](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-setpagesite) in Windows SDK.

## <a name="ipropertypageimplshow"></a><a name="show"></a>IPropertyPageImpl::Mostra

Rende visibile o invisibile la finestra di dialogo della pagina delle proprietà.

```
HRESULT Show(UINT nCmdShow);
```

### <a name="remarks"></a>Osservazioni

Vedere [IPropertyPage::Show](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-show) in Windows SDK.

## <a name="ipropertypageimpltranslateaccelerator"></a><a name="translateaccelerator"></a>IPropertyPageImpl::TranslateAccelerator

Elabora la sequenza di `pMsg`tasti specificata in .

```
HRESULT TranslateAccelerator(MSG* pMsg);
```

### <a name="remarks"></a>Osservazioni

Vedere [IPropertyPage::TranslateAccelerator](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-translateaccelerator) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[IPropertyPage2Impl (classe)](../../atl/reference/ipropertypage2impl-class.md)<br/>
[IPerPropertyBrowsingImpl (classe)](../../atl/reference/iperpropertybrowsingimpl-class.md)<br/>
[Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
