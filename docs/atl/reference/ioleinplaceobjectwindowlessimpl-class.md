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
ms.openlocfilehash: a83fbed524c55c6bc98aa25caa17b80c1e5f89f4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50592127"
---
# <a name="ioleinplaceobjectwindowlessimpl-class"></a>Classe IOleInPlaceObjectWindowlessImpl

Questa classe implementa `IUnknown` e fornisce metodi che consentono un controllo senza finestra per ricevere i messaggi della finestra e partecipare alle operazioni di trascinamento e rilascio.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IOleInPlaceObjectWindowlessImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IOleInPlaceObjectWindowlessImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp](#contextsensitivehelp)|Abilita Guida sensibile al contesto. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IOleInPlaceObjectWindowlessImpl::GetDropTarget](#getdroptarget)|Fornisce il `IDropTarget` interfaccia per un posto oggetto attivo e che supporta trascinamento della selezione. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IOleInPlaceObjectWindowlessImpl::GetWindow](#getwindow)|Ottiene un handle di finestra.|
|[IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate](#inplacedeactivate)|Disattiva un controllo attivo sul posto.|
|[IOleInPlaceObjectWindowlessImpl::OnWindowMessage](#onwindowmessage)|Invia un messaggio dal contenitore a un controllo senza finestra attivo sul posto.|
|[IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo](#reactivateandundo)|Riattiva un controllo precedentemente disattivato. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IOleInPlaceObjectWindowlessImpl::SetObjectRects](#setobjectrects)|Indica quale parte del controllo sul posto è visibile.|
|[IOleInPlaceObjectWindowlessImpl::UIDeactivate](#uideactivate)|Disattiva e rimuove l'interfaccia utente che supporta l'attivazione sul posto.|

## <a name="remarks"></a>Note

Il [IOleInPlaceObject](/windows/desktop/api/oleidl/nn-oleidl-ioleinplaceobject) interfaccia gestisce la riattivazione e la disattivazione del posto controlli e determina in che misura il controllo deve essere visibile. Il [IOleInPlaceObjectWindowless](/windows/desktop/api/ocidl/nn-ocidl-ioleinplaceobjectwindowless) interfaccia consente a un controllo senza finestra per ricevere i messaggi della finestra e partecipare alle operazioni di trascinamento e rilascio. Classe `IOleInPlaceObjectWindowlessImpl` fornisce un'implementazione predefinita di `IOleInPlaceObject` e `IOleInPlaceObjectWindowless` e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

**Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IOleInPlaceObjectWindowless`

`IOleInPlaceObjectWindowlessImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="contextsensitivehelp"></a>  IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp

Restituisce E_NOTIMPL.

```
HRESULT ContextSensitiveHelp(BOOL fEnterMode);
```

### <a name="remarks"></a>Note

Visualizzare [IOleWindow::ContextSensitiveHelp](/windows/desktop/api/oleidl/nf-oleidl-iolewindow-contextsensitivehelp) in Windows SDK.

##  <a name="getdroptarget"></a>  IOleInPlaceObjectWindowlessImpl::GetDropTarget

Restituisce E_NOTIMPL.

```
HRESULT GetDropTarget(IDropTarget** ppDropTarget);
```

### <a name="remarks"></a>Note

Visualizzare [IOleInPlaceObjectWindowless::GetDropTarget](/windows/desktop/api/ocidl/nf-ocidl-ioleinplaceobjectwindowless-getdroptarget) in Windows SDK.

##  <a name="getwindow"></a>  IOleInPlaceObjectWindowlessImpl::GetWindow

Il contenitore chiama questa funzione per ottenere l'handle della finestra del controllo.

```
HRESULT GetWindow(HWND* phwnd);
```

### <a name="remarks"></a>Note

Alcuni contenitori non funzionerà con un controllo che è stata privi di finestra, anche se è attualmente a finestre. Nell'implementazione di ATL, se il controllo del membro dati classe `m_bWasOnceWindowless` è TRUE, la funzione restituisce E_FAIL. In caso contrario, se *phwnd* non è NULL, `GetWindow` imposta \* *phwnd* al membro dati della classe controllo `m_hWnd` e restituisce S_OK.

Visualizzare [IOleWindow::GetWindow](/windows/desktop/api/oleidl/nf-oleidl-iolewindow-getwindow) in Windows SDK.

##  <a name="inplacedeactivate"></a>  IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate

Chiamato dal contenitore di disattivare un controllo attivo sul posto.

```
HRESULT InPlaceDeactivate(HWND* phwnd);
```

### <a name="remarks"></a>Note

Questo metodo esegue una disattivazione completa o parziale a seconda dello stato del controllo. Se necessario, viene disattivato l'interfaccia utente del controllo e la finestra del controllo, se presente, viene eliminato definitivamente. Il contenitore viene notificato che il controllo è non è più attivo sul posto. Il `IOleInPlaceUIWindow` interfaccia utilizzata da contenitore per negoziare i menu e il bordo dello spazio viene rilasciato.

Visualizzare [IOleInPlaceObject::InPlaceDeactivate](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceobject-inplacedeactivate) in Windows SDK.

##  <a name="onwindowmessage"></a>  IOleInPlaceObjectWindowlessImpl::OnWindowMessage

Invia un messaggio da un contenitore a un controllo senza finestra attivo sul posto.

```
HRESULT OnWindowMessage(
    UINT msg,
    WPARAM WParam,
    LPARAM LParam,
    LRESULT plResultParam);
```

### <a name="remarks"></a>Note

Visualizzare [IOleInPlaceObjectWindowless::OnWindowMessage](/windows/desktop/api/ocidl/nf-ocidl-ioleinplaceobjectwindowless-onwindowmessage) in Windows SDK.

##  <a name="reactivateandundo"></a>  IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo

Restituisce E_NOTIMPL.

```
HRESULT ReactivateAndUndo();
```

### <a name="remarks"></a>Note

Visualizzare [IOleInPlaceObject::ReactivateAndUndo](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceobject-reactivateandundo) in Windows SDK.

##  <a name="setobjectrects"></a>  IOleInPlaceObjectWindowlessImpl::SetObjectRects

Chiamato da contenitore per informare il controllo che ha modificato le dimensioni e/o posizione.

```
HRESULT SetObjectRects(LPCRECT prcPos, LPCRECT prcClip);
```

### <a name="remarks"></a>Note

Aggiorna il controllo `m_rcPos` (membro dati) e la visualizzazione del controllo. Viene visualizzata solo la parte del controllo che si interseca l'area di ritaglio. Se la visualizzazione del controllo in precedenza è stata troncata, ma è stato rimosso il ritaglio, questa funzione può essere chiamata per ridisegnare una visualizzazione completa del controllo.

Visualizzare [IOleInPlaceObject::SetObjectRects](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceobject-setobjectrects) in Windows SDK.

##  <a name="uideactivate"></a>  IOleInPlaceObjectWindowlessImpl::UIDeactivate

Disattiva e rimuove l'interfaccia utente del controllo che supporta l'attivazione sul posto.

```
HRESULT UIDeactivate();
```

### <a name="remarks"></a>Note

Imposta il controllo del membro dati classe `m_bUIActive` su FALSE. Sempre l'implementazione di ATL per questa funzione restituisce S_OK.

Visualizzare [IOleInPlaceObject::UIDeactivate](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceobject-uideactivate) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
