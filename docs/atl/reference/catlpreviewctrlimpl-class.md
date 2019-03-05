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
ms.openlocfilehash: 71c50771889381ad2288637c23930103b5925a2c
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57283269"
---
# <a name="catlpreviewctrlimpl-class"></a>Classe CAtlPreviewCtrlImpl

Questa classe è un'implementazione di ATL di una finestra collocata in una finestra host fornita dalla Shell per l'anteprima avanzata.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CAtlPreviewCtrlImpl : public CWindowImpl<CAtlPreviewCtrlImpl>, public IPreviewCtrl;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlPreviewCtrlImpl::~CAtlPreviewCtrlImpl](#dtor)|Distrugge un oggetto di controllo di anteprima.|
|[CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl](#catlpreviewctrlimpl)|Costruisce un oggetto di controllo di anteprima.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlPreviewCtrlImpl::Create](#create)|Chiamato da un gestore di anteprima avanzata per creare la finestra di Windows.|
|[CAtlPreviewCtrlImpl::Destroy](#destroy)|Chiamato da un gestore di anteprime Rich quando è necessario eliminare definitivamente questo controllo.|
|[CAtlPreviewCtrlImpl::Focus](#focus)|Imposta lo stato attivo a questo controllo.|
|[CAtlPreviewCtrlImpl::OnPaint](#onpaint)|Gestisce il messaggio WM_PAINT.|
|[CAtlPreviewCtrlImpl::Redraw](#redraw)|Indica il ridisegno del controllo.|
|[CAtlPreviewCtrlImpl::SetHost](#sethost)|Imposta un nuovo elemento padre di questo controllo.|
|[CAtlPreviewCtrlImpl::SetPreviewVisuals](#setpreviewvisuals)|Chiamato da un gestore di anteprime Rich quando è necessario impostare gli oggetti visivi di un'anteprima dettagliata del contenuto.|
|[CAtlPreviewCtrlImpl::SetRect](#setrect)|Imposta un nuovo rettangolo di delimitazione per questo controllo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAtlPreviewCtrlImpl::DoPaint](#dopaint)|Chiamato dal framework per il rendering dell'anteprima.|

### <a name="protected-constants"></a>Costanti protette

|nome|Descrizione|
|----------|-----------------|
|[CAtlPreviewCtrlImpl::m_plf](#m_plf)|Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CAtlPreviewCtrlImpl::m_clrBack](#m_clrback)|Colore di sfondo della finestra di anteprima.|
|[CAtlPreviewCtrlImpl::m_clrText](#m_clrtext)|Colore del testo della finestra di anteprima.|

## <a name="remarks"></a>Note

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

##  <a name="catlpreviewctrlimpl"></a>  CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl

Costruisce un oggetto di controllo di anteprima.

```
CAtlPreviewCtrlImpl(void) : m_clrText(0),
   m_clrBack(RGB(255, 255, 255)), m_plf(NULL);
```

### <a name="remarks"></a>Note

##  <a name="dtor"></a>  CAtlPreviewCtrlImpl::~CAtlPreviewCtrlImpl

Distrugge un oggetto di controllo di anteprima.

```
virtual ~CAtlPreviewCtrlImpl(void);
```

### <a name="remarks"></a>Note

##  <a name="create"></a>  CAtlPreviewCtrlImpl::Create

Chiamato da un gestore di anteprima avanzata per creare la finestra di Windows.

```
virtual BOOL Create(HWND hWndParent, const RECT* prc);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
Handle alla finestra host fornita dalla Shell per l'anteprima avanzata.

*prc*<br/>
Specifica le dimensioni iniziali e la posizione della finestra.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="destroy"></a>  CAtlPreviewCtrlImpl::Destroy

Chiamato da un gestore di anteprime Rich quando è necessario eliminare definitivamente questo controllo.

```
virtual void Destroy();
```

### <a name="remarks"></a>Note

##  <a name="dopaint"></a>  CAtlPreviewCtrlImpl::DoPaint

Chiamato dal framework per il rendering dell'anteprima.

```
virtual void DoPaint(HDC hdc);
```

### <a name="parameters"></a>Parametri

*hdc*<br/>
Handle per un contesto di dispositivo per il disegno.

### <a name="remarks"></a>Note

##  <a name="focus"></a>  CAtlPreviewCtrlImpl::Focus

Imposta lo stato attivo a questo controllo.

```
virtual void Focus();
```

### <a name="remarks"></a>Note

##  <a name="m_clrback"></a>  CAtlPreviewCtrlImpl::m_clrBack

Colore di sfondo della finestra di anteprima.

```
COLORREF m_clrBack;
```

### <a name="remarks"></a>Note

##  <a name="m_clrtext"></a>  CAtlPreviewCtrlImpl::m_clrText

Colore del testo della finestra di anteprima.

```
COLORREF m_clrText;
```

### <a name="remarks"></a>Note

##  <a name="m_plf"></a>  CAtlPreviewCtrlImpl::m_plf

Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.

```
const LOGFONTW* m_plf;
```

### <a name="remarks"></a>Note

##  <a name="onpaint"></a>  CAtlPreviewCtrlImpl::OnPaint

Gestisce il messaggio WM_PAINT.

```
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
Quando questa funzione viene restituito, contiene TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 0.

### <a name="remarks"></a>Note

##  <a name="redraw"></a>  CAtlPreviewCtrlImpl::Redraw

Indica il ridisegno del controllo.

```
virtual void Redraw();
```

### <a name="remarks"></a>Note

##  <a name="sethost"></a>  CAtlPreviewCtrlImpl::SetHost

Imposta un nuovo elemento padre di questo controllo.

```
virtual void SetHost(HWND hWndParent);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
Handle per la nuova finestra padre.

### <a name="remarks"></a>Note

##  <a name="setpreviewvisuals"></a>  CAtlPreviewCtrlImpl::SetPreviewVisuals

Chiamato da un gestore di anteprime Rich quando è necessario impostare gli oggetti visivi di un'anteprima dettagliata del contenuto.

```
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

*plf*<br/>
Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.

### <a name="remarks"></a>Note

##  <a name="setrect"></a>  CAtlPreviewCtrlImpl::SetRect

Imposta un nuovo rettangolo di delimitazione per questo controllo.

```
virtual void SetRect(const RECT* prc, BOOL bRedraw);
```

### <a name="parameters"></a>Parametri

*prc*<br/>
Specifica la nuova dimensione e posizione del controllo di anteprima.

*bRedraw*<br/>
Specifica se il controllo deve essere ridisegnato.

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)
