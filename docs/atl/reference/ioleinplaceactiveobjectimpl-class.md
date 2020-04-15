---
title: Classe IOleInPlaceActiveObjectImpl
ms.date: 11/04/2016
f1_keywords:
- IOleInPlaceActiveObjectImpl
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::ContextSensitiveHelp
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::EnableModeless
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::GetWindow
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::OnDocWindowActivate
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::OnFrameWindowActivate
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::ResizeBorder
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::TranslateAccelerator
helpviewer_keywords:
- IOleInPlaceActiveObjectImpl class
- ActiveX controls [C++], communication between container and control
- IOleInPlaceActiveObject, ATL implementation
ms.assetid: 44e6cc6d-a2dc-4187-98e3-73cf0320dea9
ms.openlocfilehash: b39ba2845a5483444dac53d1616654e902969c77
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326591"
---
# <a name="ioleinplaceactiveobjectimpl-class"></a>Classe IOleInPlaceActiveObjectImpl

Questa classe fornisce metodi per facilitare la comunicazione tra un controllo sul posto e il relativo contenitore.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IOleInPlaceActiveObjectImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IOleInPlaceActiveObjectImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IOleInPlaceActiveObjectImpl::ContextSensitiveHelpIOleLeInPlaceActiveObjectImpl::ContextSensitiveHelp](#contextsensitivehelp)|Abilita la Guida sensibile al contesto. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleInPlaceActiveObjectImpl::EnableModelessIOleInPlaceActiveObjectImpl::EnableModeless](#enablemodeless)|Abilita le finestre di dialogo non modali. L'implementazione ATL restituisce S_OK.|
|[IOleInPlaceActiveObjectImpl::GetWindowIOleInPlaceActiveObjectImpl::GetWindow](#getwindow)|Ottiene un handle di finestra.|
|[IOleInPlaceActiveObjectImpl::OnDocWindowActivateIOleInPlaceActiveObjectImpl::OnDocWindowActivate](#ondocwindowactivate)|Notifica al controllo quando la finestra del documento del contenitore viene attivata o disattivata. L'implementazione ATL restituisce S_OK.|
|[IOleInPlaceActiveObjectImpl::OnFrameWindowActivateIOleInPlaceActiveObjectImpl::OnFrameWindowActivate](#onframewindowactivate)|Notifica al controllo quando la finestra cornice di primo livello del contenitore viene attivata o disattivata. L'implementazione ATL restituisce|
|[IOleInPlaceActiveObjectImpl::ResizeBorderIOleInPlaceActiveObjectImpl::ResizeBorder](#resizeborder)|Informa il controllo necessario per ridimensionare i bordi. L'implementazione ATL restituisce S_OK.|
|[IOleInPlaceActiveObjectImpl::TranslateAcceleratorIOleInPlaceActiveObjectImpl::TranslateAccelerator](#translateaccelerator)|Elabora i messaggi del tasto di scelta rapida del menu dal contenitore. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Osservazioni

Il [IOleInPlaceActiveObject](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceactiveobject) interfaccia facilita la comunicazione tra un controllo sul posto e il relativo contenitore; ad esempio, la comunicazione dello stato attivo del controllo e del contenitore e l'informazione del controllo necessario per il ridimensionamento. Classe `IOleInPlaceActiveObjectImpl` fornisce un'implementazione predefinita di `IOleInPlaceActiveObject` e supporta `IUnknown` inviando informazioni al dispositivo di dump nelle build di debug.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IOleInPlaceActiveObject`

`IOleInPlaceActiveObjectImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="ioleinplaceactiveobjectimplcontextsensitivehelp"></a><a name="contextsensitivehelp"></a>IOleInPlaceActiveObjectImpl::ContextSensitiveHelpIOleLeInPlaceActiveObjectImpl::ContextSensitiveHelp

Abilita la Guida sensibile al contesto.

```
HRESULT ContextSensitiveHelp(BOOL fEnterMode);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IOleWindow::ContextSensitiveHelp](/windows/win32/api/oleidl/nf-oleidl-iolewindow-contextsensitivehelp) in Windows SDK.

## <a name="ioleinplaceactiveobjectimplenablemodeless"></a><a name="enablemodeless"></a>IOleInPlaceActiveObjectImpl::EnableModelessIOleInPlaceActiveObjectImpl::EnableModeless

Abilita le finestre di dialogo non modali.

```
HRESULT EnableModeless(BOOL fEnable);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IOleInPlaceActiveObject::EnableModeless](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-enablemodeless) in Windows SDK.

## <a name="ioleinplaceactiveobjectimplgetwindow"></a><a name="getwindow"></a>IOleInPlaceActiveObjectImpl::GetWindowIOleInPlaceActiveObjectImpl::GetWindow

Il contenitore chiama questa funzione per ottenere l'handle di finestra del controllo.

```
HRESULT GetWindow(HWND* phwnd);
```

### <a name="remarks"></a>Osservazioni

Alcuni contenitori non funzioneranno con un controllo che è stato senza finestra, anche se è attualmente sottoposto a finestra. Nell'implementazione di ATL, se il `CComControl::m_bWasOnceWindowless` membro dati è TRUE, la funzione restituisce E_FAIL. In caso \* contrario, se `GetWindow` *phwnd* non è NULL, assegna `m_hWnd` *phwnd* al membro dati della classe di controllo e restituisce S_OK.

Vedere [IOleWindow::GetWindow](/windows/win32/api/oleidl/nf-oleidl-iolewindow-getwindow) in Windows SDK.

## <a name="ioleinplaceactiveobjectimplondocwindowactivate"></a><a name="ondocwindowactivate"></a>IOleInPlaceActiveObjectImpl::OnDocWindowActivateIOleInPlaceActiveObjectImpl::OnDocWindowActivate

Notifica al controllo quando la finestra del documento del contenitore viene attivata o disattivata.

```
HRESULT OnDocWindowActivate(BOOL fActivate);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IOleInPlaceActiveObject::OnDocWindowActivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-ondocwindowactivate) in Windows SDK.

## <a name="ioleinplaceactiveobjectimplonframewindowactivate"></a><a name="onframewindowactivate"></a>IOleInPlaceActiveObjectImpl::OnFrameWindowActivateIOleInPlaceActiveObjectImpl::OnFrameWindowActivate

Notifica al controllo quando la finestra cornice di primo livello del contenitore viene attivata o disattivata.

```
HRESULT OnFrameWindowActivate(BOOL fActivate);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IOleInPlaceActiveObject::OnFrameWindowActivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-onframewindowactivate) in Windows SDK.

## <a name="ioleinplaceactiveobjectimplresizeborder"></a><a name="resizeborder"></a>IOleInPlaceActiveObjectImpl::ResizeBorderIOleInPlaceActiveObjectImpl::ResizeBorder

Informa il controllo necessario per ridimensionare i bordi.

```
HRESULT ResizeBorder(
    LPRECT prcBorder,
    IOleInPlaceUIWindow* pUIWindow,
    BOOL fFrameWindow);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IOleInPlaceActiveObject::ResizeBorder](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-resizeborder) in Windows SDK.

## <a name="ioleinplaceactiveobjectimpltranslateaccelerator"></a><a name="translateaccelerator"></a>IOleInPlaceActiveObjectImpl::TranslateAcceleratorIOleInPlaceActiveObjectImpl::TranslateAccelerator

Elabora i messaggi del tasto di scelta rapida del menu dal contenitore.

```
HRESULT TranslateAccelerator(LPMSG lpmsg);
```

### <a name="return-value"></a>Valore restituito

Questo metodo supporta i valori restituiti riportati di seguito:

S_OK se il messaggio è stato tradotto correttamente.

S_FALSE se il messaggio non è stato tradotto.

### <a name="remarks"></a>Osservazioni

Vedere [IOleInPlaceActiveObject::TranslateAccelerator](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-translateaccelerator) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[CComControl (classe)](../../atl/reference/ccomcontrol-class.md)<br/>
[Interfacce dei controlli ActiveX](/windows/win32/com/activex-controls-interfaces)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
