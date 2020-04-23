---
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
ms.openlocfilehash: 2079e12eccde42fe8c456a7852a029f44ae3cd77
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754411"
---
# <a name="cscrollbar-class"></a>Classe CScrollBar

Fornisce la funzionalità di un controllo barra di scorrimento di Windows.

## <a name="syntax"></a>Sintassi

```
class CScrollBar : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Controllo Utente::CScrollBar](#cscrollbar)|Costruisce un oggetto `CScrollBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CScrollBar::Creare](#create)|Crea la barra di scorrimento di `CScrollBar` Windows e la associa all'oggetto.|
|[Proprietà CScrollBar::EnableScrollBar](#enablescrollbar)|Abilita o disabilita una o entrambe le frecce di una barra di scorrimento.|
|[Controllo Utente::GetScrollBarInfo](#getscrollbarinfo)|Recupera informazioni sulla barra di `SCROLLBARINFO` scorrimento utilizzando una struttura.|
|[Proprietà CScrollBar::GetScrollInfo](#getscrollinfo)|Recupera informazioni sulla barra di scorrimento.|
|[CScrollBar::GetScrollLimit](#getscrolllimit)|Recupera il limite della barra di scorrimento|
|[CScrollBar::GetScrollPos](#getscrollpos)|Recupera la posizione corrente di una casella di scorrimento.|
|[CScrollBar::GetScrollRange](#getscrollrange)|Recupera le posizioni minime e massime correnti della barra di scorrimento per la barra di scorrimento specificata.|
|[Proprietà CScrollBar::SetScrollInfo](#setscrollinfo)|Imposta informazioni sulla barra di scorrimento.|
|[Controllo Utente::SetScrollPos](#setscrollpos)|Imposta la posizione corrente di una casella di scorrimento.|
|[CScrollBar::SetScrollRange](#setscrollrange)|Imposta i valori di posizione minima e massima correnti per la barra di scorrimento specificata.|
|[Proprietà CScrollBar::ShowScrollBar](#showscrollbar)|Mostra o nasconde una barra di scorrimento.|

## <a name="remarks"></a>Osservazioni

Creare un controllo barra di scorrimento in due passaggi. In primo luogo, `CScrollBar` chiamare `CScrollBar` il costruttore per costruire l'oggetto, quindi chiamare il `CScrollBar` [Create](#create) funzione membro per creare il Windows controllo barra di scorrimento e associarlo all'oggetto.

Se si `CScrollBar` crea un oggetto all'interno di `CScrollBar` una finestra di dialogo (tramite una risorsa finestra di dialogo), viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si `CScrollBar` crea un oggetto all'interno di una finestra, potrebbe anche essere necessario distruggerlo.

Se si `CScrollBar` crea l'oggetto nello stack, viene eliminato automaticamente. Se si `CScrollBar` crea l'oggetto nell'heap utilizzando la **nuova** funzione, è necessario chiamare **delete** sull'oggetto per eliminarlo quando l'utente termina la barra di scorrimento di Windows.

Se si alloca `CScrollBar` memoria nell'oggetto, eseguire l'override del `CScrollBar` distruttore per eliminare le allocazioni.

Per informazioni correlate `CScrollBar`sull'utilizzo di , vedere [Controlli](../../mfc/controls-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CScrollBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cscrollbarcreate"></a><a name="create"></a>CScrollBar::Creare

Crea la barra di scorrimento di `CScrollBar` Windows e la associa all'oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile della barra di scorrimento. Applicare qualsiasi combinazione di stili della barra di [scorrimento](../../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles) alla barra di scorrimento.

*Rect*<br/>
Specifica le dimensioni e la posizione della barra di scorrimento. Può essere `RECT` una struttura `CRect` o un oggetto.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre della barra `CDialog` di scorrimento, in genere un oggetto. Non deve essere NULL.

*nID*<br/>
ID di controllo della barra di scorrimento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CScrollBar` oggetto in due passaggi. In primo luogo, chiamare il `CScrollBar` costruttore, che costruisce l'oggetto; quindi `Create`chiamare , che crea e inizializza la barra di `CScrollBar` scorrimento di Windows associata e la associa all'oggetto.

Applicare i seguenti stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a una barra di scorrimento:

- WS_CHILD sempre

- WS_VISIBLE di solito

- WS_DISABLED Raramente

- WS_GROUP A raggruppare i controlli

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CScrollBar#1](../../mfc/reference/codesnippet/cpp/cscrollbar-class_1.cpp)]

## <a name="cscrollbarcscrollbar"></a><a name="cscrollbar"></a>Controllo Utente::CScrollBar

Costruisce un oggetto `CScrollBar`.

```
CScrollBar();
```

### <a name="remarks"></a>Osservazioni

Dopo aver creato l'oggetto, chiamare la `Create` funzione membro per creare e inizializzare la barra di scorrimento di Windows.After constructing the object, call the member function to create and initialize the Windows scroll bar.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CScrollBar#2](../../mfc/reference/codesnippet/cpp/cscrollbar-class_2.h)]

## <a name="cscrollbarenablescrollbar"></a><a name="enablescrollbar"></a>Proprietà CScrollBar::EnableScrollBar

Abilita o disabilita una o entrambe le frecce di una barra di scorrimento.

```
BOOL EnableScrollBar(UINT nArrowFlags = ESB_ENABLE_BOTH);
```

### <a name="parameters"></a>Parametri

*nArrowFlags (Flag di proprietà)*<br/>
Specifica se le frecce di scorrimento sono abilitate o disabilitate e quali frecce sono abilitate o disabilitate. Questo parametro può essere uno dei seguenti valori:

- ESB_ENABLE_BOTH Attiva entrambe le frecce di una barra di scorrimento.

- ESB_DISABLE_LTUP Disabilita la freccia sinistra di una barra di scorrimento orizzontale o la freccia verso l'alto di una barra di scorrimento verticale.

- ESB_DISABLE_RTDN Disabilita la freccia destra di una barra di scorrimento orizzontale o la freccia verso il basso di una barra di scorrimento verticale.

- ESB_DISABLE_BOTH Disabilita entrambe le frecce di una barra di scorrimento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se le frecce sono abilitate o disabilitate come specificato; in caso contrario 0, che indica che le frecce sono già nello stato richiesto o che si è verificato un errore.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CScrollBar::SetScrollRange](#setscrollrange).

## <a name="cscrollbargetscrollbarinfo"></a><a name="getscrollbarinfo"></a>Controllo Utente::GetScrollBarInfo

Recupera le informazioni gestite dalla struttura `SCROLLBARINFO` su una barra di scorrimento.

```
BOOL GetScrollBarInfo(PSCROLLBARINFO pScrollInfo) const;
```

### <a name="parameters"></a>Parametri

*pScrollInfo (informazioni in stato inquestoeper*<br/>
Puntatore alla struttura [SCROLLBARINFO.](/windows/win32/api/winuser/ns-winuser-scrollbarinfo)

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio [di SBM_SCROLLBARINFO,](/windows/win32/Controls/sbm-getscrollbarinfo) come descritto in Windows SDK.

## <a name="cscrollbargetscrollinfo"></a><a name="getscrollinfo"></a>Proprietà CScrollBar::GetScrollInfo

Recupera le informazioni gestite dalla struttura `SCROLLINFO` su una barra di scorrimento.

```
BOOL GetScrollInfo(
    LPSCROLLINFO lpScrollInfo,
    UINT nMask = SIF_ALL);
```

### <a name="parameters"></a>Parametri

*lpScrollInfo (informazioni in questo oggetto utente)*<br/>
Puntatore a una struttura [SCROLLINFO.](/windows/win32/api/winuser/ns-winuser-scrollinfo) Vedere Windows SDK per ulteriori informazioni su questa struttura.

*nMaschera*<br/>
Specifica i parametri della barra di scorrimento da recuperare. Utilizzo tipico, SIF_ALL, specifica una combinazione di SIF_PAGE, SIF_POS, SIF_TRACKPOS e SIF_RANGE. Per `SCROLLINFO` ulteriori informazioni sui valori di nMask, vedere per ulteriori informazioni sui valori di nMask.

### <a name="return-value"></a>Valore restituito

Se il messaggio recupera i valori, il valore restituito è TRUE. In caso contrario, è FALSE.

### <a name="remarks"></a>Osservazioni

`GetScrollInfo`consente alle applicazioni di utilizzare le posizioni di scorrimento a 32 bit.

La struttura [SCROLLINFO](/windows/win32/api/winuser/ns-winuser-scrollinfo) contiene informazioni su una barra di scorrimento, incluse le posizioni di scorrimento minima e massima, le dimensioni della pagina e la posizione della casella di scorrimento (la casella di scorrimento). Per `SCROLLINFO` ulteriori informazioni sulla modifica delle impostazioni predefinite della struttura, vedere l'argomento relativo alla struttura in Windows SDK.

I gestori di messaggi di Windows MFC che indicano la posizione della barra di scorrimento, [CWnd::OnHScroll, e [CWnd::OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll), forniscono solo 16 bit di dati di posizione. `GetScrollInfo`e `SetScrollInfo` forniscono 32 bit di dati sulla posizione della barra di scorrimento. Pertanto, un'applicazione può chiamare `GetScrollInfo` durante l'elaborazione `CWnd::OnHScroll` o `CWnd::OnVScroll` per ottenere dati di posizione della barra di scorrimento a 32 bit.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).

## <a name="cscrollbargetscrolllimit"></a><a name="getscrolllimit"></a>CScrollBar::GetScrollLimit

Recupera la posizione di scorrimento massima della barra di scorrimento.

```
int GetScrollLimit();
```

### <a name="return-value"></a>Valore restituito

Specifica la posizione massima di una barra di scorrimento in caso di esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).

## <a name="cscrollbargetscrollpos"></a><a name="getscrollpos"></a>CScrollBar::GetScrollPos

Recupera la posizione corrente di una casella di scorrimento.

```
int GetScrollPos() const;
```

### <a name="return-value"></a>Valore restituito

Specifica la posizione corrente della casella di scorrimento in caso di esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La posizione corrente è un valore relativo che dipende dall'intervallo di scorrimento corrente. Ad esempio, se l'intervallo di scorrimento è compreso tra 100 e 200 e la casella di scorrimento si trova al centro della barra, la posizione corrente è 150.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).

## <a name="cscrollbargetscrollrange"></a><a name="getscrollrange"></a>CScrollBar::GetScrollRange

Copia le posizioni minime e massime correnti della barra di scorrimento per la barra di scorrimento specificata nelle posizioni specificate da *lpMinPos* e *lpMaxPos*.

```cpp
void GetScrollRange(
    LPINT lpMinPos,
    LPINT lpMaxPos) const;
```

### <a name="parameters"></a>Parametri

*LpMinPos*<br/>
Punta alla variabile integer che deve ricevere la posizione minima.

*LpMaxPos*<br/>
Punta alla variabile integer che deve ricevere la posizione massima.

### <a name="remarks"></a>Osservazioni

L'intervallo predefinito per un controllo barra di scorrimento è vuoto (entrambi i valori sono 0).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).

## <a name="cscrollbarsetscrollinfo"></a><a name="setscrollinfo"></a>Proprietà CScrollBar::SetScrollInfo

Imposta le informazioni `SCROLLINFO` mantenute dalla struttura su una barra di scorrimento.

```
BOOL SetScrollInfo(
    LPSCROLLINFO lpScrollInfo,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*lpScrollInfo (informazioni in questo oggetto utente)*<br/>
Puntatore a una struttura [SCROLLINFO.](/windows/win32/api/winuser/ns-winuser-scrollinfo)

*bRedraw*<br/>
Specifica se la barra di scorrimento deve essere ridisegnata per riflettere le nuove informazioni. Se *bRedraw* è TRUE, la barra di scorrimento viene ridisegnata. Se è FALSE, non viene ridisegnato. La barra di scorrimento viene ridisegnata per impostazione predefinita.

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, il ritorno è TRUE. In caso contrario, è FALSE.

### <a name="remarks"></a>Osservazioni

È necessario fornire i `SCROLLINFO` valori richiesti dai parametri della struttura, inclusi i valori dei flag.

La `SCROLLINFO` struttura contiene informazioni su una barra di scorrimento, incluse le posizioni di scorrimento minimo e massimo, le dimensioni della pagina e la posizione della casella di scorrimento (la casella di scorrimento). Per ulteriori informazioni sulla modifica delle impostazioni predefinite della struttura, vedere l'argomento relativo alla struttura [SCROLLINFO](/windows/win32/api/winuser/ns-winuser-scrollinfo) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CScrollBar#3](../../mfc/reference/codesnippet/cpp/cscrollbar-class_3.cpp)]

## <a name="cscrollbarsetscrollpos"></a><a name="setscrollpos"></a>Controllo Utente::SetScrollPos

Imposta la posizione corrente di una casella di scorrimento su quella specificata da *nPos* e, se specificata, ridisegna la barra di scorrimento per riflettere la nuova posizione.

```
int SetScrollPos(
    int nPos,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Specifica la nuova posizione per la casella di scorrimento. Deve essere compreso nell'intervallo di scorrimento.

*bRedraw*<br/>
Specifica se la barra di scorrimento deve essere ridisegnata per riflettere la nuova posizione. Se *bRedraw* è TRUE, la barra di scorrimento viene ridisegnata. Se è FALSE, non viene ridisegnato. La barra di scorrimento viene ridisegnata per impostazione predefinita.

### <a name="return-value"></a>Valore restituito

Specifica la posizione precedente della casella di scorrimento in caso di esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Impostare *bRedraw* su FALSE ogni volta che la barra di scorrimento verrà ridisegnata da una chiamata successiva a un'altra funzione per evitare che la barra di scorrimento venga ridisegnata due volte in un breve intervallo.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CScrollBar::SetScrollRange](#setscrollrange).

## <a name="cscrollbarsetscrollrange"></a><a name="setscrollrange"></a>CScrollBar::SetScrollRange

Imposta i valori di posizione minima e massima correnti per la barra di scorrimento specificata.

```cpp
void SetScrollRange(
    int nMinPos,
    int nMaxPos,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*NMinPos (informazioni in bosnia)*<br/>
Specifica la posizione di scorrimento minima.

*nMaxPos*<br/>
Specifica la posizione di scorrimento massima.

*bRedraw*<br/>
Specifica se la barra di scorrimento deve essere ridisegnata per riflettere la modifica. Se *bRedraw* è TRUE, la barra di scorrimento viene ridisegnata; se FALSE, non viene ridisegnato. Viene ridisegnato per impostazione predefinita.

### <a name="remarks"></a>Osservazioni

Impostare *nMinPos* e *nMaxPos* su 0 per nascondere le barre di scorrimento standard.

Non chiamare questa funzione per nascondere una barra di scorrimento durante l'elaborazione di un messaggio di notifica della barra di scorrimento.

Se una `SetScrollRange` chiamata a segue `SetScrollPos` immediatamente una chiamata alla `SetScrollPos` funzione membro, impostare *bRedraw* in su 0 per evitare che la barra di scorrimento venga ridisegnata due volte.

La differenza tra i valori specificati da *nMinPos* e *nMaxPos* non deve essere maggiore di 32.767. L'intervallo predefinito per un controllo barra di scorrimento è vuoto (entrambi *nMinPos* e *nMaxPos* sono 0).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CScrollBar#4](../../mfc/reference/codesnippet/cpp/cscrollbar-class_4.cpp)]

## <a name="cscrollbarshowscrollbar"></a><a name="showscrollbar"></a>Proprietà CScrollBar::ShowScrollBar

Mostra o nasconde una barra di scorrimento.

```cpp
void ShowScrollBar(BOOL bShow = TRUE);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
Specifica se la barra di scorrimento viene visualizzata o nascosta. Se questo parametro è TRUE, viene visualizzata la barra di scorrimento; in caso contrario è nascosto.

### <a name="remarks"></a>Osservazioni

Un'applicazione non deve chiamare questa funzione per nascondere una barra di scorrimento durante l'elaborazione di un messaggio di notifica della barra di scorrimento.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CScrollBar::Create](#create).

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Classe CStatic](../../mfc/reference/cstatic-class.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
