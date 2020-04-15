---
title: Classe CMFCAutoHideButton
ms.date: 10/18/2018
f1_keywords:
- CMFCAutoHideButton
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::BringToTop
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::Create
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetAlignment
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetAutoHideWindow
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetParentToolBar
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetRect
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetSize
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetTextSize
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::HighlightButton
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsActive
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsHighlighted
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsHorizontal
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsTop
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsVisible
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::Move
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::OnDraw
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::OnDrawBorder
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::OnFillBackground
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::ReplacePane
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::ShowAttachedWindow
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::ShowButton
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::UnSetAutoHideMode
helpviewer_keywords:
- CMFCAutoHideButton [MFC], BringToTop
- CMFCAutoHideButton [MFC], Create
- CMFCAutoHideButton [MFC], GetAlignment
- CMFCAutoHideButton [MFC], GetAutoHideWindow
- CMFCAutoHideButton [MFC], GetParentToolBar
- CMFCAutoHideButton [MFC], GetRect
- CMFCAutoHideButton [MFC], GetSize
- CMFCAutoHideButton [MFC], GetTextSize
- CMFCAutoHideButton [MFC], HighlightButton
- CMFCAutoHideButton [MFC], IsActive
- CMFCAutoHideButton [MFC], IsHighlighted
- CMFCAutoHideButton [MFC], IsHorizontal
- CMFCAutoHideButton [MFC], IsTop
- CMFCAutoHideButton [MFC], IsVisible
- CMFCAutoHideButton [MFC], Move
- CMFCAutoHideButton [MFC], OnDraw
- CMFCAutoHideButton [MFC], OnDrawBorder
- CMFCAutoHideButton [MFC], OnFillBackground
- CMFCAutoHideButton [MFC], ReplacePane
- CMFCAutoHideButton [MFC], ShowAttachedWindow
- CMFCAutoHideButton [MFC], ShowButton
- CMFCAutoHideButton [MFC], UnSetAutoHideMode
ms.assetid: c80e6b8b-25ca-4d12-9d27-457731028ab0
ms.openlocfilehash: 84f17896cc3c4f5cd6099a9ccf7e4e000f43b1f1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369919"
---
# <a name="cmfcautohidebutton-class"></a>Classe CMFCAutoHideButton

