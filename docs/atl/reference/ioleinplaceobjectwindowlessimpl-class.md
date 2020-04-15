---
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
ms.openlocfilehash: b0438692161f38445eb7cbed54edcc8a0ba8c0d6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326570"
---
# <a name="ioleinplaceobjectwindowlessimpl-class"></a>Classe IOleInPlaceObjectWindowlessImpl

Questa classe `IUnknown` implementa e fornisce metodi che consentono a un controllo senza finestra di ricevere messaggi della finestra e di partecipare alle operazioni di trascinamento della selezione.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IOleInPlaceObjectWindowlessImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IOleInPlaceObjectWindowlessImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelpIOleleInPlaceObjectWindowlessImpl::ContextSensitiveHelp](#contextsensitivehelp)|Abilita la Guida sensibile al contesto. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleInPlaceObjectWindowlessImpl::GetDropTargetIoleInPlaceObjectWindowlessImpl::GetDropTarget](#getdroptarget)|Fornisce l'interfaccia `IDropTarget` per un oggetto attivo sul posto senza finestra che supporta il trascinamento della selezione. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleInPlaceObjectWindowlessImpl::GetWindowIOleLeInPlaceObjectWindowlessImpl::GetWindow](#getwindow)|Ottiene un handle di finestra.|
|[IOleInPlaceObjectWindowlessImpl::InPlaceDeactivateIOleInPlaceObjectWindowlessImpl::InPlaceDeactivate](#inplacedeactivate)|Disattiva un controllo sul posto attivo.|
|[IOleInPlaceObjectWindowlessImpl::OnWindowMessageIOleInPlaceObjectWindowlessImpl::OnWindowMessage](#onwindowmessage)|Invia un messaggio dal contenitore a un controllo senza finestra attivo sul posto.|
|[IOleInPlaceObjectWindowlessImpl::ReactivateAndUndoIOleleInPlaceObjectWindowlessImpl::ReactivateAndUndo](#reactivateandundo)|Riattiva un controllo disattivato in precedenza. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleInPlaceObjectWindowlessImpl::SetObjectRectsIOleInPlaceObjectWindowlessImpl::SetObjectRects](#setobjectrects)|Indica quale parte del controllo sul posto è visibile.|
|[IOleInPlaceObjectWindowlessImpl::UIDeactivateIOleInPlaceObjectWindowlessImpl::UIDeactivate](#uideactivate)|Disattiva e rimuove l'interfaccia utente che supporta l'attivazione sul posto.|

## <a name="remarks"></a>Osservazioni

Il [IOleInPlaceObject](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceobject) interfaccia gestisce la riattivazione e la disattivazione dei controlli sul posto e determina la quantità di controllo deve essere visibile. Il [IOleInPlaceObjectWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplaceobjectwindowless) interfaccia consente a un controllo senza finestra per ricevere messaggi di finestra e di partecipare alle operazioni di trascinamento della selezione. Classe `IOleInPlaceObjectWindowlessImpl` fornisce un'implementazione predefinita di `IOleInPlaceObject` e `IOleInPlaceObjectWindowless` e implementa `IUnknown` inviando informazioni al dispositivo di dump nelle build di debug.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IOleInPlaceObjectWindowless`

`IOleInPlaceObjectWindowlessImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="ioleinplaceobjectwindowlessimplcontextsensitivehelp"></a><a name="contextsensitivehelp"></a>IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelpIOleleInPlaceObjectWindowlessImpl::ContextSensitiveHelp

Restituisce E_NOTIMPL.

```
HRESULT ContextSensitiveHelp(BOOL fEnterMode);
```

### <a name="remarks"></a>Osservazioni

Vedere [IOleWindow::ContextSensitiveHelp](/windows/win32/api/oleidl/nf-oleidl-iolewindow-contextsensitivehelp) in Windows SDK.

## <a name="ioleinplaceobjectwindowlessimplgetdroptarget"></a><a name="getdroptarget"></a>IOleInPlaceObjectWindowlessImpl::GetDropTargetIoleInPlaceObjectWindowlessImpl::GetDropTarget

Restituisce E_NOTIMPL.

```
HRESULT GetDropTarget(IDropTarget** ppDropTarget);
```

### <a name="remarks"></a>Osservazioni

Vedere [IOleInPlaceObjectWindowless::GetDropTarget](/windows/win32/api/ocidl/nf-ocidl-ioleinplaceobjectwindowless-getdroptarget) in Windows SDK.

## <a name="ioleinplaceobjectwindowlessimplgetwindow"></a><a name="getwindow"></a>IOleInPlaceObjectWindowlessImpl::GetWindowIOleLeInPlaceObjectWindowlessImpl::GetWindow

Il contenitore chiama questa funzione per ottenere l'handle di finestra del controllo.

```
HRESULT GetWindow(HWND* phwnd);
```

### <a name="remarks"></a>Osservazioni

Alcuni contenitori non funzioneranno con un controllo che è stato senza finestra, anche se è attualmente sottoposto a finestra. Nell'implementazione di ATL, se il `m_bWasOnceWindowless` membro dati della classe del controllo è TRUE, la funzione restituisce E_FAIL. In caso contrario, se *phwnd* `GetWindow` non è NULL, \* imposta `m_hWnd` *phwnd* sul membro dati della classe di controllo e restituisce S_OK.

Vedere [IOleWindow::GetWindow](/windows/win32/api/oleidl/nf-oleidl-iolewindow-getwindow) in Windows SDK.

## <a name="ioleinplaceobjectwindowlessimplinplacedeactivate"></a><a name="inplacedeactivate"></a>IOleInPlaceObjectWindowlessImpl::InPlaceDeactivateIOleInPlaceObjectWindowlessImpl::InPlaceDeactivate

Chiamato dal contenitore per disattivare un controllo attivo sul posto.

```
HRESULT InPlaceDeactivate(HWND* phwnd);
```

### <a name="remarks"></a>Osservazioni

Questo metodo esegue una disattivazione completa o parziale a seconda dello stato del controllo. Se necessario, l'interfaccia utente del controllo viene disattivata e la finestra del controllo, se presente, viene distrutta. Il contenitore riceve una notifica che il controllo non è più attivo sul posto. L'interfaccia `IOleInPlaceUIWindow` utilizzata dal contenitore per negoziare i menu e lo spazio sui bordi viene rilasciata.

Vedere [IOleInPlaceObject::InPlaceDeactivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-inplacedeactivate) in Windows SDK.

## <a name="ioleinplaceobjectwindowlessimplonwindowmessage"></a><a name="onwindowmessage"></a>IOleInPlaceObjectWindowlessImpl::OnWindowMessageIOleInPlaceObjectWindowlessImpl::OnWindowMessage

Invia un messaggio da un contenitore a un controllo senza finestra attivo sul posto.

```
HRESULT OnWindowMessage(
    UINT msg,
    WPARAM WParam,
    LPARAM LParam,
    LRESULT plResultParam);
```

### <a name="remarks"></a>Osservazioni

Vedere [IOleInPlaceObjectWindowless::OnWindowMessage](/windows/win32/api/ocidl/nf-ocidl-ioleinplaceobjectwindowless-onwindowmessage) in Windows SDK.

## <a name="ioleinplaceobjectwindowlessimplreactivateandundo"></a><a name="reactivateandundo"></a>IOleInPlaceObjectWindowlessImpl::ReactivateAndUndoIOleleInPlaceObjectWindowlessImpl::ReactivateAndUndo

Restituisce E_NOTIMPL.

```
HRESULT ReactivateAndUndo();
```

### <a name="remarks"></a>Osservazioni

Vedere [IOleInPlaceObject::ReactivateAndUndo](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-reactivateandundo) in Windows SDK.

## <a name="ioleinplaceobjectwindowlessimplsetobjectrects"></a><a name="setobjectrects"></a>IOleInPlaceObjectWindowlessImpl::SetObjectRectsIOleInPlaceObjectWindowlessImpl::SetObjectRects

Chiamato dal contenitore per informare il controllo che le dimensioni e/o la posizione sono state modificate.

```
HRESULT SetObjectRects(LPCRECT prcPos, LPCRECT prcClip);
```

### <a name="remarks"></a>Osservazioni

Aggiorna il membro `m_rcPos` dati del controllo e la visualizzazione del controllo. Viene visualizzata solo la parte del controllo che interseca l'area di ritaglio. Se la visualizzazione di un controllo è stata ritagliata in precedenza ma il ritaglio è stato rimosso, questa funzione può essere chiamata per ridisegnare una visualizzazione completa del controllo.

Vedere [IOleInPlaceObject::SetObjectRects](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-setobjectrects) in Windows SDK.

## <a name="ioleinplaceobjectwindowlessimpluideactivate"></a><a name="uideactivate"></a>IOleInPlaceObjectWindowlessImpl::UIDeactivateIOleInPlaceObjectWindowlessImpl::UIDeactivate

Disattiva e rimuove l'interfaccia utente del controllo che supporta l'attivazione sul posto.

```
HRESULT UIDeactivate();
```

### <a name="remarks"></a>Osservazioni

Imposta il membro `m_bUIActive` dati della classe di controllo su FALSE. L'implementazione ATL di questa funzione restituisce sempre S_OK.

Vedere [IOleInPlaceObject::UIDeactivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-uideactivate) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[CComControl (classe)](../../atl/reference/ccomcontrol-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
