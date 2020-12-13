---
description: 'Altre informazioni su: classe IOleInPlaceObjectWindowlessImpl'
title: Classe IOleInPlaceObjectWindowlessImpl
ms.date: 11/04/2016
f1_keywords:
- IOleInPlaceObjectWindowlessImpl
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::GetDropTarget
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::GetWindow
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::OnWindowMessage
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::SetObjectRects
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::UIDeactivate
helpviewer_keywords:
- IOleInPlaceObjectWindowless, ATL implementation
- activation [C++], ATL
- IOleInPlaceObjectWindowlessImpl class
- ActiveX controls [C++], communication between container and control
- controls [ATL], windowless
- deactivating ATL
ms.assetid: a2e0feb4-bc59-4adf-aab2-105457bbdbb4
ms.openlocfilehash: 927a973565949bbfc6331e4b4e62d7cb270c2107
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139386"
---
# <a name="ioleinplaceobjectwindowlessimpl-class"></a>Classe IOleInPlaceObjectWindowlessImpl

Questa classe implementa `IUnknown` e fornisce metodi che consentono a un controllo senza finestra di ricevere messaggi della finestra e di partecipare alle operazioni di trascinamento della selezione.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IOleInPlaceObjectWindowlessImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IOleInPlaceObjectWindowlessImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IOleInPlaceObjectWindowlessImpl:: ContextSensitiveHelp](#contextsensitivehelp)|Abilita la Guida sensibile al contesto. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleInPlaceObjectWindowlessImpl:: GetDropTarget](#getdroptarget)|Fornisce l' `IDropTarget` interfaccia per un oggetto attivo sul posto e senza finestra che supporta il trascinamento della selezione. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleInPlaceObjectWindowlessImpl:: GetWindow](#getwindow)|Ottiene un handle di finestra.|
|[IOleInPlaceObjectWindowlessImpl:: InPlaceDeactivate](#inplacedeactivate)|Disattiva un controllo attivo sul posto.|
|[IOleInPlaceObjectWindowlessImpl:: OnWindowMessage](#onwindowmessage)|Invia un messaggio dal contenitore a un controllo senza finestra che è attivo sul posto.|
|[IOleInPlaceObjectWindowlessImpl:: ReactivateAndUndo](#reactivateandundo)|Riattiva un controllo precedentemente disattivato. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleInPlaceObjectWindowlessImpl:: SetObjectRects](#setobjectrects)|Indica quale parte del controllo sul posto è visibile.|
|[IOleInPlaceObjectWindowlessImpl:: UIDeactivate](#uideactivate)|Disattiva e rimuove l'interfaccia utente che supporta l'attivazione sul posto.|

## <a name="remarks"></a>Commenti

L'interfaccia [IOleInPlaceObject](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceobject) gestisce la riattivazione e la disattivazione dei controlli sul posto e determina la quantità di controllo che deve essere visibile. L'interfaccia [IOleInPlaceObjectWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplaceobjectwindowless) consente a un controllo senza finestra di ricevere messaggi della finestra e di partecipare alle operazioni di trascinamento della selezione. `IOleInPlaceObjectWindowlessImpl`La classe fornisce un'implementazione predefinita di `IOleInPlaceObject` e `IOleInPlaceObjectWindowless` e implementa `IUnknown` inviando informazioni al dispositivo di dump nelle compilazioni di debug.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IOleInPlaceObjectWindowless`

`IOleInPlaceObjectWindowlessImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="ioleinplaceobjectwindowlessimplcontextsensitivehelp"></a><a name="contextsensitivehelp"></a> IOleInPlaceObjectWindowlessImpl:: ContextSensitiveHelp

Restituisce E_NOTIMPL.

```
HRESULT ContextSensitiveHelp(BOOL fEnterMode);
```

### <a name="remarks"></a>Commenti

Vedere [IOleWindow:: ContextSensitiveHelp](/windows/win32/api/oleidl/nf-oleidl-iolewindow-contextsensitivehelp) nella Windows SDK.

## <a name="ioleinplaceobjectwindowlessimplgetdroptarget"></a><a name="getdroptarget"></a> IOleInPlaceObjectWindowlessImpl:: GetDropTarget

Restituisce E_NOTIMPL.

```
HRESULT GetDropTarget(IDropTarget** ppDropTarget);
```

### <a name="remarks"></a>Commenti

Vedere [IOleInPlaceObjectWindowless:: GetDropTarget](/windows/win32/api/ocidl/nf-ocidl-ioleinplaceobjectwindowless-getdroptarget) nella Windows SDK.

## <a name="ioleinplaceobjectwindowlessimplgetwindow"></a><a name="getwindow"></a> IOleInPlaceObjectWindowlessImpl:: GetWindow

Il contenitore chiama questa funzione per ottenere l'handle della finestra del controllo.

```
HRESULT GetWindow(HWND* phwnd);
```

### <a name="remarks"></a>Commenti

Alcuni contenitori non funzioneranno con un controllo privo di finestra, anche se è attualmente finestra. Nell'implementazione di ATL, se il membro dati della classe del controllo `m_bWasOnceWindowless` è true, la funzione restituisce E_FAIL. In caso contrario, se *phwnd* non è null, `GetWindow` imposta \* *phwnd* sul membro dati della classe del controllo `m_hWnd` e restituisce S_OK.

Vedere [IOleWindow:: GetWindow](/windows/win32/api/oleidl/nf-oleidl-iolewindow-getwindow) nell'Windows SDK.

## <a name="ioleinplaceobjectwindowlessimplinplacedeactivate"></a><a name="inplacedeactivate"></a> IOleInPlaceObjectWindowlessImpl:: InPlaceDeactivate

Chiamato dal contenitore per disattivare un controllo attivo sul posto.

```
HRESULT InPlaceDeactivate(HWND* phwnd);
```

### <a name="remarks"></a>Commenti

Questo metodo esegue una disattivazione completa o parziale a seconda dello stato del controllo. Se necessario, l'interfaccia utente del controllo viene disattivata e la finestra del controllo, se presente, viene distrutta. Al contenitore viene notificato che il controllo non è più attivo sul posto. `IOleInPlaceUIWindow`Viene rilasciata l'interfaccia utilizzata dal contenitore per negoziare i menu e lo spazio del bordo.

Vedere [IOleInPlaceObject:: InPlaceDeactivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-inplacedeactivate) nella Windows SDK.

## <a name="ioleinplaceobjectwindowlessimplonwindowmessage"></a><a name="onwindowmessage"></a> IOleInPlaceObjectWindowlessImpl:: OnWindowMessage

Invia un messaggio da un contenitore a un controllo senza finestra che è attivo sul posto.

```
HRESULT OnWindowMessage(
    UINT msg,
    WPARAM WParam,
    LPARAM LParam,
    LRESULT plResultParam);
```

### <a name="remarks"></a>Commenti

Vedere [IOleInPlaceObjectWindowless:: OnWindowMessage](/windows/win32/api/ocidl/nf-ocidl-ioleinplaceobjectwindowless-onwindowmessage) nella Windows SDK.

## <a name="ioleinplaceobjectwindowlessimplreactivateandundo"></a><a name="reactivateandundo"></a> IOleInPlaceObjectWindowlessImpl:: ReactivateAndUndo

Restituisce E_NOTIMPL.

```
HRESULT ReactivateAndUndo();
```

### <a name="remarks"></a>Commenti

Vedere [IOleInPlaceObject:: ReactivateAndUndo](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-reactivateandundo) nella Windows SDK.

## <a name="ioleinplaceobjectwindowlessimplsetobjectrects"></a><a name="setobjectrects"></a> IOleInPlaceObjectWindowlessImpl:: SetObjectRects

Chiamato dal contenitore per informare il controllo che le dimensioni e/o la posizione sono state modificate.

```
HRESULT SetObjectRects(LPCRECT prcPos, LPCRECT prcClip);
```

### <a name="remarks"></a>Commenti

Aggiorna il `m_rcPos` membro dati del controllo e la visualizzazione del controllo. Viene visualizzata solo la parte del controllo che interseca l'area di ritaglio. Se la visualizzazione di un controllo è stata troncata in precedenza ma il ritaglio è stato rimosso, è possibile chiamare questa funzione per ricreare una visualizzazione completa del controllo.

Vedere [IOleInPlaceObject:: SetObjectRects](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-setobjectrects) nella Windows SDK.

## <a name="ioleinplaceobjectwindowlessimpluideactivate"></a><a name="uideactivate"></a> IOleInPlaceObjectWindowlessImpl:: UIDeactivate

Disattiva e rimuove l'interfaccia utente del controllo che supporta l'attivazione sul posto.

```
HRESULT UIDeactivate();
```

### <a name="remarks"></a>Commenti

Imposta il membro dati della classe del controllo `m_bUIActive` su false. L'implementazione ATL di questa funzione restituisce sempre S_OK.

Vedere [IOleInPlaceObject:: UIDeactivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-uideactivate) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