Pulsante che visualizza o nasconde una [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) configurata per nascondere elementi.

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCAutoHideButton : public CObject
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCAutoHideButton::BringToTop](#bringtotop)||
|[CMFCAutoHideButton::Create](#create)|Crea e inizializza il pulsante Nascondi automaticamente.|
|[CMFCAutoHideButton::GetAlignment](#getalignment)|Recupera l'allineamento del pulsante Nascondi automaticamente.|
|[CMFCAutoHideButton::GetAutoHideWindow](#getautohidewindow)|Restituisce l'oggetto [CDockablePane](../../mfc/reference/cdockablepane-class.md) associato al pulsante Nascondi automaticamente.|
|[CMFCAutoHideButton::GetParentToolBar](#getparenttoolbar)||
|[CMFCAutoHideButton::GetRect](#getrect)||
|[CMFCAutoHideButton::GetSize](#getsize)|Determina le dimensioni del pulsante Nascondi automaticamente.|
|[CMFCAutoHideButton::GetTextSize](#gettextsize)|Restituisce le dimensioni dell'etichetta di testo per il pulsante Nascondi automaticamente.|
|[CMFCAutoHideButton::HighlightButton](#highlightbutton)|Evidenzia il pulsante Nascondi automaticamente.|
|[CMFCAutoHideButton::IsActive](#isactive)|Indica se il pulsante Nascondi automaticamente è attivo.|
|[CMFCAutoHideButton::IsHighlighted](#ishighlighted)|Restituisce lo stato di evidenziazione del pulsante Nascondi automaticamente.|
|[CMFCAutoHideButton::IsHorizontal](#ishorizontal)|Determina se il pulsante Nascondi automaticamente è orizzontale o verticale.|
|[CMFCAutoHideButton::IsTop](#istop)||
|[CMFCAutoHideButton::IsVisible](#isvisible)|Indica se il pulsante è visibile.|
|[CMFCAutoHideButton::Move](#move)||
|[CMFCAutoHideButton::OnDraw](#ondraw)|Il framework chiama questo metodo quando disegna il pulsante Nascondi automaticamente.|
|[CMFCAutoHideButton::OnDrawBorder](#ondrawborder)|Il framework chiama questo metodo quando disegna il bordo di un pulsante Nascondi automaticamente.|
|[CMFCAutoHideButton::OnFillBackground](#onfillbackground)|Il framework chiama questo metodo quando riempie lo sfondo di un pulsante Nascondi automaticamente.|
|[CMFCAutoHideButton::ReplacePane](#replacepane)||
|[CMFCAutoHideButton::ShowAttachedWindow](#showattachedwindow)|Mostra o nasconde la [classe CDockablePane](../../mfc/reference/cdockablepane-class.md)associata.|
|[CMFCAutoHideButton::ShowButton](#showbutton)|Mostra o nasconde il pulsante Nascondi automaticamente.|
|[CMFCAutoHideButton::UnSetAutoHideMode](#unsetautohidemode)||

## <a name="remarks"></a>Osservazioni

Al successivo `CMFCAutoHideButton` creazione, l'oggetto è associato a una [classe CDockablePane](../../mfc/reference/cdockablepane-class.md). L'oggetto `CDockablePane` viene nascosto o visualizzato quando l'utente interagisce con l'oggetto `CMFCAutoHideButton`.

Per impostazione predefinita, il framework crea automaticamente un oggetto `CMFCAutoHideButton` quando l'utente attiva il pulsante Nascondi automaticamente. Il framework può creare un elemento di una classe di interfaccia utente personalizzata anziché la classe `CMFCAutoHideButton`. Per specificare la classe dell'interfaccia utente personalizzata che deve essere usata dal framework, impostare la variabile membro statica `CMFCAutoHideBar::m_pAutoHideButtonRTS` uguale alla classe dell'interfaccia utente personalizzata. Per impostazione predefinita, questa variabile è impostata su `CMFCAutoHideButton`.

## <a name="example"></a>Esempio

L'esempio seguente illustra come costruire un oggetto `CMFCAutoHideButton` e usare i vari metodi nella classe `CMFCAutoHideButton`. L'esempio illustra come inizializzare un oggetto `CMFCAutoHideButton` usando il relativo metodo `Create`, visualizzare la classe `CDockablePane` associata e visualizzare il pulsante Nascondi automaticamente.

[!code-cpp[NVC_MFC_RibbonApp#32](../../mfc/reference/codesnippet/cpp/cmfcautohidebutton-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMFCAutoHideButton`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxautohidebutton.h

## <a name="cmfcautohidebuttonbringtotop"></a><a name="bringtotop"></a>CMFCAutoHideButton::BringToTop

```
void BringToTop();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebuttoncreate"></a><a name="create"></a>CMFCAutoHideButton::Create

Crea e inizializza un pulsante Nascondi automaticamente.

```
virtual BOOL Create(
    CMFCAutoHideBar* pParentBar,
    CDockablePane* pAutoHideWnd,
    DWORD dwAlignment);
```

### <a name="parameters"></a>Parametri

*pParentBar (bar padre)*<br/>
[in] Puntatore alla barra degli strumenti padre.

*pAutoHideWnd*<br/>
[in] Puntatore a un [CDockablePane](../../mfc/reference/cdockablepane-class.md) oggetto. Questo pulsante Nascondi automaticamente si `CDockablePane`nasconde e mostra che .

*dwAllineamento*<br/>
[in] Valore che specifica l'allineamento del pulsante con la finestra cornice principale.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Quando si `CMFCAutoHideButton` crea un oggetto, è necessario associare `CDockablePane`il pulsante Nascondi automaticamente a un oggetto specifico. L'utente può utilizzare il pulsante Nascondi `CDockablePane`automaticamente per nascondere e mostrare l'oggetto associato.

Il parametro *dwAlignment* indica la posizione del pulsante Nascondi automaticamente nell'applicazione. Il parametro può essere su uno dei valori seguenti:

- CBRS_ALIGN_LEFT

- CBRS_ALIGN_RIGHT

- CBRS_ALIGN_TOP

- CBRS_ALIGN_BOTTOM

## <a name="cmfcautohidebuttongetalignment"></a><a name="getalignment"></a>CMFCAutoHideButton::GetAlignment

Recupera l'allineamento del pulsante Nascondi automaticamente.

```
DWORD GetAlignment() const;
```

### <a name="return-value"></a>Valore restituito

Valore DWORD che contiene l'allineamento corrente del pulsante Nascondi automaticamente.

### <a name="remarks"></a>Osservazioni

L'allineamento del pulsante Nascondi automaticamente indica la posizione del pulsante nell'applicazione. Può essere uno dei seguenti valori:

- CBRS_ALIGN_LEFT

- CBRS_ALIGN_RIGHT

- CRBS_ALIGN_TOP

- CBRS_ALIGN_BOTTOM

## <a name="cmfcautohidebuttongetautohidewindow"></a><a name="getautohidewindow"></a>CMFCAutoHideButton::GetAutoHideWindow

Restituisce l'oggetto [CDockablePane](../../mfc/reference/cdockablepane-class.md) associato al pulsante Nascondi automaticamente.

```
CDockablePane* GetAutoHideWindow() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto associato. `CDockablePane`

### <a name="remarks"></a>Osservazioni

Per associare un pulsante `CDockablePane`Nascondi `CDockablePane` automaticamente a un , passare il come parametro per il [CMFCAutoHideButton::Create](#create) metodo.

## <a name="cmfcautohidebuttongetparenttoolbar"></a><a name="getparenttoolbar"></a>CMFCAutoHideButton::GetParentToolBar

```
CMFCAutoHideBar* GetParentToolBar();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebuttongetrect"></a><a name="getrect"></a>CMFCAutoHideButton::GetRect

```
CRect GetRect() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebuttongetsize"></a><a name="getsize"></a>CMFCAutoHideButton::GetSize

Determina le dimensioni del pulsante Nascondi automaticamente.

```
CSize GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CSize` che contiene le dimensioni del pulsante.

### <a name="remarks"></a>Osservazioni

La dimensione calcolata include la dimensione del bordo del pulsante Nascondi automaticamente.

## <a name="cmfcautohidebuttongettextsize"></a><a name="gettextsize"></a>CMFCAutoHideButton::GetTextSize

Restituisce le dimensioni dell'etichetta di testo per il pulsante Nascondi automaticamente.

```
virtual CSize GetTextSize() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che contiene la dimensione del testo per il pulsante Nascondi automaticamente.

## <a name="cmfcautohidebuttonisactive"></a><a name="isactive"></a>CMFCAutoHideButton::IsActive

Indica se il pulsante Nascondi automaticamente è attivo.

```
BOOL IsActive() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante Nascondi automaticamente è attivo. FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Un pulsante Nascondi automaticamente è attivo quando viene visualizzata la finestra della [classe CDockablePane](../../mfc/reference/cdockablepane-class.md) associata.

## <a name="cmfcautohidebuttonishorizontal"></a><a name="ishorizontal"></a>CMFCAutoHideButton::IsHorizontal

Determina se il pulsante Nascondi automaticamente è orizzontale o verticale.

```
BOOL IsHorizontal() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante è orizzontale; 0 in caso contrario.

### <a name="remarks"></a>Osservazioni

Il framework imposta l'orientamento di un [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) oggetto quando lo si crea.  È possibile controllare l'orientamento utilizzando il *dwAlignment* parametro nel [CMFCAutoHideButton::Create](#create) metodo.

## <a name="cmfcautohidebuttonistop"></a><a name="istop"></a>CMFCAutoHideButton::IsTop

```
BOOL IsTop() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebuttonisvisible"></a><a name="isvisible"></a>CMFCAutoHideButton::IsVisible

Indica se il pulsante Nascondi automaticamente è visibile.

```
virtual BOOL IsVisible() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante è visibile. FALSE in caso contrario.

## <a name="cmfcautohidebuttonondraw"></a><a name="ondraw"></a>CMFCAutoHideButton::OnDraw

Il framework chiama questo metodo quando disegna il pulsante Nascondi automaticamente.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

### <a name="remarks"></a>Osservazioni

Se si desidera personalizzare l'aspetto dei pulsanti Nascondi automaticamente nell'applicazione, creare una nuova classe derivata da `CMFCAutoHideButton`. Nella classe derivata eseguire l'override di questo metodo.

## <a name="cmfcautohidebuttonondrawborder"></a><a name="ondrawborder"></a>CMFCAutoHideButton::OnDrawBorder

Il framework chiama questo metodo quando disegna il bordo di un pulsante Nascondi automaticamente.

```
virtual void OnDrawBorder(
    CDC* pDC,
    CRect rectBounds,
    CRect rectBorderSize);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*rectBounds (limiti di rettida)*<br/>
[in] Rettangolo di delimitazione del pulsante Nascondi automaticamente.

*rectBorderSize (dimensioni di confine)*<br/>
[in] Spessore del bordo per ogni lato del pulsante Nascondi automaticamente.

### <a name="remarks"></a>Osservazioni

Se si desidera personalizzare il bordo di ogni pulsante Nascondi automaticamente nell'applicazione, creare una nuova classe derivata da `CMFCAutoHideButton`. Nella classe derivata eseguire l'override di questo metodo.

## <a name="cmfcautohidebuttononfillbackground"></a><a name="onfillbackground"></a>CMFCAutoHideButton::OnFillBackground

Il framework chiama questo metodo quando riempie lo sfondo di un pulsante Nascondi automaticamente.

```
virtual void OnFillBackground(
    CDC* pDC,
    CRect rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*Rect*<br/>
[in] Rettangolo di delimitazione del pulsante Nascondi automaticamente.

### <a name="remarks"></a>Osservazioni

Se si desidera personalizzare lo sfondo per i pulsanti Nascondi automaticamente `CMFCAutoHideButton`nell'applicazione, creare una nuova classe derivata da . Nella classe derivata eseguire l'override di questo metodo.

## <a name="cmfcautohidebuttonshowattachedwindow"></a><a name="showattachedwindow"></a>CMFCAutoHideButton::ShowAttachedWindow

Mostra o nasconde la [classe CDockablePane](../../mfc/reference/cdockablepane-class.md)associata.

```
void ShowAttachedWindow(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
[in] Valore Boolean che specifica se questo `CDockablePane`metodo mostra l'oggetto associato .

## <a name="cmfcautohidebuttonshowbutton"></a><a name="showbutton"></a>CMFCAutoHideButton::ShowButton

Mostra o nasconde il pulsante Nascondi automaticamente.

```
virtual void ShowButton(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
[in] Valore Boolean che specifica se visualizzare il pulsante Nascondi automaticamente.

## <a name="cmfcautohidebuttonmove"></a><a name="move"></a>CMFCAutoHideButton::Sposta

```
void Move(int nOffset);
```

### <a name="parameters"></a>Parametri

[in] *nOffset*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebuttonreplacepane"></a><a name="replacepane"></a>CMFCAutoHideButton::ReplacePane

```
void ReplacePane(CDockablePane* pNewBar);
```

### <a name="parameters"></a>Parametri

[in] *pNewBar (informazioni in stato inquestoendo*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebuttonunsetautohidemode"></a><a name="unsetautohidemode"></a>CMFCAutoHideButton::UnSetAutoHideMode

Disabilita la modalità Nascondi automaticamente.

```
virtual void UnSetAutoHideMode(CDockablePane* pFirstBarInGroup);
```

### <a name="parameters"></a>Parametri

*pFirstBarInGroup (gruppo di colori piFirstBarInGroup)*<br/>
[in] Puntatore alla prima barra del gruppo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebuttonhighlightbutton"></a><a name="highlightbutton"></a>CMFCAutoHideButton::HighlightButton

Evidenzia il pulsante Nascondi automaticamente.

```
virtual void HighlightButton(BOOL bHighlight);
```

### <a name="parameters"></a>Parametri

*bEvidenziare*<br/>
Specifica il nuovo stato del pulsante Nascondi automaticamente. TRUE indica che il pulsante è evidenziato, FALSE indica che il pulsante non è evidenziato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebuttonishighlighted"></a><a name="ishighlighted"></a>CMFCAutoHideButton::IsHighlighted

Restituisce lo stato di evidenziazione del pulsante Nascondi automaticamente.

```
virtual BOOL IsHighlighted() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il pulsante Nascondi automaticamente è evidenziato; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md)<br/>
[CAutoHideDockSite (classe)](../../mfc/reference/cautohidedocksite-class.md)
