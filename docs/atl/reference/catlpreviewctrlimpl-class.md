---
description: 'Altre informazioni su: classe CAtlPreviewCtrlImpl'
title: Classe CAtlPreviewCtrlImpl
ms.date: 11/04/2016
f1_keywords:
- CAtlPreviewCtrlImpl
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::Create
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::Destroy
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::Focus
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::OnPaint
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::Redraw
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::SetHost
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::SetPreviewVisuals
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::SetRect
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::DoPaint
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::m_plf
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::m_clrBack
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::m_clrText
helpviewer_keywords:
- CAtlPreviewCtrlImpl class
ms.assetid: 39b3299e-07e4-4abc-9b6e-b54bfa3b0802
ms.openlocfilehash: 52263a4c65af1b791ca5da64eff235e93006ab52
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147212"
---
# <a name="catlpreviewctrlimpl-class"></a>Classe CAtlPreviewCtrlImpl

Questa classe è un'implementazione ATL di una finestra posizionata in una finestra host fornita dalla Shell per l'anteprima avanzata.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
class CAtlPreviewCtrlImpl : public CWindowImpl<CAtlPreviewCtrlImpl>, public IPreviewCtrl;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlPreviewCtrlImpl:: ~ CAtlPreviewCtrlImpl](#dtor)|Distrugge un oggetto controllo di anteprima.|
|[CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl](#catlpreviewctrlimpl)|Costruisce un oggetto controllo di anteprima.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlPreviewCtrlImpl:: create](#create)|Chiamato da un gestore di anteprime avanzato per creare la finestra di Windows.|
|[CAtlPreviewCtrlImpl::D estroy](#destroy)|Chiamato da un gestore di anteprime avanzato quando è necessario eliminare il controllo.|
|[CAtlPreviewCtrlImpl:: Focus](#focus)|Imposta lo stato attivo per l'input su questo controllo.|
|[CAtlPreviewCtrlImpl:: OnPaint](#onpaint)|Gestisce il messaggio di WM_PAINT.|
|[CAtlPreviewCtrlImpl:: redisegnato](#redraw)|Indica a questo controllo di ricreare.|
|[CAtlPreviewCtrlImpl:: sehost](#sethost)|Imposta un nuovo elemento padre per questo controllo.|
|[CAtlPreviewCtrlImpl::SetPreviewVisuals](#setpreviewvisuals)|Chiamato da un gestore di anteprime avanzato quando è necessario impostare oggetti visivi di contenuto di anteprima avanzata.|
|[CAtlPreviewCtrlImpl:: serect](#setrect)|Imposta un nuovo rettangolo di delimitazione per questo controllo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CAtlPreviewCtrlImpl::D oPaint](#dopaint)|Chiamato dal Framework per eseguire il rendering dell'anteprima.|

### <a name="protected-constants"></a>Costanti protette

|Nome|Description|
|----------|-----------------|
|[CAtlPreviewCtrlImpl:: m_plf](#m_plf)|Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CAtlPreviewCtrlImpl:: m_clrBack](#m_clrback)|Colore di sfondo della finestra di anteprima.|
|[CAtlPreviewCtrlImpl:: m_clrText](#m_clrtext)|Colore del testo della finestra di anteprima.|

## <a name="remarks"></a>Commenti

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`TBase`

`ATL::CMessageMap`

`ATL::CWindowImplRoot<TBase>`

`ATL::CWindowImplBaseT<TBase,TWinTraits>`

[ATL:: CWindowImpl\<CAtlPreviewCtrlImpl>](../../atl/reference/cwindowimpl-class.md)

`IPreviewCtrl`

`ATL::CAtlPreviewCtrlImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpreviewctrlimpl. h

## <a name="catlpreviewctrlimplcatlpreviewctrlimpl"></a><a name="catlpreviewctrlimpl"></a> CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl

Costruisce un oggetto controllo di anteprima.

```cpp
CAtlPreviewCtrlImpl(void) : m_clrText(0),
   m_clrBack(RGB(255, 255, 255)), m_plf(NULL);
```

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimplcatlpreviewctrlimpl"></a><a name="dtor"></a> CAtlPreviewCtrlImpl:: ~ CAtlPreviewCtrlImpl

Distrugge un oggetto controllo di anteprima.

```cpp
virtual ~CAtlPreviewCtrlImpl(void);
```

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimplcreate"></a><a name="create"></a> CAtlPreviewCtrlImpl:: create

Chiamato da un gestore di anteprime avanzato per creare la finestra di Windows.

```cpp
virtual BOOL Create(HWND hWndParent, const RECT* prc);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
Handle per la finestra host fornita dalla Shell per l'anteprima avanzata.

*PRC*<br/>
Specifica le dimensioni e la posizione iniziali della finestra.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimpldestroy"></a><a name="destroy"></a> CAtlPreviewCtrlImpl::D estroy

Chiamato da un gestore di anteprime avanzato quando è necessario eliminare il controllo.

```cpp
virtual void Destroy();
```

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimpldopaint"></a><a name="dopaint"></a> CAtlPreviewCtrlImpl::D oPaint

Chiamato dal Framework per eseguire il rendering dell'anteprima.

```cpp
virtual void DoPaint(HDC hdc);
```

### <a name="parameters"></a>Parametri

*HDC*<br/>
Handle per un contesto di dispositivo per il disegno.

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimplfocus"></a><a name="focus"></a> CAtlPreviewCtrlImpl:: Focus

Imposta lo stato attivo per l'input su questo controllo.

```cpp
virtual void Focus();
```

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimplm_clrback"></a><a name="m_clrback"></a> CAtlPreviewCtrlImpl:: m_clrBack

Colore di sfondo della finestra di anteprima.

```cpp
COLORREF m_clrBack;
```

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimplm_clrtext"></a><a name="m_clrtext"></a> CAtlPreviewCtrlImpl:: m_clrText

Colore del testo della finestra di anteprima.

```cpp
COLORREF m_clrText;
```

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimplm_plf"></a><a name="m_plf"></a> CAtlPreviewCtrlImpl:: m_plf

Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.

```cpp
const LOGFONTW* m_plf;
```

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimplonpaint"></a><a name="onpaint"></a> CAtlPreviewCtrlImpl:: OnPaint

Gestisce il messaggio di WM_PAINT.

```cpp
LRESULT OnPaint(
    UINT nMsg,
    WPARAM wParam,
    LPARAM lParam,
    BOOL& bHandled);
```

### <a name="parameters"></a>Parametri

*nMsg*<br/>
Impostare su WM_PAINT.

*wParam*<br/>
Questo parametro non viene usato.

*lParam*<br/>
Questo parametro non viene usato.

*bHandled*<br/>
Quando questa funzione restituisce, contiene TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 0.

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimplredraw"></a><a name="redraw"></a> CAtlPreviewCtrlImpl:: redisegnato

Indica a questo controllo di ricreare.

```cpp
virtual void Redraw();
```

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimplsethost"></a><a name="sethost"></a> CAtlPreviewCtrlImpl:: sehost

Imposta un nuovo elemento padre per questo controllo.

```cpp
virtual void SetHost(HWND hWndParent);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
Handle per la nuova finestra padre.

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimplsetpreviewvisuals"></a><a name="setpreviewvisuals"></a> CAtlPreviewCtrlImpl::SetPreviewVisuals

Chiamato da un gestore di anteprime avanzato quando è necessario impostare oggetti visivi di contenuto di anteprima avanzata.

```cpp
virtual void SetPreviewVisuals(
    COLORREF clrBack,
    COLORREF clrText,
    const LOGFONTW* plf);
```

### <a name="parameters"></a>Parametri

*clrBack*<br/>
Colore di sfondo della finestra di anteprima.

*clrText*<br/>
Colore del testo della finestra di anteprima.

*PLF*<br/>
Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.

### <a name="remarks"></a>Commenti

## <a name="catlpreviewctrlimplsetrect"></a><a name="setrect"></a> CAtlPreviewCtrlImpl:: serect

Imposta un nuovo rettangolo di delimitazione per questo controllo.

```cpp
virtual void SetRect(const RECT* prc, BOOL bRedraw);
```

### <a name="parameters"></a>Parametri

*PRC*<br/>
Specifica le nuove dimensioni e la posizione del controllo anteprima.

*bRedraw*<br/>
Specifica se il controllo deve essere ridisegnato.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)
