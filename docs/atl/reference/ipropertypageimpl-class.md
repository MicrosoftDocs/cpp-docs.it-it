---
description: 'Altre informazioni su: classe IPropertyPageImpl'
title: Classe IPropertyPageImpl
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
ms.openlocfilehash: c3b8a52d3aff0beeb175a18af56a207284ff538d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158140"
---
# <a name="ipropertypageimpl-class"></a>Classe IPropertyPageImpl

Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita dell'interfaccia [IPropertyPage](/windows/win32/api/ocidl/nn-ocidl-ipropertypage) .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IPropertyPageImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IPropertyPageImpl` .

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[IPropertyPageImpl:: IPropertyPageImpl](#ipropertypageimpl)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IPropertyPageImpl:: Activate](#activate)|Crea la finestra di dialogo della pagina delle proprietà.|
|[IPropertyPageImpl:: Apply](#apply)|Applica i valori correnti della pagina delle proprietà agli oggetti sottostanti specificati tramite `SetObjects` . L'implementazione ATL restituisce S_OK.|
|[IPropertyPageImpl::D ttiva](#deactivate)|Elimina definitivamente la finestra creata con `Activate` .|
|[IPropertyPageImpl:: GetPageInfo](#getpageinfo)|Recupera le informazioni sulla pagina delle proprietà.|
|[IPropertyPageImpl:: Help](#help)|Richiama la Guida di Windows per la pagina delle proprietà.|
|[IPropertyPageImpl:: IsPageDirty](#ispagedirty)|Indica se la pagina delle proprietà è stata modificata dopo l'attivazione.|
|[IPropertyPageImpl:: Move](#move)|Posiziona e ridimensiona la finestra di dialogo della pagina delle proprietà.|
|[IPropertyPageImpl:: IsDirty](#setdirty)|Contrassegna lo stato della pagina delle proprietà come modificato o non modificato.|
|[IPropertyPageImpl:: seobjects](#setobjects)|Fornisce una matrice di `IUnknown` puntatori per gli oggetti associati alla pagina delle proprietà. Questi oggetti ricevono i valori correnti della pagina delle proprietà tramite una chiamata a `Apply` .|
|[IPropertyPageImpl:: SetPageSite](#setpagesite)|Fornisce la pagina delle proprietà con un `IPropertyPageSite` puntatore, tramite il quale la pagina delle proprietà comunica con il frame della proprietà.|
|[IPropertyPageImpl:: Show](#show)|Rende visibile o invisibile la finestra di dialogo della pagina delle proprietà.|
|[IPropertyPageImpl:: TranslateAccelerator](#translateaccelerator)|Elabora una sequenza di tasti specificata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[IPropertyPageImpl:: m_bDirty](#m_bdirty)|Specifica se lo stato della pagina delle proprietà è stato modificato.|
|[IPropertyPageImpl:: m_dwDocString](#m_dwdocstring)|Archivia l'identificatore di risorsa associato alla stringa di testo che descrive la pagina delle proprietà.|
|[IPropertyPageImpl:: m_dwHelpContext](#m_dwhelpcontext)|Archivia l'identificatore di contesto per l'argomento della Guida associato alla pagina delle proprietà.|
|[IPropertyPageImpl:: m_dwHelpFile](#m_dwhelpfile)|Archivia l'identificatore di risorsa associato al nome del file della guida che descrive la pagina delle proprietà.|
|[IPropertyPageImpl:: m_dwTitle](#m_dwtitle)|Archivia l'identificatore di risorsa associato alla stringa di testo visualizzata nella scheda della pagina delle proprietà.|
|[IPropertyPageImpl:: m_nObjects](#m_nobjects)|Archivia il numero di oggetti associati alla pagina delle proprietà.|
|[IPropertyPageImpl:: m_pPageSite](#m_ppagesite)|Punta all' `IPropertyPageSite` interfaccia tramite la quale la pagina delle proprietà comunica con il frame della proprietà.|
|[IPropertyPageImpl:: m_ppUnk](#m_ppunk)|Punta a una matrice di `IUnknown` puntatori agli oggetti associati alla pagina delle proprietà.|
|[IPropertyPageImpl:: m_size](#m_size)|Archivia l'altezza e la larghezza della finestra di dialogo della pagina delle proprietà, in pixel.|

## <a name="remarks"></a>Commenti

L'interfaccia [IPropertyPage](/windows/win32/api/ocidl/nn-ocidl-ipropertypage) consente a un oggetto di gestire una particolare pagina delle proprietà all'interno di una finestra delle proprietà. La classe `IPropertyPageImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa inviando `IUnknown` informazioni al dispositivo di dump nelle compilazioni di debug.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPropertyPage`

`IPropertyPageImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="ipropertypageimplactivate"></a><a name="activate"></a> IPropertyPageImpl:: Activate

Crea la finestra di dialogo della pagina delle proprietà.

```
HRESULT Activate(
    HWND hWndParent,
    LPCRECT pRect,
    BOOL bModal);
```

### <a name="remarks"></a>Commenti

Per impostazione predefinita, la finestra di dialogo è sempre non modale, indipendentemente dal valore del parametro *bModal* .

Vedere [IPropertyPage:: Activate](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-activate) nel Windows SDK.

## <a name="ipropertypageimplapply"></a><a name="apply"></a> IPropertyPageImpl:: Apply

Applica i valori correnti della pagina delle proprietà agli oggetti sottostanti specificati tramite `SetObjects` .

```
HRESULT Apply();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IPropertyPage:: Apply](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-apply) nel Windows SDK.

## <a name="ipropertypageimpldeactivate"></a><a name="deactivate"></a> IPropertyPageImpl::D ttiva

Elimina definitivamente la finestra di dialogo creata con [Activate](#activate).

```
HRESULT Deactivate();
```

### <a name="remarks"></a>Commenti

Vedere [IPropertyPage::D ttiva](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-deactivate) nel Windows SDK.

## <a name="ipropertypageimplgetpageinfo"></a><a name="getpageinfo"></a> IPropertyPageImpl:: GetPageInfo

Compila la struttura *pPageInfo* con le informazioni contenute nei membri dati.

```
HRESULT GetPageInfo(PROPPAGEINFO* pPageInfo);
```

### <a name="remarks"></a>Commenti

`GetPageInfo` carica le risorse di stringa associate a [m_dwDocString](#m_dwdocstring), [m_dwHelpFile](#m_dwhelpfile)e [m_dwTitle](#m_dwtitle).

Vedere [IPropertyPage:: GetPageInfo](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-getpageinfo) nella Windows SDK.

## <a name="ipropertypageimplhelp"></a><a name="help"></a> IPropertyPageImpl:: Help

Richiama la Guida di Windows per la pagina delle proprietà.

```
HRESULT Help(PROPPAGEINFO* pPageInfo);
```

### <a name="remarks"></a>Commenti

Vedere [IPropertyPage:: Help](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-help) nell'Windows SDK.

## <a name="ipropertypageimplipropertypageimpl"></a><a name="ipropertypageimpl"></a> IPropertyPageImpl:: IPropertyPageImpl

Costruttore.

```
IPropertyPageImpl();
```

### <a name="remarks"></a>Commenti

Inizializza tutti i membri dati.

## <a name="ipropertypageimplispagedirty"></a><a name="ispagedirty"></a> IPropertyPageImpl:: IsPageDirty

Indica se la pagina delle proprietà è stata modificata dopo l'attivazione.

```
HRESULT IsPageDirty(void);
```

### <a name="remarks"></a>Commenti

`IsPageDirty` Restituisce S_OK se la pagina è stata modificata dopo che è stata attivata.

## <a name="ipropertypageimplm_bdirty"></a><a name="m_bdirty"></a> IPropertyPageImpl:: m_bDirty

Specifica se lo stato della pagina delle proprietà è stato modificato.

```
BOOL m_bDirty;
```

## <a name="ipropertypageimplm_nobjects"></a><a name="m_nobjects"></a> IPropertyPageImpl:: m_nObjects

Archivia il numero di oggetti associati alla pagina delle proprietà.

```
ULONG m_nObjects;
```

## <a name="ipropertypageimplm_dwhelpcontext"></a><a name="m_dwhelpcontext"></a> IPropertyPageImpl:: m_dwHelpContext

Archivia l'identificatore di contesto per l'argomento della Guida associato alla pagina delle proprietà.

```
DWORD m_dwHelpContext;
```

## <a name="ipropertypageimplm_dwdocstring"></a><a name="m_dwdocstring"></a> IPropertyPageImpl:: m_dwDocString

Archivia l'identificatore di risorsa associato alla stringa di testo che descrive la pagina delle proprietà.

```
UINT m_dwDocString;
```

## <a name="ipropertypageimplm_dwhelpfile"></a><a name="m_dwhelpfile"></a> IPropertyPageImpl:: m_dwHelpFile

Archivia l'identificatore di risorsa associato al nome del file della guida che descrive la pagina delle proprietà.

```
UINT m_dwHelpFile;
```

## <a name="ipropertypageimplm_dwtitle"></a><a name="m_dwtitle"></a> IPropertyPageImpl:: m_dwTitle

Archivia l'identificatore di risorsa associato alla stringa di testo visualizzata nella scheda della pagina delle proprietà.

```
UINT m_dwTitle;
```

## <a name="ipropertypageimplm_ppagesite"></a><a name="m_ppagesite"></a> IPropertyPageImpl:: m_pPageSite

Punta all'interfaccia [IPropertyPageSite](/windows/win32/api/ocidl/nn-ocidl-ipropertypagesite) tramite la quale la pagina delle proprietà comunica con il frame della proprietà.

```
IPropertyPageSite* m_pPageSite;
```

## <a name="ipropertypageimplm_ppunk"></a><a name="m_ppunk"></a> IPropertyPageImpl:: m_ppUnk

Punta a una matrice di `IUnknown` puntatori agli oggetti associati alla pagina delle proprietà.

```
IUnknown** m_ppUnk;
```

## <a name="ipropertypageimplm_size"></a><a name="m_size"></a> IPropertyPageImpl:: m_size

Archivia l'altezza e la larghezza della finestra di dialogo della pagina delle proprietà, in pixel.

```
SIZE m_size;
```

## <a name="ipropertypageimplmove"></a><a name="move"></a> IPropertyPageImpl:: Move

Posiziona e ridimensiona la finestra di dialogo della pagina delle proprietà.

```
HRESULT Move(LPCRECT pRect);
```

### <a name="remarks"></a>Commenti

Vedere [IPropertyPage:: Move](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-move) nel Windows SDK.

## <a name="ipropertypageimplsetdirty"></a><a name="setdirty"></a> IPropertyPageImpl:: IsDirty

Contrassegna lo stato della pagina delle proprietà come modificato o non modificato, a seconda del valore di *bDirty*.

```cpp
void SetDirty(BOOL bDirty);
```

### <a name="parameters"></a>Parametri

*bDirty*<br/>
in Se TRUE, lo stato della pagina delle proprietà è contrassegnato come modificato. In caso contrario, viene contrassegnato come invariato.

### <a name="remarks"></a>Commenti

Se necessario, `SetDirty` informa il frame che la pagina delle proprietà è stata modificata.

## <a name="ipropertypageimplsetobjects"></a><a name="setobjects"></a> IPropertyPageImpl:: seobjects

Fornisce una matrice di `IUnknown` puntatori per gli oggetti associati alla pagina delle proprietà.

```
HRESULT SetObjects(ULONG nObjects, IUnknown** ppUnk);
```

### <a name="remarks"></a>Commenti

Vedere [IPropertyPage:: Seobjects](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-setobjects) nella Windows SDK.

## <a name="ipropertypageimplsetpagesite"></a><a name="setpagesite"></a> IPropertyPageImpl:: SetPageSite

Fornisce la pagina delle proprietà con un puntatore [IPropertyPageSite](/windows/win32/api/ocidl/nn-ocidl-ipropertypagesite) , tramite il quale la pagina delle proprietà comunica con il frame della proprietà.

```
HRESULT SetPageSite(IPropertyPageSite* pPageSite);
```

### <a name="remarks"></a>Commenti

Vedere [IPropertyPage:: SetPageSite](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-setpagesite) nella Windows SDK.

## <a name="ipropertypageimplshow"></a><a name="show"></a> IPropertyPageImpl:: Show

Rende visibile o invisibile la finestra di dialogo della pagina delle proprietà.

```
HRESULT Show(UINT nCmdShow);
```

### <a name="remarks"></a>Commenti

Vedere [IPropertyPage:: Show](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-show) nel Windows SDK.

## <a name="ipropertypageimpltranslateaccelerator"></a><a name="translateaccelerator"></a> IPropertyPageImpl:: TranslateAccelerator

Elabora la sequenza di tasti specificata in `pMsg` .

```
HRESULT TranslateAccelerator(MSG* pMsg);
```

### <a name="remarks"></a>Commenti

Vedere [IPropertyPage:: TranslateAccelerator](/windows/win32/api/ocidl/nf-ocidl-ipropertypage-translateaccelerator) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe IPropertyPage2Impl](../../atl/reference/ipropertypage2impl-class.md)<br/>
[Classe IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)<br/>
[Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
