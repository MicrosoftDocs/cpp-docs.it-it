---
description: 'Altre informazioni su: Classe CScrollBar'
title: Classe CScrollBar
ms.date: 11/04/2016
f1_keywords:
- CScrollBar
- AFXWIN/CScrollBar
- AFXWIN/CScrollBar::CScrollBar
- AFXWIN/CScrollBar::Create
- AFXWIN/CScrollBar::EnableScrollBar
- AFXWIN/CScrollBar::GetScrollBarInfo
- AFXWIN/CScrollBar::GetScrollInfo
- AFXWIN/CScrollBar::GetScrollLimit
- AFXWIN/CScrollBar::GetScrollPos
- AFXWIN/CScrollBar::GetScrollRange
- AFXWIN/CScrollBar::SetScrollInfo
- AFXWIN/CScrollBar::SetScrollPos
- AFXWIN/CScrollBar::SetScrollRange
- AFXWIN/CScrollBar::ShowScrollBar
helpviewer_keywords:
- CScrollBar [MFC], CScrollBar
- CScrollBar [MFC], Create
- CScrollBar [MFC], EnableScrollBar
- CScrollBar [MFC], GetScrollBarInfo
- CScrollBar [MFC], GetScrollInfo
- CScrollBar [MFC], GetScrollLimit
- CScrollBar [MFC], GetScrollPos
- CScrollBar [MFC], GetScrollRange
- CScrollBar [MFC], SetScrollInfo
- CScrollBar [MFC], SetScrollPos
- CScrollBar [MFC], SetScrollRange
- CScrollBar [MFC], ShowScrollBar
ms.assetid: f3735ca5-73ea-46dc-918b-4d824c9fe47f
ms.openlocfilehash: a557fe490b2cdce81d5639f9ce15fd6462442029
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264739"
---
# <a name="cscrollbar-class"></a>Classe CScrollBar

Fornisce la funzionalità di un controllo barra di scorrimento di Windows.

## <a name="syntax"></a>Sintassi

