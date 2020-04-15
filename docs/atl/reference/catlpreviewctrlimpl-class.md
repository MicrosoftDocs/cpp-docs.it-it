---
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
ms.openlocfilehash: 1ccd01bc4d48dc088538f4799b595cce3fb910ba
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321360"
---
# <a name="catlpreviewctrlimpl-class"></a>Classe CAtlPreviewCtrlImpl

Questa classe è un'implementazione ATL di una finestra che viene inserita in una finestra host fornita da Shell per Rich Preview.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAtlPreviewCtrlImpl : public CWindowImpl<CAtlPreviewCtrlImpl>, public IPreviewCtrl;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlPreviewCtrlImpl::](#dtor)|Distrugge un oggetto controllo di anteprima.|
|[CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl](#catlpreviewctrlimpl)|Costruisce un oggetto controllo di anteprima.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlPreviewCtrlImpl::Creare](#create)|Chiamato da un gestore Rich Preview per creare la finestra di Windows.|
|[CAtlPreviewCtrlImpl::Destroy](#destroy)|Chiamato da un gestore Rich Preview quando è necessario eliminare questo controllo.|
|[CAtlPreviewCtrlImpl::Focus](#focus)|Imposta lo stato attivo per l'input su questo controllo.|
|[CAtlPreviewCtrlImpl::OnPaint](#onpaint)|Gestisce il messaggio WM_PAINT.|
|[CAtlPreviewCtrlImpl::Ridisegno](#redraw)|Indica a questo controllo di ridisegnare.|
|[CAtlPreviewCtrlImpl::SetHost](#sethost)|Imposta un nuovo elemento padre per questo controllo.|
|[CAtlPreviewCtrlImpl::SetPreviewVisuals](#setpreviewvisuals)|Chiamato da un gestore Rich Preview quando è necessario impostare oggetti visivi di contenuto di anteprima avanzato.|
|[CAtlPreviewCtrlImpl::SetRect](#setrect)|Imposta un nuovo rettangolo di delimitazione per questo controllo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAtlPreviewCtrlImpl::DoPaint](#dopaint)|Chiamato dal framework per eseguire il rendering dell'anteprima.|

### <a name="protected-constants"></a>Costanti protette

|Nome|Descrizione|
|----------|-----------------|
|[CAtlPreviewCtrlImpl::m_plf](#m_plf)|Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAtlPreviewCtrlImpl::m_clrBack](#m_clrback)|Colore di sfondo della finestra di anteprima.|
|[CAtlPreviewCtrlImpl::m_clrText](#m_clrtext)|Colore del testo della finestra di anteprima.|

## <a name="remarks"></a>Osservazioni

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`TBase`

`ATL::CMessageMap`

`ATL::CWindowImplRoot<TBase>`

`ATL::CWindowImplBaseT<TBase,TWinTraits>`

[ATL::CWindowImpl\<CAtlPreviewCtrlImpl>](../../atl/reference/cwindowimpl-class.md)

`IPreviewCtrl`

`ATL::CAtlPreviewCtrlImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpreviewctrlimpl.h

## <a name="catlpreviewctrlimplcatlpreviewctrlimpl"></a><a name="catlpreviewctrlimpl"></a>CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl

Costruisce un oggetto controllo di anteprima.

```
CAtlPreviewCtrlImpl(void) : m_clrText(0),
   m_clrBack(RGB(255, 255, 255)), m_plf(NULL);
```

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimplcatlpreviewctrlimpl"></a><a name="dtor"></a>CAtlPreviewCtrlImpl::

Distrugge un oggetto controllo di anteprima.

```
virtual ~CAtlPreviewCtrlImpl(void);
```

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimplcreate"></a><a name="create"></a>CAtlPreviewCtrlImpl::Creare

Chiamato da un gestore Rich Preview per creare la finestra di Windows.

```
virtual BOOL Create(HWND hWndParent, const RECT* prc);
```

### <a name="parameters"></a>Parametri

*hWndPadre*<br/>
Handle per la finestra host fornita da Shell per Rich Preview.

*Rpc*<br/>
Specifica le dimensioni iniziali e la posizione della finestra.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimpldestroy"></a><a name="destroy"></a>CAtlPreviewCtrlImpl::Destroy

Chiamato da un gestore Rich Preview quando è necessario eliminare questo controllo.

```
virtual void Destroy();
```

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimpldopaint"></a><a name="dopaint"></a>CAtlPreviewCtrlImpl::DoPaint

Chiamato dal framework per eseguire il rendering dell'anteprima.

```
virtual void DoPaint(HDC hdc);
```

### <a name="parameters"></a>Parametri

*Hdc*<br/>
Handle per un contesto di dispositivo per il disegno.

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimplfocus"></a><a name="focus"></a>CAtlPreviewCtrlImpl::Focus

Imposta lo stato attivo per l'input su questo controllo.

```
virtual void Focus();
```

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimplm_clrback"></a><a name="m_clrback"></a>CAtlPreviewCtrlImpl::m_clrBack

Colore di sfondo della finestra di anteprima.

```
COLORREF m_clrBack;
```

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimplm_clrtext"></a><a name="m_clrtext"></a>CAtlPreviewCtrlImpl::m_clrText

Colore del testo della finestra di anteprima.

```
COLORREF m_clrText;
```

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimplm_plf"></a><a name="m_plf"></a>CAtlPreviewCtrlImpl::m_plf

Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.

```
const LOGFONTW* m_plf;
```

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimplonpaint"></a><a name="onpaint"></a>CAtlPreviewCtrlImpl::OnPaint

Gestisce il messaggio WM_PAINT.

```
LRESULT OnPaint(
    UINT nMsg,
    WPARAM wParam,
    LPARAM lParam,
    BOOL& bHandled);
```

### <a name="parameters"></a>Parametri

*nM*<br/>
Impostare su WM_PAINT.

*wParam*<br/>
Questo parametro non viene usato.

*lParam*<br/>
Questo parametro non viene usato.

*bGestito*<br/>
Quando questa funzione restituisce, contiene TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 0.

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimplredraw"></a><a name="redraw"></a>CAtlPreviewCtrlImpl::Ridisegno

Indica a questo controllo di ridisegnare.

```
virtual void Redraw();
```

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimplsethost"></a><a name="sethost"></a>CAtlPreviewCtrlImpl::SetHost

Imposta un nuovo elemento padre per questo controllo.

```
virtual void SetHost(HWND hWndParent);
```

### <a name="parameters"></a>Parametri

*hWndPadre*<br/>
Handle per la nuova finestra padre.

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimplsetpreviewvisuals"></a><a name="setpreviewvisuals"></a>CAtlPreviewCtrlImpl::SetPreviewVisuals

Chiamato da un gestore Rich Preview quando è necessario impostare oggetti visivi di contenuto di anteprima avanzato.

```
virtual void SetPreviewVisuals(
    COLORREF clrBack,
    COLORREF clrText,
    const LOGFONTW* plf);
```

### <a name="parameters"></a>Parametri

*ClrIndietro*<br/>
Colore di sfondo della finestra di anteprima.

*clrText*<br/>
Colore del testo della finestra di anteprima.

*Plf*<br/>
Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.

### <a name="remarks"></a>Osservazioni

## <a name="catlpreviewctrlimplsetrect"></a><a name="setrect"></a>CAtlPreviewCtrlImpl::SetRect

Imposta un nuovo rettangolo di delimitazione per questo controllo.

```
virtual void SetRect(const RECT* prc, BOOL bRedraw);
```

### <a name="parameters"></a>Parametri

*Rpc*<br/>
Specifica le nuove dimensioni e la nuova posizione del controllo di anteprima.

*bRedraw*<br/>
Specifica se il controllo deve essere ridisegnato.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)
