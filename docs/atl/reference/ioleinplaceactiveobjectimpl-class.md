---
description: 'Altre informazioni su: classe IOleInPlaceActiveObjectImpl'
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
ms.openlocfilehash: 02f74e462dca2aac2749b8602281f40c8eacd0eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158192"
---
# <a name="ioleinplaceactiveobjectimpl-class"></a>Classe IOleInPlaceActiveObjectImpl

Questa classe fornisce metodi per facilitare la comunicazione tra un controllo sul posto e il relativo contenitore.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IOleInPlaceActiveObjectImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IOleInPlaceActiveObjectImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IOleInPlaceActiveObjectImpl:: ContextSensitiveHelp](#contextsensitivehelp)|Abilita la Guida sensibile al contesto. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleInPlaceActiveObjectImpl:: EnableModeless](#enablemodeless)|Abilita le finestre di dialogo non modali. L'implementazione ATL restituisce S_OK.|
|[IOleInPlaceActiveObjectImpl:: GetWindow](#getwindow)|Ottiene un handle di finestra.|
|[IOleInPlaceActiveObjectImpl:: OnDocWindowActivate](#ondocwindowactivate)|Notifica al controllo quando la finestra del documento del contenitore è attivata o disattivata. L'implementazione ATL restituisce S_OK.|
|[IOleInPlaceActiveObjectImpl:: OnFrameWindowActivate](#onframewindowactivate)|Notifica al controllo quando la finestra cornice di primo livello del contenitore è attivata o disattivata. L'implementazione ATL restituisce|
|[IOleInPlaceActiveObjectImpl:: ResizeBorder](#resizeborder)|Informa il controllo necessario per ridimensionare i bordi. L'implementazione ATL restituisce S_OK.|
|[IOleInPlaceActiveObjectImpl:: TranslateAccelerator](#translateaccelerator)|Elabora i messaggi del tasto di scelta rapida del menu dal contenitore. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Commenti

L'interfaccia [IOleInPlaceActiveObject](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceactiveobject) facilita la comunicazione tra un controllo sul posto e il relativo contenitore. ad esempio, comunicando lo stato attivo del controllo e del contenitore e indicando al controllo che deve essere ridimensionato. `IOleInPlaceActiveObjectImpl`La classe fornisce un'implementazione predefinita di `IOleInPlaceActiveObject` e supporta `IUnknown` inviando informazioni al dispositivo di dump nelle compilazioni di debug.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IOleInPlaceActiveObject`

`IOleInPlaceActiveObjectImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="ioleinplaceactiveobjectimplcontextsensitivehelp"></a><a name="contextsensitivehelp"></a> IOleInPlaceActiveObjectImpl:: ContextSensitiveHelp

Abilita la Guida sensibile al contesto.

```
HRESULT ContextSensitiveHelp(BOOL fEnterMode);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Commenti

Vedere [IOleWindow:: ContextSensitiveHelp](/windows/win32/api/oleidl/nf-oleidl-iolewindow-contextsensitivehelp) nella Windows SDK.

## <a name="ioleinplaceactiveobjectimplenablemodeless"></a><a name="enablemodeless"></a> IOleInPlaceActiveObjectImpl:: EnableModeless

Abilita le finestre di dialogo non modali.

```
HRESULT EnableModeless(BOOL fEnable);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IOleInPlaceActiveObject:: EnableModeless](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-enablemodeless) nella Windows SDK.

## <a name="ioleinplaceactiveobjectimplgetwindow"></a><a name="getwindow"></a> IOleInPlaceActiveObjectImpl:: GetWindow

Il contenitore chiama questa funzione per ottenere l'handle della finestra del controllo.

```
HRESULT GetWindow(HWND* phwnd);
```

### <a name="remarks"></a>Commenti

Alcuni contenitori non funzioneranno con un controllo privo di finestra, anche se è attualmente finestra. Nell'implementazione di ATL, se il `CComControl::m_bWasOnceWindowless` membro dati è true, la funzione restituisce E_FAIL. In caso contrario, se \* *phwnd* non è null, `GetWindow` assegna *phwnd* al membro dati della classe del controllo `m_hWnd` e restituisce S_OK.

Vedere [IOleWindow:: GetWindow](/windows/win32/api/oleidl/nf-oleidl-iolewindow-getwindow) nell'Windows SDK.

## <a name="ioleinplaceactiveobjectimplondocwindowactivate"></a><a name="ondocwindowactivate"></a> IOleInPlaceActiveObjectImpl:: OnDocWindowActivate

Notifica al controllo quando la finestra del documento del contenitore è attivata o disattivata.

```
HRESULT OnDocWindowActivate(BOOL fActivate);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IOleInPlaceActiveObject:: OnDocWindowActivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-ondocwindowactivate) nella Windows SDK.

## <a name="ioleinplaceactiveobjectimplonframewindowactivate"></a><a name="onframewindowactivate"></a> IOleInPlaceActiveObjectImpl:: OnFrameWindowActivate

Notifica al controllo quando la finestra cornice di primo livello del contenitore è attivata o disattivata.

```
HRESULT OnFrameWindowActivate(BOOL fActivate);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IOleInPlaceActiveObject:: OnFrameWindowActivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-onframewindowactivate) nella Windows SDK.

## <a name="ioleinplaceactiveobjectimplresizeborder"></a><a name="resizeborder"></a> IOleInPlaceActiveObjectImpl:: ResizeBorder

Informa il controllo necessario per ridimensionare i bordi.

```
HRESULT ResizeBorder(
    LPRECT prcBorder,
    IOleInPlaceUIWindow* pUIWindow,
    BOOL fFrameWindow);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IOleInPlaceActiveObject:: ResizeBorder](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-resizeborder) nella Windows SDK.

## <a name="ioleinplaceactiveobjectimpltranslateaccelerator"></a><a name="translateaccelerator"></a> IOleInPlaceActiveObjectImpl:: TranslateAccelerator

Elabora i messaggi del tasto di scelta rapida del menu dal contenitore.

```
HRESULT TranslateAccelerator(LPMSG lpmsg);
```

### <a name="return-value"></a>Valore restituito

Questo metodo supporta i valori restituiti riportati di seguito:

S_OK se il messaggio è stato convertito correttamente.

S_FALSE se il messaggio non è stato convertito.

### <a name="remarks"></a>Commenti

Vedere [IOleInPlaceActiveObject:: TranslateAccelerator](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-translateaccelerator) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Interfacce di controlli ActiveX](/windows/win32/com/activex-controls-interfaces)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