```
class CScrollBar : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CScrollBar:: CScrollBar](#cscrollbar)|Costruisce un oggetto `CScrollBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CScrollBar:: create](#create)|Crea la barra di scorrimento di Windows e la collega all' `CScrollBar` oggetto.|
|[CScrollBar:: EnableScrollBar](#enablescrollbar)|Abilita o disabilita una o entrambe le frecce di una barra di scorrimento.|
|[CScrollBar:: GetScrollBarInfo](#getscrollbarinfo)|Recupera le informazioni sulla barra di scorrimento usando una `SCROLLBARINFO` struttura.|
|[CScrollBar:: GetScrollInfo](#getscrollinfo)|Recupera le informazioni sulla barra di scorrimento.|
|[CScrollBar:: GetScrollLimit](#getscrolllimit)|Recupera il limite della barra di scorrimento|
|[CScrollBar:: GetScrollPos](#getscrollpos)|Recupera la posizione corrente di una casella di scorrimento.|
|[CScrollBar:: GetScrollRange](#getscrollrange)|Recupera le posizioni della barra di scorrimento minima e massima correnti per la barra di scorrimento specificata.|
|[CScrollBar:: SetScrollInfo](#setscrollinfo)|Imposta informazioni sulla barra di scorrimento.|
|[CScrollBar:: SetScrollPos](#setscrollpos)|Imposta la posizione corrente di una casella di scorrimento.|
|[CScrollBar:: SetScrollRange](#setscrollrange)|Imposta i valori di posizione minima e massima correnti per la barra di scorrimento specificata.|
|[CScrollBar:: ShowScrollBar](#showscrollbar)|Consente di visualizzare o nascondere una barra di scorrimento.|

## <a name="remarks"></a>Commenti

Si crea un controllo barra di scorrimento in due passaggi. Chiamare innanzitutto il costruttore `CScrollBar` per costruire l' `CScrollBar` oggetto, quindi chiamare la funzione membro [create](#create) per creare il controllo barra di scorrimento di Windows e collegarlo all' `CScrollBar` oggetto.

Se si crea un `CScrollBar` oggetto in una finestra di dialogo (tramite una risorsa della finestra di dialogo), il `CScrollBar` viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si crea un `CScrollBar` oggetto all'interno di una finestra, potrebbe essere necessario eliminarlo.

Se si crea l' `CScrollBar` oggetto nello stack, questo viene eliminato automaticamente. Se si crea l' `CScrollBar` oggetto nell'heap usando la **`new`** funzione, è necessario chiamare **`delete`** sull'oggetto per eliminarlo quando l'utente termina la barra di scorrimento di Windows.

Se si alloca memoria nell' `CScrollBar` oggetto, eseguire l'override del `CScrollBar` distruttore per eliminare le allocazioni.

Per informazioni correlate sull'uso di `CScrollBar` , vedere [controlli](../../mfc/controls-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CScrollBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cscrollbarcreate"></a><a name="create"></a> CScrollBar:: create

Crea la barra di scorrimento di Windows e la collega all' `CScrollBar` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile della barra di scorrimento. Applicare qualsiasi combinazione di [stili barra di scorrimento](../../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles) alla barra di scorrimento.

*Rect*<br/>
Specifica le dimensioni e la posizione della barra di scorrimento. Può essere una `RECT` struttura o un `CRect` oggetto.

*pParentWnd*<br/>
Specifica la finestra padre della barra di scorrimento, in genere un `CDialog` oggetto. Non deve essere NULL.

*nID*<br/>
ID del controllo della barra di scorrimento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Si costruisce un `CScrollBar` oggetto in due passaggi. Chiamare innanzitutto il costruttore, che costruisce l' `CScrollBar` oggetto, quindi chiamare `Create` , che crea e inizializza la barra di scorrimento di Windows associata e la associa all' `CScrollBar` oggetto.

Applicare gli [stili della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) seguenti a una barra di scorrimento:

- WS_CHILD sempre

- WS_VISIBLE in genere

- WS_DISABLED raramente

- WS_GROUP ai controlli di gruppo

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CScrollBar#1](../../mfc/reference/codesnippet/cpp/cscrollbar-class_1.cpp)]

## <a name="cscrollbarcscrollbar"></a><a name="cscrollbar"></a> CScrollBar:: CScrollBar

Costruisce un oggetto `CScrollBar`.

```
CScrollBar();
```

### <a name="remarks"></a>Commenti

Dopo la costruzione dell'oggetto, chiamare la `Create` funzione membro per creare e inizializzare la barra di scorrimento di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CScrollBar#2](../../mfc/reference/codesnippet/cpp/cscrollbar-class_2.h)]

## <a name="cscrollbarenablescrollbar"></a><a name="enablescrollbar"></a> CScrollBar:: EnableScrollBar

Abilita o disabilita una o entrambe le frecce di una barra di scorrimento.

```
BOOL EnableScrollBar(UINT nArrowFlags = ESB_ENABLE_BOTH);
```

### <a name="parameters"></a>Parametri

*nArrowFlags*<br/>
Specifica se le frecce di scorrimento sono abilitate o disabilitate e quali frecce sono abilitate o disabilitate. Questo parametro può essere uno dei valori seguenti:

- ESB_ENABLE_BOTH Abilita entrambe le frecce di una barra di scorrimento.

- ESB_DISABLE_LTUP disabilita la freccia sinistra di una barra di scorrimento orizzontale o la freccia verso l'alto di una barra di scorrimento verticale.

- ESB_DISABLE_RTDN Disabilita la freccia destra di una barra di scorrimento orizzontale o la freccia verso il basso di una barra di scorrimento verticale.

- ESB_DISABLE_BOTH Disabilita entrambe le frecce di una barra di scorrimento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se le frecce sono abilitate o disabilitate come specificato; in caso contrario, 0, che indica che le frecce si trovano già nello stato richiesto o che si è verificato un errore.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CScrollBar:: SetScrollRange](#setscrollrange).

## <a name="cscrollbargetscrollbarinfo"></a><a name="getscrollbarinfo"></a> CScrollBar:: GetScrollBarInfo

Recupera le informazioni gestite dalla struttura `SCROLLBARINFO` su una barra di scorrimento.

```
BOOL GetScrollBarInfo(PSCROLLBARINFO pScrollInfo) const;
```

### <a name="parameters"></a>Parametri

*pScrollInfo*<br/>
Puntatore alla struttura [SCROLLBARINFO](/windows/win32/api/winuser/ns-winuser-scrollbarinfo) .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Questa funzione membro emula la funzionalità del messaggio di [SBM_SCROLLBARINFO](/windows/win32/Controls/sbm-getscrollbarinfo) , come descritto nel Windows SDK.

## <a name="cscrollbargetscrollinfo"></a><a name="getscrollinfo"></a> CScrollBar:: GetScrollInfo

Recupera le informazioni gestite dalla struttura `SCROLLINFO` su una barra di scorrimento.

```
BOOL GetScrollInfo(
    LPSCROLLINFO lpScrollInfo,
    UINT nMask = SIF_ALL);
```

### <a name="parameters"></a>Parametri

*lpScrollInfo*<br/>
Puntatore a una struttura [ScrollInfo](/windows/win32/api/winuser/ns-winuser-scrollinfo) . Per ulteriori informazioni su questa struttura, vedere la Windows SDK.

*nMask*<br/>
Specifica i parametri della barra di scorrimento da recuperare. Utilizzo tipico, SIF_ALL, specifica una combinazione di SIF_PAGE, SIF_POS, SIF_TRACKPOS e SIF_RANGE. `SCROLLINFO`Per ulteriori informazioni sui valori nMask, vedere.

### <a name="return-value"></a>Valore restituito

Se il messaggio recupera tutti i valori, il valore restituito è TRUE. In caso contrario, è FALSE.

### <a name="remarks"></a>Commenti

`GetScrollInfo` consente alle applicazioni di usare le posizioni di scorrimento a 32 bit.

La struttura [ScrollInfo](/windows/win32/api/winuser/ns-winuser-scrollinfo) contiene informazioni su una barra di scorrimento, incluse le posizioni di scorrimento minime e massime, le dimensioni della pagina e la posizione della casella di scorrimento (il cursore). `SCROLLINFO`Per ulteriori informazioni sulla modifica delle impostazioni predefinite della struttura, vedere l'argomento relativo alla struttura nella Windows SDK.

I gestori di messaggi di Windows MFC che indicano la posizione della barra di scorrimento, [CWnd:: OnHScroll e [CWnd:: OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll), forniscono solo 16 bit di dati di posizione. `GetScrollInfo` e `SetScrollInfo` forniscono 32 bit di dati sulla posizione della barra di scorrimento. Pertanto, un'applicazione può chiamare `GetScrollInfo` durante l'elaborazione `CWnd::OnHScroll` `CWnd::OnVScroll` di o per ottenere i dati di posizione della barra di scorrimento a 32 bit.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd:: OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).

## <a name="cscrollbargetscrolllimit"></a><a name="getscrolllimit"></a> CScrollBar:: GetScrollLimit

Recupera la posizione di scorrimento massima della barra di scorrimento.

```
int GetScrollLimit();
```

### <a name="return-value"></a>Valore restituito

Specifica la posizione massima di una barra di scorrimento in caso di esito positivo; in caso contrario, 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd:: OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).

## <a name="cscrollbargetscrollpos"></a><a name="getscrollpos"></a> CScrollBar:: GetScrollPos

Recupera la posizione corrente di una casella di scorrimento.

```
int GetScrollPos() const;
```

### <a name="return-value"></a>Valore restituito

Specifica la posizione corrente della casella di scorrimento in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

La posizione corrente è un valore relativo che dipende dall'intervallo di scorrimento corrente. Se, ad esempio, l'intervallo di scorrimento è da 100 a 200 e la casella di scorrimento si trova al centro della barra, la posizione corrente è 150.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd:: OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).

## <a name="cscrollbargetscrollrange"></a><a name="getscrollrange"></a> CScrollBar:: GetScrollRange

Copia le posizioni della barra di scorrimento minima e massima correnti per la barra di scorrimento specificata nei percorsi specificati da *lpMinPos* e *lpMaxPos*.

```cpp
void GetScrollRange(
    LPINT lpMinPos,
    LPINT lpMaxPos) const;
```

### <a name="parameters"></a>Parametri

*lpMinPos*<br/>
Punta alla variabile integer che deve ricevere la posizione minima.

*lpMaxPos*<br/>
Punta alla variabile integer che deve ricevere la posizione massima.

### <a name="remarks"></a>Commenti

L'intervallo predefinito per un controllo barra di scorrimento è vuoto (entrambi i valori sono 0).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd:: OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).

## <a name="cscrollbarsetscrollinfo"></a><a name="setscrollinfo"></a> CScrollBar:: SetScrollInfo

Imposta le informazioni che la `SCROLLINFO` struttura gestisce su una barra di scorrimento.

```
BOOL SetScrollInfo(
    LPSCROLLINFO lpScrollInfo,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*lpScrollInfo*<br/>
Puntatore a una struttura [ScrollInfo](/windows/win32/api/winuser/ns-winuser-scrollinfo) .

*bRedraw*<br/>
Specifica se la barra di scorrimento deve essere ridisegnato per riflettere le nuove informazioni. Se *bRedraw* è true, la barra di scorrimento viene ridisegnato. Se è FALSE, non viene ridisegnato. Per impostazione predefinita, la barra di scorrimento viene ridisegnato.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, il valore restituito è TRUE. In caso contrario, è FALSE.

### <a name="remarks"></a>Commenti

È necessario fornire i valori richiesti dai `SCROLLINFO` parametri della struttura, inclusi i valori del flag.

La `SCROLLINFO` struttura contiene informazioni su una barra di scorrimento, incluse le posizioni di scorrimento minime e massime, le dimensioni della pagina e la posizione della casella di scorrimento (il cursore). Per ulteriori informazioni sulla modifica delle impostazioni predefinite della struttura, vedere l'argomento relativo alla struttura [ScrollInfo](/windows/win32/api/winuser/ns-winuser-scrollinfo) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CScrollBar#3](../../mfc/reference/codesnippet/cpp/cscrollbar-class_3.cpp)]

## <a name="cscrollbarsetscrollpos"></a><a name="setscrollpos"></a> CScrollBar:: SetScrollPos

Imposta la posizione corrente di una casella di scorrimento su quella specificata da *nPos* e, se specificato, ridisegni la barra di scorrimento in modo da riflettere la nuova posizione.

```
int SetScrollPos(
    int nPos,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Specifica la nuova posizione per la casella di scorrimento. Deve trovarsi all'interno dell'intervallo di scorrimento.

*bRedraw*<br/>
Specifica se la barra di scorrimento deve essere ridisegnato per riflettere la nuova posizione. Se *bRedraw* è true, la barra di scorrimento viene ridisegnato. Se è FALSE, non viene ridisegnato. Per impostazione predefinita, la barra di scorrimento viene ridisegnato.

### <a name="return-value"></a>Valore restituito

Specifica la posizione precedente della casella di scorrimento in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Impostare *bRedraw* su false ogni volta che la barra di scorrimento verrà ridisegnato da una chiamata successiva a un'altra funzione per evitare che la barra di scorrimento venga ridisegnato due volte in un breve intervallo.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CScrollBar:: SetScrollRange](#setscrollrange).

## <a name="cscrollbarsetscrollrange"></a><a name="setscrollrange"></a> CScrollBar:: SetScrollRange

Imposta i valori di posizione minima e massima correnti per la barra di scorrimento specificata.

```cpp
void SetScrollRange(
    int nMinPos,
    int nMaxPos,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*nMinPos*<br/>
Specifica la posizione di scorrimento minima.

*nMaxPos*<br/>
Specifica la posizione di scorrimento massima.

*bRedraw*<br/>
Specifica se la barra di scorrimento deve essere ridisegnato per riflettere la modifica. Se *bRedraw* è true, la barra di scorrimento viene ridisegnato; Se FALSE, non viene ridisegnato. Per impostazione predefinita, viene ridisegnato.

### <a name="remarks"></a>Commenti

Impostare *nMinPos* e *nMaxPos* su 0 per nascondere le barre di scorrimento standard.

Non chiamare questa funzione per nascondere una barra di scorrimento durante l'elaborazione di un messaggio di notifica della barra di scorrimento.

Se una chiamata a `SetScrollRange` segue immediatamente una chiamata alla `SetScrollPos` funzione membro, impostare *bRedraw* su `SetScrollPos` 0 per impedire che la barra di scorrimento venga ridisegnato due volte.

La differenza tra i valori specificati da *nMinPos* e *nMaxPos* non deve essere maggiore di 32.767. L'intervallo predefinito per un controllo barra di scorrimento è vuoto ( *nMinPos* e *nMaxPos* sono 0).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CScrollBar#4](../../mfc/reference/codesnippet/cpp/cscrollbar-class_4.cpp)]

## <a name="cscrollbarshowscrollbar"></a><a name="showscrollbar"></a> CScrollBar:: ShowScrollBar

Consente di visualizzare o nascondere una barra di scorrimento.

```cpp
void ShowScrollBar(BOOL bShow = TRUE);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
Specifica se la barra di scorrimento è visualizzata o nascosta. Se questo parametro è TRUE, viene visualizzata la barra di scorrimento; in caso contrario, è nascosto.

### <a name="remarks"></a>Commenti

Un'applicazione non deve chiamare questa funzione per nascondere una barra di scorrimento durante l'elaborazione di un messaggio di notifica della barra di scorrimento.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CScrollBar:: create](#create).

## <a name="see-also"></a>Vedi anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[Classe CEdit](../../mfc/reference/cedit-class.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Classe CStatic](../../mfc/reference/cstatic-class.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
