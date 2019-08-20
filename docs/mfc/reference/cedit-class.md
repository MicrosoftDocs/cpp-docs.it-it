---
title: CEdit Class
ms.date: 09/12/2018
f1_keywords:
- CEdit
- AFXWIN/CEdit
- AFXWIN/CEdit::CEdit
- AFXWIN/CEdit::CanUndo
- AFXWIN/CEdit::CharFromPos
- AFXWIN/CEdit::Clear
- AFXWIN/CEdit::Copy
- AFXWIN/CEdit::Create
- AFXWIN/CEdit::Cut
- AFXWIN/CEdit::EmptyUndoBuffer
- AFXWIN/CEdit::FmtLines
- AFXWIN/CEdit::GetCueBanner
- AFXWIN/CEdit::GetFirstVisibleLine
- AFXWIN/CEdit::GetHandle
- AFXWIN/CEdit::GetHighlight
- AFXWIN/CEdit::GetLimitText
- AFXWIN/CEdit::GetLine
- AFXWIN/CEdit::GetLineCount
- AFXWIN/CEdit::GetMargins
- AFXWIN/CEdit::GetModify
- AFXWIN/CEdit::GetPasswordChar
- AFXWIN/CEdit::GetRect
- AFXWIN/CEdit::GetSel
- AFXWIN/CEdit::HideBalloonTip
- AFXWIN/CEdit::LimitText
- AFXWIN/CEdit::LineFromChar
- AFXWIN/CEdit::LineIndex
- AFXWIN/CEdit::LineLength
- AFXWIN/CEdit::LineScroll
- AFXWIN/CEdit::Paste
- AFXWIN/CEdit::PosFromChar
- AFXWIN/CEdit::ReplaceSel
- AFXWIN/CEdit::SetCueBanner
- AFXWIN/CEdit::SetHandle
- AFXWIN/CEdit::SetHighlight
- AFXWIN/CEdit::SetLimitText
- AFXWIN/CEdit::SetMargins
- AFXWIN/CEdit::SetModify
- AFXWIN/CEdit::SetPasswordChar
- AFXWIN/CEdit::SetReadOnly
- AFXWIN/CEdit::SetRect
- AFXWIN/CEdit::SetRectNP
- AFXWIN/CEdit::SetSel
- AFXWIN/CEdit::SetTabStops
- AFXWIN/CEdit::ShowBalloonTip
- AFXWIN/CEdit::Undo
helpviewer_keywords:
- CEdit [MFC], CEdit
- CEdit [MFC], CanUndo
- CEdit [MFC], CharFromPos
- CEdit [MFC], Clear
- CEdit [MFC], Copy
- CEdit [MFC], Create
- CEdit [MFC], Cut
- CEdit [MFC], EmptyUndoBuffer
- CEdit [MFC], FmtLines
- CEdit [MFC], GetCueBanner
- CEdit [MFC], GetFirstVisibleLine
- CEdit [MFC], GetHandle
- CEdit [MFC], GetHighlight
- CEdit [MFC], GetLimitText
- CEdit [MFC], GetLine
- CEdit [MFC], GetLineCount
- CEdit [MFC], GetMargins
- CEdit [MFC], GetModify
- CEdit [MFC], GetPasswordChar
- CEdit [MFC], GetRect
- CEdit [MFC], GetSel
- CEdit [MFC], HideBalloonTip
- CEdit [MFC], LimitText
- CEdit [MFC], LineFromChar
- CEdit [MFC], LineIndex
- CEdit [MFC], LineLength
- CEdit [MFC], LineScroll
- CEdit [MFC], Paste
- CEdit [MFC], PosFromChar
- CEdit [MFC], ReplaceSel
- CEdit [MFC], SetCueBanner
- CEdit [MFC], SetHandle
- CEdit [MFC], SetHighlight
- CEdit [MFC], SetLimitText
- CEdit [MFC], SetMargins
- CEdit [MFC], SetModify
- CEdit [MFC], SetPasswordChar
- CEdit [MFC], SetReadOnly
- CEdit [MFC], SetRect
- CEdit [MFC], SetRectNP
- CEdit [MFC], SetSel
- CEdit [MFC], SetTabStops
- CEdit [MFC], ShowBalloonTip
- CEdit [MFC], Undo
ms.assetid: b1533c30-7f10-4663-88d3-8b7f2c9f7024
ms.openlocfilehash: ccf7445100977e1205bbcffe230e1919ac33adea
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916145"
---
# <a name="cedit-class"></a>CEdit Class

Fornisce la funzionalità di un controllo di modifica di Windows.

## <a name="syntax"></a>Sintassi

```
class CEdit : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CEdit::CEdit](#cedit)|Costruisce un `CEdit` oggetto controllo.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CEdit::CanUndo](#canundo)|Determina se un'operazione di modifica del controllo può essere annullata.|
|[CEdit:: CharFromPos](#charfrompos)|Recupera gli indici di riga e di caratteri per il carattere più vicino a una posizione specificata.|
|[CEdit:: Clear](#clear)|Elimina (Cancella) la selezione corrente (se presente) nel controllo di modifica.|
|[CEdit:: Copy](#copy)|Copia la selezione corrente (se presente) nel controllo di modifica negli Appunti nel formato CF_TEXT.|
|[CEdit:: create](#create)|Crea il controllo di modifica di Windows e lo collega all' `CEdit` oggetto.|
|[CEdit::Cut](#cut)|Elimina (taglia) la selezione corrente (se presente) nel controllo di modifica e copia il testo eliminato negli Appunti nel formato CF_TEXT.|
|[CEdit::EmptyUndoBuffer](#emptyundobuffer)|Reimposta (Cancella) il flag di annullamento di un controllo di modifica.|
|[CEdit:: FmtLines](#fmtlines)|Imposta l'inclusione di caratteri di interruzione di riga soft in un controllo di modifica a più righe.|
|[CEdit::GetCueBanner](#getcuebanner)|Recupera il testo visualizzato come spunto di testo, o suggerimento, in un controllo di modifica quando il controllo è vuoto e non ha lo stato attivo.|
|[CEdit::GetFirstVisibleLine](#getfirstvisibleline)|Determina la riga visibile in primo piano in un controllo di modifica.|
|[CEdit:: GetHandle](#gethandle)|Recupera un handle per la memoria attualmente allocata per un controllo di modifica a più righe.|
|[CEdit::GetHighlight](#gethighlight)|Ottiene gli indici dei caratteri iniziale e finale in un intervallo di testo evidenziato nel controllo di modifica corrente.|
|[CEdit::GetLimitText](#getlimittext)|Ottiene la quantità massima di testo `CEdit` che può contenere.|
|[CEdit::GetLine](#getline)|Recupera una riga di testo da un controllo di modifica.|
|[CEdit::GetLineCount](#getlinecount)|Recupera il numero di righe in un controllo di modifica a più righe.|
|[CEdit:: GetMargins](#getmargins)|Ottiene i margini sinistro e destro per questo `CEdit`oggetto.|
|[CEdit::GetModify](#getmodify)|Determina se il contenuto di un controllo di modifica è stato modificato.|
|[CEdit::GetPasswordChar](#getpasswordchar)|Recupera il carattere della password visualizzato in un controllo di modifica quando l'utente immette il testo.|
|[CEdit::GetRect](#getrect)|Ottiene il rettangolo di formattazione di un controllo di modifica.|
|[CEdit::GetSel](#getsel)|Ottiene la prima e l'ultima posizione dei caratteri della selezione corrente in un controllo di modifica.|
|[CEdit::HideBalloonTip](#hideballoontip)|Nasconde qualsiasi suggerimento del fumetto associato al controllo di modifica corrente.|
|[CEdit::LimitText](#limittext)|Limita la lunghezza del testo che l'utente può immettere in un controllo di modifica.|
|[CEdit::LineFromChar](#linefromchar)|Recupera il numero di riga della riga che contiene l'indice dei caratteri specificato.|
|[CEdit:: LineIndex](#lineindex)|Recupera l'indice dei caratteri di una riga all'interno di un controllo di modifica a più righe.|
|[CEdit:: LineLength](#linelength)|Recupera la lunghezza di una riga in un controllo di modifica.|
|[CEdit::LineScroll](#linescroll)|Scorre il testo di un controllo di modifica a più righe.|
|[CEdit::Paste](#paste)|Inserisce i dati dagli Appunti nel controllo di modifica in corrispondenza della posizione corrente del cursore. I dati vengono inseriti solo se gli Appunti contengono dati nel formato CF_TEXT.|
|[CEdit::PosFromChar](#posfromchar)|Recupera le coordinate dell'angolo superiore sinistro di un indice dei caratteri specificato.|
|[CEdit:: ReplaceSel](#replacesel)|Sostituisce la selezione corrente in un controllo di modifica con il testo specificato.|
|[CEdit::SetCueBanner](#setcuebanner)|Imposta il testo visualizzato come spunto di testo, o suggerimento, in un controllo di modifica quando il controllo è vuoto e non ha lo stato attivo.|
|[CEdit:: filehandle](#sethandle)|Imposta l'handle sulla memoria locale che verrà utilizzata da un controllo di modifica a più righe.|
|[CEdit::SetHighlight](#sethighlight)|Evidenzia un intervallo di testo visualizzato nel controllo di modifica corrente.|
|[CEdit::SetLimitText](#setlimittext)|Imposta la quantità massima di testo `CEdit` che può contenere.|
|[CEdit:: semargini](#setmargins)|Imposta i margini sinistro e destro per questo `CEdit`oggetto.|
|[CEdit::SetModify](#setmodify)|Imposta o cancella il flag di modifica per un controllo di modifica.|
|[CEdit::SetPasswordChar](#setpasswordchar)|Imposta o rimuove un carattere di password visualizzato in un controllo di modifica quando l'utente immette il testo.|
|[CEdit::SetReadOnly](#setreadonly)|Imposta lo stato di sola lettura di un controllo di modifica.|
|[CEdit::SetRect](#setrect)|Imposta il rettangolo di formattazione di un controllo di modifica a più righe e aggiorna il controllo.|
|[CEdit::SetRectNP](#setrectnp)|Imposta il rettangolo di formattazione di un controllo di modifica a più righe senza ridisegnare la finestra del controllo.|
|[CEdit::SetSel](#setsel)|Seleziona un intervallo di caratteri in un controllo di modifica.|
|[CEdit::SetTabStops](#settabstops)|Imposta la tabulazione in un controllo di modifica a più righe.|
|[CEdit::ShowBalloonTip](#showballoontip)|Visualizza un fumetto suggerimento associato al controllo di modifica corrente.|
|[CEdit::Undo](#undo)|Inverte l'ultima operazione di modifica del controllo.|

## <a name="remarks"></a>Note

Un controllo di modifica è una finestra figlio rettangolare in cui l'utente può immettere testo.

È possibile creare un controllo di modifica da un modello di finestra di dialogo o direttamente nel codice. In entrambi i casi, chiamare prima il `CEdit` costruttore per costruire `CEdit` l'oggetto, quindi chiamare la funzione membro [create](#create) per creare il controllo di `CEdit` modifica di Windows e collegarlo all'oggetto.

La costruzione può essere un processo in un unico passaggio in una classe `CEdit`derivata da. Scrivere un costruttore per la classe derivata e chiamare `Create` dall'interno del costruttore.

`CEdit`eredita funzionalità significative `CWnd`da. Per impostare e recuperare testo da un `CEdit` oggetto, usare le `CWnd` funzioni membro [SetWindowText](cwnd-class.md#setwindowtext) e [GetWindowText](cwnd-class.md#getwindowtext), che consentono di impostare o ottenere l'intero contenuto di un controllo di modifica, anche se si tratta di un controllo su più righe. Le righe di testo in un controllo su più righe sono separate dalle sequenze di caratteri ' \r\n '. Inoltre, se un controllo di modifica è su più righe, ottenere e impostare parte del testo del controllo chiamando le funzioni membro `CEdit` [GetLine](#getline), [SetSel](#setsel), [GetSel](#getsel) e [ReplaceSel](#replacesel).

Se si desidera gestire i messaggi di notifica di Windows inviati da un controllo di modifica al relativo elemento padre (in `CDialog`genere una classe derivata da), aggiungere una voce della mappa messaggi e una funzione membro del gestore del messaggio alla classe padre per ogni messaggio.

Ogni voce della mappa messaggi assume il formato seguente:

  **ON_** _Notifica_ di **(** _ID_ **,** _memberFxn_ **)**

dove `id` specifica l'ID della finestra figlio del controllo di modifica che invia la notifica `memberFxn` e è il nome della funzione membro padre scritta per gestire la notifica.

Il prototipo di funzione del padre è il seguente:

**afx_msg** void memberFxn **();**

Di seguito è riportato un elenco di potenziali voci della mappa messaggi e una descrizione dei case in cui verrebbero inviati al padre:

- ON_EN_CHANGE l'utente ha effettuato un'azione che potrebbe aver modificato il testo in un controllo di modifica. A differenza del messaggio di notifica EN_UPDATE, questo messaggio di notifica viene inviato dopo che Windows ha aggiornato la visualizzazione.

- ON_EN_ERRSPACE il controllo di modifica non può allocare memoria sufficiente per soddisfare una richiesta specifica.

- ON_EN_HSCROLL l'utente fa clic sulla barra di scorrimento orizzontale di un controllo di modifica. La finestra padre riceve una notifica prima che lo schermo venga aggiornato.

- ON_EN_KILLFOCUS il controllo di modifica perde lo stato attivo per l'input.

- ON_EN_MAXTEXT l'inserimento corrente ha superato il numero di caratteri specificato per il controllo di modifica ed è stato troncato. Inviato anche quando un controllo di modifica non ha lo stile ES_AUTOHSCROLL e il numero di caratteri da inserire supera la larghezza del controllo di modifica. Inviato anche quando un controllo di modifica non ha lo stile ES_AUTOVSCROLL e il numero totale di righe risultante da un inserimento di testo supera l'altezza del controllo di modifica.

- ON_EN_SETFOCUS inviato quando un controllo di modifica riceve lo stato attivo per l'input.

- ON_EN_UPDATE il controllo di modifica sta per visualizzare il testo modificato. Inviato dopo che il controllo ha formattato il testo ma prima di eseguire lo screening del testo in modo da poter modificare le dimensioni della finestra, se necessario.

- ON_EN_VSCROLL l'utente fa clic sulla barra di scorrimento verticale di un controllo di modifica. La finestra padre riceve una notifica prima che lo schermo venga aggiornato.

Se si crea un `CEdit` oggetto in una finestra di dialogo, `CEdit` l'oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si crea un `CEdit` oggetto da una risorsa finestra di dialogo mediante l'editor finestre `CEdit` , l'oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si crea un `CEdit` oggetto all'interno di una finestra, potrebbe essere necessario eliminarlo. Se si crea l' `CEdit` oggetto nello stack, questo viene eliminato automaticamente. Se si crea l' `CEdit` oggetto nell'heap usando la **nuova** funzione, è necessario chiamare **Delete** nell'oggetto per eliminarlo quando l'utente termina il controllo di modifica di Windows. Se si alloca memoria nell' `CEdit` oggetto, eseguire l'override del `CEdit` distruttore per eliminare le allocazioni.

Per modificare determinati stili in un controllo di modifica, ad esempio ES_READONLY, è necessario inviare messaggi specifici al controllo anziché utilizzare [ModifyStyle](cwnd-class.md#modifystyle). Vedere [modificare gli stili dei controlli](/windows/desktop/Controls/edit-control-styles) nella Windows SDK.

Per ulteriori informazioni su `CEdit`, vedere [controlli](../../mfc/controls-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](cobject-class.md)

[CCmdTarget](ccmdtarget-class.md)

[CWnd](cwnd-class.md)

`CEdit`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="canundo"></a>  CEdit::CanUndo

Chiamare questa funzione per determinare se l'ultima operazione di modifica può essere annullata.

```
BOOL CanUndo() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'ultima operazione di modifica può essere annullata da una `Undo` chiamata alla funzione membro; 0 se non è possibile annullarla.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [EM_CANUNDO](/windows/desktop/Controls/em-canundo) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEdit:: Undo](#undo).

##  <a name="cedit"></a>  CEdit::CEdit

Costruisce un oggetto `CEdit`.

```
CEdit();
```

### <a name="remarks"></a>Note

Usare [create](#create) per costruire il controllo di modifica di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#1](../../mfc/reference/codesnippet/cpp/cedit-class_1.cpp)]

##  <a name="charfrompos"></a>  CEdit::CharFromPos

Chiamare questa funzione per recuperare gli indici di riga e di caratteri in base zero del carattere più vicino al punto specificato in `CEdit` questo controllo.

```
int CharFromPos(CPoint pt) const;
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Coordinate di un punto nell'area client di questo `CEdit` oggetto.

### <a name="return-value"></a>Valore restituito

Indice dei caratteri nella parola di basso livello e indice di riga nella parola più ordinata.

### <a name="remarks"></a>Note

> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4,0.

Per ulteriori informazioni, vedere [EM_CHARFROMPOS](/windows/desktop/Controls/em-charfrompos) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#3](../../mfc/reference/codesnippet/cpp/cedit-class_2.cpp)]

##  <a name="clear"></a>  CEdit::Clear

Chiamare questa funzione per eliminare (cancellare) la selezione corrente (se presente) nel controllo di modifica.

```
void Clear();
```

### <a name="remarks"></a>Note

L'eliminazione eseguita da `Clear` può essere annullata chiamando la funzione membro [Undo](#undo) .

Per eliminare la selezione corrente e inserire il contenuto eliminato negli Appunti, chiamare la funzione membro [Cut](#cut) .

Per ulteriori informazioni, vedere [WM_CLEAR](/windows/desktop/dataxchg/wm-clear) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#4](../../mfc/reference/codesnippet/cpp/cedit-class_3.cpp)]

##  <a name="copy"></a>  CEdit::Copy

Chiamare questa funzione per fare in modo che la selezione corrente (se presente) nel controllo di modifica venga annullata negli Appunti nel formato CF_TEXT.

```
void Copy();
```

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [WM_COPY](/windows/desktop/dataxchg/wm-copy) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#5](../../mfc/reference/codesnippet/cpp/cedit-class_4.cpp)]

##  <a name="create"></a>  CEdit::Create

Crea il controllo di modifica di Windows e lo collega all' `CEdit` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo di modifica. Applicare qualsiasi combinazione di [stili di modifica](styles-used-by-mfc.md#edit-styles) al controllo.

*rect*<br/>
Specifica la posizione e le dimensioni del controllo di modifica. Può essere un `CRect` oggetto o `RECT` una struttura.

*pParentWnd*<br/>
Specifica la finestra padre del controllo di modifica (in `CDialog`genere un oggetto). Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo di modifica.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Si costruisce `CEdit` un oggetto in due passaggi. Chiamare innanzitutto il `CEdit` costruttore e quindi chiamare `Create`, che crea il controllo di modifica di Windows e lo `CEdit` collega all'oggetto.

Quando `Create` viene eseguito, Windows invia i messaggi [WM_NCCREATE](/windows/desktop/winmsg/wm-nccreate), [WM_NCCALCSIZE](/windows/desktop/winmsg/wm-nccalcsize), [WM_CREATE](/windows/desktop/winmsg/wm-create)e [WM_GETMINMAXINFO](/windows/desktop/winmsg/wm-getminmaxinfo) al controllo di modifica.

Questi messaggi vengono gestiti per impostazione predefinita dalle funzioni membro [OnNcCreate](cwnd-class.md#onnccreate), [OnNcCalcSize](cwnd-class.md#onnccalcsize), [OnCreate](cwnd-class.md#oncreate) e [OnGetMinMaxInfo](cwnd-class.md#ongetminmaxinfo) nella classe di base `CWnd`. Per estendere la gestione dei messaggi predefinita, derivare una `CEdit`classe da, aggiungere una mappa messaggi alla nuova classe ed eseguire l'override delle funzioni membro del gestore di messaggi sopra indicate. Eseguire `OnCreate`l'override, ad esempio, per eseguire l'inizializzazione necessaria per la nuova classe.

Applicare gli [stili della finestra](styles-used-by-mfc.md#window-styles) seguenti a un controllo di modifica.

- WS_CHILD sempre

- WS_VISIBLE in genere

- WS_DISABLED raramente

- WS_GROUP per raggruppare i controlli

- WS_TABSTOP includere il controllo di modifica nell'ordine di tabulazione

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#2](../../mfc/reference/codesnippet/cpp/cedit-class_5.cpp)]

##  <a name="cut"></a>  CEdit::Cut

Chiamare questa funzione per eliminare (tagliare) la selezione corrente (se presente) nel controllo di modifica e copiare il testo eliminato negli Appunti nel formato CF_TEXT.

```
void Cut();
```

### <a name="remarks"></a>Note

L'eliminazione eseguita da `Cut` può essere annullata chiamando la funzione membro [Undo](#undo) .

Per eliminare la selezione corrente senza inserire il testo eliminato negli Appunti, chiamare la funzione membro [Clear](#clear) .

Per ulteriori informazioni, vedere [WM_CUT](/windows/desktop/dataxchg/wm-cut) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#6](../../mfc/reference/codesnippet/cpp/cedit-class_6.cpp)]

##  <a name="emptyundobuffer"></a>  CEdit::EmptyUndoBuffer

Chiamare questa funzione per reimpostare (cancellare) il flag di annullamento di un controllo di modifica.

```
void EmptyUndoBuffer();
```

### <a name="remarks"></a>Note

Il controllo di modifica ora non sarà in grado di annullare l'ultima operazione. Il flag di annullamento viene impostato ogni volta che un'operazione all'interno del controllo di modifica può essere annullata.

Il flag di annullamento viene cancellato automaticamente ogni volta che vengono chiamate le funzioni membro [SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext) o [SetHandle](#sethandle)`CWnd`.

Per ulteriori informazioni, vedere [EM_EMPTYUNDOBUFFER](/windows/desktop/Controls/em-emptyundobuffer) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#7](../../mfc/reference/codesnippet/cpp/cedit-class_7.cpp)]

##  <a name="fmtlines"></a>  CEdit::FmtLines

Chiamare questa funzione per impostare l'inclusione dei caratteri di interruzione di riga soft in un controllo di modifica a più righe.

```
BOOL FmtLines(BOOL bAddEOL);
```

### <a name="parameters"></a>Parametri

*bAddEOL*<br/>
Specifica se devono essere inseriti caratteri di interruzioni di riga soft. Il valore TRUE inserisce i caratteri; il valore FALSE li rimuove.

### <a name="return-value"></a>Valore restituito

Diverso da zero se si verifica una formattazione; in caso contrario, 0.

### <a name="remarks"></a>Note

Un'interruzione di riga flessibile è costituita da due ritorni a capo e un avanzamento riga inserito alla fine di una riga che è interrotta a causa del ritorno a capo automatico. Un'interruzioni di riga dura è costituita da un ritorno a capo e da un avanzamento riga. Le righe che terminano con un'interruzioni di riga rigida non sono interessate da `FmtLines`.

Windows risponderà solo se l' `CEdit` oggetto è un controllo di modifica a più righe.

`FmtLines` influiscono solo sul buffer restituito da [GetHandle](#gethandle) e sul testo restituito da [WM_GETTEXT](/windows/desktop/winmsg/wm-gettext). Non ha alcun effetto sulla visualizzazione del testo all'interno del controllo di modifica.

Per ulteriori informazioni, vedere [EM_FMTLINES](/windows/desktop/Controls/em-fmtlines) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#8](../../mfc/reference/codesnippet/cpp/cedit-class_8.cpp)]

##  <a name="getcuebanner"></a>  CEdit::GetCueBanner

Recupera il testo visualizzato come spunto di testo, o suggerimento, in un controllo di modifica quando il controllo è vuoto.

```
BOOL GetCueBanner(
    LPWSTR lpszText,
    int cchText) const;

CString GetCueBanner() const;
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
out Puntatore a una stringa che contiene il testo del suggerimento.

*cchText*<br/>
in Numero di caratteri che possono essere ricevuti. Questo numero include il carattere NULL di terminazione.

### <a name="return-value"></a>Valore restituito

Per il primo overload, TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

Per il secondo overload, [CString](../../atl-mfc-shared/using-cstring.md) che contiene il testo del CUE se il metodo ha esito positivo; in caso contrario, stringa vuota ("").

### <a name="remarks"></a>Note

Questo metodo invia il messaggio [EM_GETCUEBANNER](/windows/desktop/Controls/em-getcuebanner) , descritto nella Windows SDK. Per ulteriori informazioni, vedere la macro [Edit_GetCueBannerText](/windows/desktop/api/commctrl/nf-commctrl-edit_getcuebannertext) .

##  <a name="getfirstvisibleline"></a>  CEdit::GetFirstVisibleLine

Chiamare questa funzione per determinare la riga più in alto visibile in un controllo di modifica.

```
int GetFirstVisibleLine() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero della riga visibile in primo piano. Per i controlli di modifica a riga singola, il valore restituito è 0.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [EM_GETFIRSTVISIBLELINE](/windows/desktop/Controls/em-getfirstvisibleline) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#9](../../mfc/reference/codesnippet/cpp/cedit-class_9.cpp)]

##  <a name="gethandle"></a>  CEdit::GetHandle

Chiamare questa funzione per recuperare un handle per la memoria attualmente allocata per un controllo di modifica a più righe.

```
HLOCAL GetHandle() const;
```

### <a name="return-value"></a>Valore restituito

Handle di memoria locale che identifica il buffer che contiene il contenuto del controllo di modifica. Se si verifica un errore, ad esempio l'invio del messaggio a un controllo di modifica a riga singola, il valore restituito è 0.

### <a name="remarks"></a>Note

L'handle è un handle di memoria locale e può essere usato da qualsiasi funzione **locale** di memoria di Windows che accetta un handle di memoria locale come parametro.

`GetHandle`viene elaborato solo da controlli di modifica su più righe.

Chiamare `GetHandle` per un controllo di modifica a più righe in una finestra di dialogo solo se la finestra di dialogo è stata creata con il flag di stile DS_LOCALEDIT impostato. Se lo stile DS_LOCALEDIT non è impostato, si otterrà comunque un valore restituito diverso da zero, ma non sarà possibile usare il valore restituito.

> [!NOTE]
> `GetHandle`non funzionerà con Windows 95/98. Se si chiama `GetHandle` in Windows 95/98, viene restituito null. `GetHandle`funzionerà come descritto in Windows NT, versioni 3,51 e successive.

Per ulteriori informazioni, vedere [EM_GETHANDLE](/windows/desktop/Controls/em-gethandle) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#10](../../mfc/reference/codesnippet/cpp/cedit-class_10.cpp)]

##  <a name="gethighlight"></a>  CEdit::GetHighlight

Ottiene gli indici del primo e dell'ultimo carattere di un intervallo di testo evidenziato nel controllo di modifica corrente.

```
BOOL GetHighlight(
    int* pichStart,
    int* pichEnd) const;
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|---------------|-----------------|
|*pichStart*|out Indice in base zero del primo carattere nell'intervallo di testo evidenziato.|
|*pichEnd*|out Indice in base zero dell'ultimo carattere nell'intervallo di testo evidenziato.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il messaggio [EM_GETHILITE](/windows/desktop/Controls/em-gethilite) , descritto nella Windows SDK. Sia `SetHighlight` che `GetHighlight` attualmente sono abilitate solo per le compilazioni Unicode.

##  <a name="getlimittext"></a>  CEdit::GetLimitText

Chiamare questa funzione membro per ottenere il limite di testo per `CEdit` questo oggetto.

```
UINT GetLimitText() const;
```

### <a name="return-value"></a>Valore restituito

Limite di testo corrente, in TCHARs, per questo `CEdit` oggetto.

### <a name="remarks"></a>Note

Il limite di testo è la quantità massima di testo, in TCHARs, che il controllo di modifica può accettare.

> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4,0.

Per ulteriori informazioni, vedere [EM_GETLIMITTEXT](/windows/desktop/Controls/em-getlimittext) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#11](../../mfc/reference/codesnippet/cpp/cedit-class_11.cpp)]

##  <a name="getline"></a>  CEdit::GetLine

Chiamare questa funzione per recuperare una riga di testo da un controllo di modifica e posizionarla in *lpszBuffer*.

```
int GetLine(
    int nIndex,
    LPTSTR lpszBuffer) const;

int GetLine(
    int nIndex,
    LPTSTR lpszBuffer,
    int nMaxLength) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica il numero di riga da recuperare da un controllo di modifica a più righe. I numeri di riga sono in base zero; il valore 0 specifica la prima riga. Questo parametro viene ignorato da un controllo di modifica a riga singola.

*lpszBuffer*<br/>
Punta al buffer che riceve una copia della riga. La prima parola del buffer deve specificare il numero massimo di TCHARs che possono essere copiati nel buffer.

*nMaxLength*<br/>
Specifica il numero massimo di caratteri TCHAR che possono essere copiati nel buffer. `GetLine`inserisce questo valore nella prima parola di *lpszBuffer* prima di effettuare la chiamata a Windows.

### <a name="return-value"></a>Valore restituito

Numero di caratteri attualmente copiati. Il valore restituito è 0 se il numero di riga specificato da *nIndex* è maggiore del numero di righe nel controllo di modifica.

### <a name="remarks"></a>Note

La riga copiata non contiene un carattere di terminazione null.

Per ulteriori informazioni, vedere [EM_GETLINE](/windows/desktop/Controls/em-getline) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEdit:: GetLineCount](#getlinecount).

##  <a name="getlinecount"></a>  CEdit::GetLineCount

Chiamare questa funzione per recuperare il numero di righe in un controllo di modifica a più righe.

```
int GetLineCount() const;
```

### <a name="return-value"></a>Valore restituito

Intero contenente il numero di righe nel controllo di modifica a più righe. Se nel controllo di modifica non è stato immesso testo, il valore restituito è 1.

### <a name="remarks"></a>Note

`GetLineCount`viene elaborato solo da controlli di modifica su più righe.

Per ulteriori informazioni, vedere [EM_GETLINECOUNT](/windows/desktop/Controls/em-getlinecount) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#12](../../mfc/reference/codesnippet/cpp/cedit-class_12.cpp)]

##  <a name="getmargins"></a>  CEdit::GetMargins

Chiamare questa funzione membro per recuperare i margini sinistro e destro di questo controllo di modifica.

```
DWORD GetMargins() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza del margine sinistro nella parola di ordine inferiore e larghezza del margine destro nella parola più alta.

### <a name="remarks"></a>Note

I margini sono misurati in pixel.

> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4,0.

Per ulteriori informazioni, vedere [EM_GETMARGINS](/windows/desktop/Controls/em-getmargins) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEditView:: GetEditCtrl](ceditview-class.md#geteditctrl).

##  <a name="getmodify"></a>  CEdit::GetModify

Chiamare questa funzione per determinare se il contenuto di un controllo di modifica è stato modificato.

```
BOOL GetModify() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il contenuto del controllo di modifica è stato modificato. 0 se rimangono invariati.

### <a name="remarks"></a>Note

Windows mantiene un flag interno che indica se il contenuto del controllo di modifica è stato modificato. Questo flag viene cancellato quando il controllo di modifica viene creato per la prima volta e può anche essere cancellato chiamando la funzione membro [SetModify](#setmodify).

Per ulteriori informazioni, vedere [EM_GETMODIFY](/windows/desktop/Controls/em-getmodify) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#13](../../mfc/reference/codesnippet/cpp/cedit-class_13.cpp)]

##  <a name="getpasswordchar"></a>  CEdit::GetPasswordChar

Chiamare questa funzione per recuperare il carattere della password visualizzato in un controllo di modifica quando l'utente immette il testo.

```
TCHAR GetPasswordChar() const;
```

### <a name="return-value"></a>Valore restituito

Specifica il carattere da visualizzare anziché il carattere digitato dall'utente. Il valore restituito è NULL se non esiste alcun carattere di password.

### <a name="remarks"></a>Note

Se si crea il controllo di modifica con lo stile ES_PASSWORD, la DLL che supporta il controllo determina il carattere della password predefinito. Il manifesto o il metodo [InitCommonControlsEx](/windows/desktop/api/commctrl/nf-commctrl-initcommoncontrolsex) determina quale dll supporta il controllo di modifica. Se user32. dll supporta il controllo di modifica, il carattere della password predefinito è asterisco (' *', U + 002A). Se Comctl32. dll versione 6 supporta il controllo di modifica, il carattere predefinito è il cerchio nero (' ●', U + 25CF). Per ulteriori informazioni su quali DLL e versione supportano i controlli comuni, vedere la pagina relativa alle [versioni dei controlli comuni](/previous-versions/windows/desktop/legacy/bb776779\(v=vs.85\))e della shell.

Questo metodo invia il messaggio [EM_GETPASSWORDCHAR](/windows/desktop/Controls/em-getpasswordchar) , descritto nella Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#14](../../mfc/reference/codesnippet/cpp/cedit-class_14.cpp)]

##  <a name="getrect"></a>CEdit:: GetRect

Chiamare questa funzione per ottenere il rettangolo di formattazione di un controllo di modifica.

```
void GetRect(LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta alla `RECT` struttura che riceve il rettangolo di formattazione.

### <a name="remarks"></a>Note

Il rettangolo di formattazione è il rettangolo di limitazione del testo, che è indipendente dalle dimensioni della finestra di modifica del controllo.

Il rettangolo di formattazione di un controllo di modifica a più righe può essere modificato dalle funzioni membro [SetRect](#setrect) e [SetRectNP](#setrectnp)

Per ulteriori informazioni, vedere [EM_GETRECT](/windows/desktop/Controls/em-getrect) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEdit:: LimitText](#limittext).

##  <a name="getsel"></a>  CEdit::GetSel

Chiamare questa funzione per ottenere le posizioni dei caratteri iniziali e finali della selezione corrente (se presente) in un controllo di modifica, usando il valore restituito o i parametri.

```
DWORD GetSel() const;

void GetSel(
    int& nStartChar,
    int& nEndChar) const;
```

### <a name="parameters"></a>Parametri

*nStartChar*<br/>
Riferimento a un intero che riceverà la posizione del primo carattere nella selezione corrente.

*nEndChar*<br/>
Riferimento a un intero che riceverà la posizione del primo carattere non selezionato oltre la fine della selezione corrente.

### <a name="return-value"></a>Valore restituito

La versione che restituisce un valore DWORD restituisce un valore che contiene la posizione iniziale nella parola di basso livello e la posizione del primo carattere non selezionato dopo la fine della selezione nella parola più ordinata.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [EM_GETSEL](/windows/desktop/Controls/em-getsel) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#15](../../mfc/reference/codesnippet/cpp/cedit-class_15.cpp)]

##  <a name="hideballoontip"></a>  CEdit::HideBalloonTip

Nasconde qualsiasi suggerimento del fumetto associato al controllo di modifica corrente.

```
BOOL HideBalloonTip();
```

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questa funzione Invia il messaggio [EM_HIDEBALLOONTIP](/windows/desktop/Controls/em-hideballoontip) , descritto nella Windows SDK.

##  <a name="limittext"></a>  CEdit::LimitText

Chiamare questa funzione per limitare la lunghezza del testo che l'utente può immettere in un controllo di modifica.

```
void LimitText(int nChars = 0);
```

### <a name="parameters"></a>Parametri

*nChars*<br/>
Specifica la lunghezza (in TCHARs) del testo che l'utente può immettere. Se questo parametro è 0, la lunghezza del testo è impostata su UINT_MAX bytes. Comportamento predefinito.

### <a name="remarks"></a>Note

La modifica del limite di testo limita solo il testo che l'utente può immettere. Non ha alcun effetto su nessun testo già presente nel controllo di modifica né sulla lunghezza del testo copiato nel controllo di modifica da parte della funzione membro [SetWindowText](cwnd-class.md#setwindowtext) in `CWnd`. Se un'applicazione usa la `SetWindowText` funzione per inserire più testo in un controllo di modifica rispetto a quanto specificato nella chiamata `LimitText`a, l'utente può eliminare qualsiasi testo all'interno del controllo di modifica. Tuttavia, il limite di testo impedisce all'utente di sostituire il testo esistente con il nuovo testo, a meno che l'eliminazione della selezione corrente provochi il calo del testo al di sotto del limite di testo.

> [!NOTE]
>  In Win32 (Windows NT e Windows 95/98), [SetLimitText](#setlimittext) sostituisce questa funzione.

Per ulteriori informazioni, vedere [EM_LIMITTEXT](/windows/desktop/Controls/em-limittext) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#17](../../mfc/reference/codesnippet/cpp/cedit-class_16.cpp)]

##  <a name="linefromchar"></a>  CEdit::LineFromChar

Chiamare questa funzione per recuperare il numero di riga della riga che contiene l'indice dei caratteri specificato.

```
int LineFromChar(int nIndex = -1) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene il valore di indice in base zero per il carattere desiderato nel testo del controllo di modifica o contiene-1. Se *nIndex* è-1, viene specificata la riga corrente, ovvero la riga che contiene il punto di inserimento.

### <a name="return-value"></a>Valore restituito

Numero di riga in base zero della riga che contiene l'indice del carattere specificato da *nIndex*. Se *nIndex* è-1, viene restituito il numero della riga che contiene il primo carattere della selezione. Se non è presente alcuna selezione, viene restituito il numero di riga corrente.

### <a name="remarks"></a>Note

Un indice dei caratteri è il numero di caratteri a partire dall'inizio del controllo di modifica.

Questa funzione membro viene utilizzata solo dai controlli di modifica a più righe.

Per ulteriori informazioni, vedere [EM_LINEFROMCHAR](/windows/desktop/Controls/em-linefromchar) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#18](../../mfc/reference/codesnippet/cpp/cedit-class_17.cpp)]

##  <a name="lineindex"></a>  CEdit::LineIndex

Chiamare questa funzione per recuperare l'indice dei caratteri di una riga all'interno di un controllo di modifica a più righe.

```
int LineIndex(int nLine = -1) const;
```

### <a name="parameters"></a>Parametri

*nLine*<br/>
Contiene il valore di indice per la riga desiderata nel testo del controllo di modifica o contiene-1. Se *nLine* è-1, viene specificata la riga corrente, ovvero la riga che contiene il punto di inserimento.

### <a name="return-value"></a>Valore restituito

Indice dei caratteri della riga specificata in *nLine* o-1 se il numero di riga specificato è maggiore del numero di righe nel controllo di modifica.

### <a name="remarks"></a>Note

L'indice dei caratteri è il numero di caratteri dall'inizio del controllo di modifica alla riga specificata.

Questa funzione membro viene elaborata solo da controlli di modifica su più righe.

Per ulteriori informazioni, vedere [EM_LINEINDEX](/windows/desktop/controls/em-lineindex) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#19](../../mfc/reference/codesnippet/cpp/cedit-class_18.cpp)]

##  <a name="linelength"></a>CEdit:: LineLength

Recupera la lunghezza di una riga in un controllo di modifica.

```
int LineLength(int nLine = -1) const;
```

### <a name="parameters"></a>Parametri

*nLine*<br/>
Indice in base zero di un carattere nella riga di cui è necessario recuperare la lunghezza. Il valore predefinito è -1.

### <a name="return-value"></a>Valore restituito

Per i controlli di modifica a riga singola, il valore restituito è la lunghezza, in TCHARs, del testo nel controllo di modifica.

Per i controlli di modifica su più righe, il valore restituito è la lunghezza, in TCHARs, della riga specificata dal parametro *nLine* . Per il testo ANSI, la lunghezza è il numero di byte nella riga; per il testo Unicode, la lunghezza è il numero di caratteri nella riga. La lunghezza non include il carattere di ritorno a capo alla fine della riga.

Se il parametro *nLine* è maggiore del numero di caratteri nel controllo, il valore restituito è zero.

Se il parametro *nLine* è-1, il valore restituito è il numero di caratteri non selezionati nelle righe che contengono caratteri selezionati. Se, ad esempio, la selezione si estende dal quarto carattere di una riga all'ottavo carattere alla fine della riga successiva, il valore restituito è 10. Ovvero tre caratteri nella prima riga e sette sul successivo.

Per ulteriori informazioni sul tipo TCHAR, vedere la riga TCHAR nella tabella nei tipi di [dati di Windows](/windows/desktop/WinProg/windows-data-types).

### <a name="remarks"></a>Note

Questo metodo è supportato dal messaggio [EM_LINELENGTH](/windows/desktop/Controls/em-linelength) , descritto nella Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEdit:: LineIndex](#lineindex).

##  <a name="linescroll"></a>  CEdit::LineScroll

Chiamare questa funzione per scorrere il testo di un controllo di modifica a più righe.

```
void LineScroll(
    int nLines,
    int nChars = 0);
```

### <a name="parameters"></a>Parametri

*nLines*<br/>
Specifica il numero di righe da scorrere verticalmente.

*nChars*<br/>
Specifica il numero di posizioni dei caratteri da scorrere orizzontalmente. Questo valore viene ignorato se il controllo di modifica dispone dello stile ES_RIGHT o ES_CENTER.

### <a name="remarks"></a>Note

Questa funzione membro viene elaborata solo da controlli di modifica su più righe.

Il controllo di modifica non scorre verticalmente oltre l'ultima riga di testo nel controllo di modifica. Se la riga corrente più il numero di righe specificato da *nLines* supera il numero totale di righe nel controllo di modifica, il valore viene regolato in modo che l'ultima riga del controllo di modifica venga spostata all'inizio della finestra di modifica del controllo.

`LineScroll`può essere usato per scorrere orizzontalmente oltre l'ultimo carattere di una riga.

Per ulteriori informazioni, vedere [EM_LINESCROLL](/windows/desktop/Controls/em-linescroll) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEdit:: GetFirstVisibleLine](#getfirstvisibleline).

##  <a name="paste"></a>  CEdit::Paste

Chiamare questa funzione per inserire i dati dagli Appunti nell'oggetto `CEdit` in corrispondenza del punto di inserimento.

```
void Paste();
```

### <a name="remarks"></a>Note

I dati vengono inseriti solo se gli Appunti contengono dati nel formato CF_TEXT.

Per ulteriori informazioni, vedere [WM_PASTE](/windows/desktop/dataxchg/wm-paste) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#20](../../mfc/reference/codesnippet/cpp/cedit-class_19.cpp)]

##  <a name="posfromchar"></a>  CEdit::PosFromChar

Chiamare questa funzione per ottenere la posizione (angolo superiore sinistro) di un carattere specificato all'interno di `CEdit` questo oggetto.

```
CPoint PosFromChar(UINT nChar) const;
```

### <a name="parameters"></a>Parametri

*nChar*<br/>
Indice in base zero del carattere specificato.

### <a name="return-value"></a>Valore restituito

Coordinate dell'angolo superiore sinistro del carattere specificato da *nchar*.

### <a name="remarks"></a>Note

Il carattere viene specificato assegnando il relativo valore di indice in base zero. Se *nchar* è maggiore dell'indice dell'ultimo carattere in questo `CEdit` oggetto, il valore restituito specifica le coordinate della posizione del carattere subito dopo l'ultimo carattere in questo `CEdit` oggetto.

> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4,0.

Per ulteriori informazioni, vedere [EM_POSFROMCHAR](/windows/desktop/Controls/em-posfromchar) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEdit:: LineFromChar](#linefromchar).

##  <a name="replacesel"></a>  CEdit::ReplaceSel

Chiamare questa funzione per sostituire la selezione corrente in un controllo di modifica con il testo specificato da *lpszNewText*.

```
void ReplaceSel(LPCTSTR lpszNewText, BOOL bCanUndo = FALSE);
```

### <a name="parameters"></a>Parametri

*lpszNewText*<br/>
Punta a una stringa con terminazione null che contiene il testo di sostituzione.

*bCanUndo*<br/>
Per specificare che questa funzione può essere annullata, impostare il valore di questo parametro su TRUE. Il valore predefinito è FALSE.

### <a name="remarks"></a>Note

Sostituisce solo una parte del testo in un controllo di modifica. Se si vuole sostituire tutto il testo, usare la funzione membro [CWnd:: SetWindowText](cwnd-class.md#setwindowtext) .

Se non è presente alcuna selezione corrente, il testo di sostituzione viene inserito nella posizione corrente del cursore.

Per ulteriori informazioni, vedere [EM_REPLACESEL](/windows/desktop/Controls/em-replacesel) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEdit:: LineIndex](#lineindex).

##  <a name="setcuebanner"></a>  CEdit::SetCueBanner

Imposta il testo visualizzato come spunto di testo, o suggerimento, in un controllo di modifica quando il controllo è vuoto.

```
BOOL SetCueBanner(LPCWSTR lpszText);

BOOL SetCueBanner(
    LPCWSTR lpszText,
    BOOL fDrawWhenFocused = FALSE);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
in Puntatore a una stringa contenente il cue da visualizzare nel controllo di modifica.

*fDrawWhenFocused*<br/>
in Se FALSE, l'intestazione cue non viene disegnata quando l'utente fa clic nel controllo di modifica e assegna al controllo lo stato attivo.

Se TRUE, l'intestazione Cue viene disegnata anche quando il controllo ha lo stato attivo. Il banner cue scompare quando l'utente inizia a digitare il controllo.

Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il messaggio [EM_SETCUEBANNER](/windows/desktop/Controls/em-setcuebanner) , descritto nella Windows SDK. Per ulteriori informazioni, vedere la macro [Edit_SetCueBannerTextFocused](/windows/desktop/api/commctrl/nf-commctrl-edit_setcuebannertextfocused) .

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato il metodo [CEdit:: SetCueBanner](#setcuebanner) .

[!code-cpp[NVC_MFC_CEdit_s1#2](../../mfc/reference/codesnippet/cpp/cedit-class_20.cpp)]

##  <a name="sethandle"></a>  CEdit::SetHandle

Chiamare questa funzione per impostare l'handle sulla memoria locale che verrà utilizzata da un controllo di modifica a più righe.

```
void SetHandle(HLOCAL hBuffer);
```

### <a name="parameters"></a>Parametri

*hBuffer*<br/>
Contiene un handle per la memoria locale. Questo handle deve essere stato creato da una chiamata precedente alla funzione di Windows [LocalAlloc](/windows/desktop/api/winbase/nf-winbase-localalloc) usando il flag LMEM_MOVEABLE. Si presuppone che la memoria contenga una stringa con terminazione null. In caso contrario, il primo byte della memoria allocata deve essere impostato su 0.

### <a name="remarks"></a>Note

Il controllo di modifica utilizzerà quindi questo buffer per archiviare il testo attualmente visualizzato anziché allocare il proprio buffer.

Questa funzione membro viene elaborata solo da controlli di modifica su più righe.

Prima che un'applicazione imposti un nuovo handle di memoria, deve usare la funzione membro [GetHandle](#gethandle) per ottenere l'handle per il buffer di memoria corrente e liberare tale memoria usando la funzione di Windows `LocalFree`.

`SetHandle` cancella il buffer di annullamento (la funzione membro [CanUndo](#canundo) quindi restituisce 0) e il flag di modifica interno (la funzione membro [GetModify](#getmodify) restituisce 0). La finestra di modifica del controllo viene ridisegnato.

È possibile utilizzare questa funzione membro in un controllo di modifica a più righe in una finestra di dialogo solo se è stata creata la finestra di dialogo con il flag di stile DS_LOCALEDIT impostato.

> [!NOTE]
> `GetHandle`non funzionerà con Windows 95/98. Se si chiama `GetHandle` in Windows 95/98, viene restituito null. `GetHandle`funzionerà come descritto in Windows NT, versioni 3,51 e successive.

Per ulteriori informazioni, vedere [EM_SETHANDLE](/windows/desktop/Controls/em-sethandle), [LocalAlloc](/windows/desktop/api/winbase/nf-winbase-localalloc)e [LocalFree](/windows/desktop/api/winbase/nf-winbase-localfree) nella Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#22](../../mfc/reference/codesnippet/cpp/cedit-class_21.cpp)]

##  <a name="sethighlight"></a>  CEdit::SetHighlight

Evidenzia un intervallo di testo visualizzato nel controllo di modifica corrente.

```
void SetHighlight(
    int ichStart,
    int ichEnd);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*ichStart*|in Indice in base zero del primo carattere nell'intervallo di testo da evidenziare.|
|*ichEnd*|in Indice in base zero dell'ultimo carattere nell'intervallo di testo da evidenziare.|

### <a name="remarks"></a>Note

Questo metodo invia il messaggio [EM_SETHILITE](/windows/desktop/Controls/em-sethilite) , descritto nella Windows SDK.  Questo metodo invia il messaggio [EM_SETHILITE](/windows/desktop/Controls/em-sethilite) , descritto nella Windows SDK. E sono `GetHighlight` abilitati solo per le compilazioni Unicode. `SetHighlight`

##  <a name="setlimittext"></a>  CEdit::SetLimitText

Chiamare questa funzione membro per impostare il limite di testo per `CEdit` questo oggetto.

```
void SetLimitText(UINT nMax);
```

### <a name="parameters"></a>Parametri

*nMax*<br/>
Il nuovo limite di testo, in caratteri.

### <a name="remarks"></a>Note

Il limite di testo è la quantità massima di testo, in caratteri, che il controllo di modifica può accettare.

La modifica del limite di testo limita solo il testo che l'utente può immettere. Non ha alcun effetto su nessun testo già presente nel controllo di modifica né sulla lunghezza del testo copiato nel controllo di modifica da parte della funzione membro [SetWindowText](cwnd-class.md#setwindowtext) in `CWnd`. Se un'applicazione usa la `SetWindowText` funzione per inserire più testo in un controllo di modifica rispetto a quanto specificato nella chiamata `LimitText`a, l'utente può eliminare qualsiasi testo all'interno del controllo di modifica. Tuttavia, il limite di testo impedisce all'utente di sostituire il testo esistente con il nuovo testo, a meno che l'eliminazione della selezione corrente provochi il calo del testo al di sotto del limite di testo.

Questa funzione sostituisce [LimitText](#limittext) in Win32.

Per ulteriori informazioni, vedere [EM_SETLIMITTEXT](/windows/desktop/Controls/em-setlimittext) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEditView:: GetEditCtrl](ceditview-class.md#geteditctrl).

##  <a name="setmargins"></a>  CEdit::SetMargins

Chiamare questo metodo per impostare i margini sinistro e destro di questo controllo di modifica.

```
void SetMargins(
    UINT nLeft,
    UINT nRight);
```

### <a name="parameters"></a>Parametri

*nLeft*<br/>
Larghezza del nuovo margine sinistro, in pixel.

*nRight*<br/>
Larghezza, in pixel, del nuovo margine destro.

### <a name="remarks"></a>Note

> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4,0.

Per ulteriori informazioni, vedere [EM_SETMARGINS](/windows/desktop/Controls/em-setmargins) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEditView:: GetEditCtrl](ceditview-class.md#geteditctrl).

##  <a name="setmodify"></a>  CEdit::SetModify

Chiamare questa funzione per impostare o deselezionare il flag modificato per un controllo di modifica.

```
void SetModify(BOOL bModified = TRUE);
```

### <a name="parameters"></a>Parametri

*bModified*<br/>
Il valore TRUE indica che il testo è stato modificato e il valore FALSE indica che non è stato modificato. Per impostazione predefinita, viene impostato il flag modificato.

### <a name="remarks"></a>Note

Il flag modificato indica se il testo all'interno del controllo di modifica è stato modificato. Viene impostato automaticamente ogni volta che l'utente modifica il testo. Il relativo valore può essere recuperato con la funzione membro [GetModify](#getmodify).

Per ulteriori informazioni, vedere [EM_SETMODIFY](/windows/desktop/Controls/em-setmodify) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEdit:: GetModify](#getmodify).

##  <a name="setpasswordchar"></a>  CEdit::SetPasswordChar

Chiamare questa funzione per impostare o rimuovere un carattere della password visualizzato in un controllo di modifica quando l'utente digita il testo.

```
void SetPasswordChar(TCHAR ch);
```

### <a name="parameters"></a>Parametri

*ch*<br/>
Specifica il carattere da visualizzare al posto del carattere digitato dall'utente. Se *ch* è 0, vengono visualizzati i caratteri effettivi digitati dall'utente.

### <a name="remarks"></a>Note

Quando viene impostato un carattere di password, tale carattere viene visualizzato per ogni carattere che l'utente digita.

Questa funzione membro non ha alcun effetto su un controllo di modifica a più righe.

Quando viene `SetPasswordChar` chiamata la funzione membro, `CEdit` in vengono ridisegnato tutti i caratteri visibili usando il carattere specificato da *ch*.

Se il controllo di modifica viene creato con lo stile [ES_PASSWORD](styles-used-by-mfc.md#edit-styles) , il carattere predefinito della password viene impostato su un <strong>\*</strong>asterisco (). Questo stile viene rimosso se `SetPasswordChar` viene chiamato con *ch* impostato su 0.

Per ulteriori informazioni, vedere [EM_SETPASSWORDCHAR](/windows/desktop/Controls/em-setpasswordchar) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#16](../../mfc/reference/codesnippet/cpp/cedit-class_22.cpp)]

##  <a name="setreadonly"></a>  CEdit::SetReadOnly

Chiama questa funzione per impostare lo stato di sola lettura di un controllo di modifica.

```
BOOL SetReadOnly(BOOL bReadOnly = TRUE);
```

### <a name="parameters"></a>Parametri

*bReadOnly*<br/>
Specifica se impostare o rimuovere lo stato di sola lettura del controllo di modifica. Il valore TRUE imposta lo stato su sola lettura; il valore FALSE imposta lo stato su lettura/scrittura.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo oppure 0 se si verifica un errore.

### <a name="remarks"></a>Note

È possibile trovare l'impostazione corrente testando il flag [ES_READONLY](styles-used-by-mfc.md#edit-styles) nel valore restituito di [CWnd:: GetStyle](cwnd-class.md#getstyle).

Per ulteriori informazioni, vedere [EM_SETREADONLY](/windows/desktop/Controls/em-setreadonly) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#23](../../mfc/reference/codesnippet/cpp/cedit-class_23.cpp)]

##  <a name="setrect"></a>  CEdit::SetRect

Chiamare questa funzione per impostare le dimensioni di un rettangolo usando le coordinate specificate.

```
void SetRect(LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta alla `RECT` struttura o `CRect` all'oggetto che specifica le nuove dimensioni del rettangolo di formattazione.

### <a name="remarks"></a>Note

Questo membro viene elaborato solo da controlli di modifica su più righe.

Utilizzare `SetRect` per impostare il rettangolo di formattazione di un controllo di modifica a più righe. Il rettangolo di formattazione è il rettangolo di limitazione del testo, che è indipendente dalle dimensioni della finestra di modifica del controllo. Quando il controllo di modifica viene creato per la prima volta, il rettangolo di formattazione corrisponde all'area client della finestra modifica-controllo. Utilizzando la `SetRect` funzione membro, un'applicazione può rendere il rettangolo di formattazione più grande o più piccolo della finestra di modifica del controllo.

Se il controllo di modifica non dispone di una barra di scorrimento, il testo verrà ritagliato, non sottoposto a incapsulamento, se il rettangolo di formattazione viene reso più grande della finestra. Se il controllo di modifica contiene un bordo, il rettangolo di formattazione viene ridotto in base alle dimensioni del bordo. Se si modifica il rettangolo restituito dalla `GetRect` funzione membro, è necessario rimuovere le dimensioni del bordo prima di passare il rettangolo a. `SetRect`

Quando `SetRect` viene chiamato il metodo, anche il testo del controllo di modifica viene riformattato e visualizzato nuovamente.

Per ulteriori informazioni, vedere [EM_SETRECT](/windows/desktop/Controls/em-setrect) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#24](../../mfc/reference/codesnippet/cpp/cedit-class_24.cpp)]

##  <a name="setrectnp"></a>  CEdit::SetRectNP

Chiamare questa funzione per impostare il rettangolo di formattazione di un controllo di modifica a più righe.

```
void SetRectNP(LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta a una `RECT` struttura o `CRect` a un oggetto che specifica le nuove dimensioni del rettangolo.

### <a name="remarks"></a>Note

Il rettangolo di formattazione è il rettangolo di limitazione del testo, che è indipendente dalle dimensioni della finestra di modifica del controllo.

`SetRectNP`è identico alla `SetRect` funzione membro, tranne per il fatto che la finestra di modifica del controllo non è ridisegnato.

Quando il controllo di modifica viene creato per la prima volta, il rettangolo di formattazione corrisponde all'area client della finestra modifica-controllo. Chiamando la `SetRectNP` funzione membro, un'applicazione può rendere il rettangolo di formattazione più grande o più piccolo della finestra di modifica del controllo.

Se il controllo di modifica non dispone di una barra di scorrimento, il testo verrà ritagliato, non sottoposto a incapsulamento, se il rettangolo di formattazione viene reso più grande della finestra.

Questo membro viene elaborato solo da controlli di modifica su più righe.

Per ulteriori informazioni, vedere [EM_SETRECTNP](/windows/desktop/Controls/em-setrectnp) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEdit:: serect](#setrect).

##  <a name="setsel"></a>  CEdit::SetSel

Chiamare questa funzione per selezionare un intervallo di caratteri in un controllo di modifica.

```
void SetSel(
    DWORD dwSelection,
    BOOL bNoScroll = FALSE);

void SetSel(
    int nStartChar,
    int nEndChar,
    BOOL bNoScroll = FALSE);
```

### <a name="parameters"></a>Parametri

*dwSelection*<br/>
Specifica la posizione iniziale nella parola di ordine inferiore e la posizione finale nella parola più significativa. Se la parola più bassa è 0 e la parola più significativa è-1, viene selezionato tutto il testo nel controllo di modifica. Se la parola di ordine inferiore è-1, viene rimossa qualsiasi selezione corrente.

*bNoScroll*<br/>
Indica se il punto di inserimento deve essere spostato nella visualizzazione. Se FALSE, il punto di inserimento viene spostato nella visualizzazione. Se TRUE, il cursore non viene spostato nella visualizzazione.

*nStartChar*<br/>
Specifica la posizione iniziale. Se *nStartChar* è 0 e *nEndChar* è-1, viene selezionato tutto il testo nel controllo di modifica. Se *nStartChar* è-1, viene rimossa qualsiasi selezione corrente.

*nEndChar*<br/>
Specifica la posizione finale.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [EM_SETSEL](/windows/desktop/Controls/em-setsel) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEdit:: GetSel](#getsel).

##  <a name="settabstops"></a>CEdit:: SetTabStops

Chiamare questa funzione per impostare le tabulazioni in un controllo di modifica a più righe.

```
void SetTabStops();
BOOL SetTabStops(const int& cxEachStop);

BOOL SetTabStops(
    int nTabStops,
    LPINT rgTabStops);
```

### <a name="parameters"></a>Parametri

*cxEachStop*<br/>
Specifica che le tabulazioni devono essere impostate in ogni unità di dialogo *cxEachStop* .

*nTabStops*<br/>
Specifica il numero di arresti di tabulazione contenuti in *rgTabStops*. Questo numero deve essere maggiore di 1.

*rgTabStops*<br/>
Punta a una matrice di interi senza segno che specifica le tabulazioni nelle unità della finestra di dialogo. Un'unità di dialogo è una distanza orizzontale o verticale. Un'unità della finestra di dialogo orizzontale è uguale a un quarto dell'unità di larghezza di base della finestra di dialogo corrente e 1 unità di dialogo verticale è uguale a un ottavo dell'unità di altezza di base della finestra di dialogo corrente. Le unità di base della finestra di dialogo vengono calcolate in base all'altezza e alla larghezza del tipo di carattere del sistema corrente. La `GetDialogBaseUnits` funzione Windows restituisce le unità di base della finestra di dialogo correnti in pixel.

### <a name="return-value"></a>Valore restituito

Diverso da zero se le schede sono state impostate; in caso contrario, 0.

### <a name="remarks"></a>Note

Quando il testo viene copiato in un controllo di modifica a più righe, qualsiasi carattere di tabulazione nel testo provocherà la generazione di spazio fino alla tabulazione successiva.

Per impostare le tabulazioni sulle dimensioni predefinite delle unità di dialogo 32, chiamare la versione senza parametri di questa funzione membro. Per impostare le tabulazioni su una dimensione diversa da 32, chiamare la versione con il parametro *cxEachStop* . Per impostare le tabulazioni su una matrice di dimensioni, usare la versione con due parametri.

Questa funzione membro viene elaborata solo da controlli di modifica su più righe.

`SetTabStops`non ridisegnato automaticamente la finestra di modifica. Se si modifica la tabulazione per il testo già presente nel controllo di modifica, chiamare [CWnd:: InvalidateRect](cwnd-class.md#invalidaterect) per ricreare la finestra di modifica.

Per ulteriori informazioni, vedere [EM_SETTABSTOPS](/windows/desktop/Controls/em-settabstops) e [GetDialogBaseUnits](/windows/desktop/api/winuser/nf-winuser-getdialogbaseunits) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CEditView:: SetTabStops](ceditview-class.md#settabstops).

##  <a name="showballoontip"></a>  CEdit::ShowBalloonTip

Visualizza un fumetto suggerimento associato al controllo di modifica corrente.

```
BOOL ShowBalloonTip(PEDITBALLOONTIP pEditBalloonTip);

BOOL ShowBalloonTip(
    LPCWSTR lpszTitle,
    LPCWSTR lpszText,
    INT ttiIcon = TTI_NONE);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pEditBalloonTip*|in Puntatore a una struttura [EDITBALLOONTIP](/windows/desktop/api/commctrl/ns-commctrl-editballoontip) che descrive il fumetto suggerimento.|
|*lpszTitle*|in Puntatore a una stringa Unicode che contiene il titolo del fumetto suggerimento.|
|*lpszText*|in Puntatore a una stringa Unicode che contiene il testo del fumetto suggerimento.|
|*ttiIcon*|in Valore **int** che specifica il tipo di icona da associare al fumetto suggerimento. Il valore predefinito è TTI_NONE. Per ulteriori informazioni, vedere il `ttiIcon` membro della struttura [EDITBALLOONTIP](/windows/desktop/api/commctrl/ns-commctrl-editballoontip) .|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questa funzione Invia il messaggio [EM_SHOWBALLOONTIP](/windows/desktop/Controls/em-showballoontip) , descritto nella Windows SDK. Per ulteriori informazioni, vedere la macro [Edit_ShowBalloonTip](/windows/desktop/api/commctrl/nf-commctrl-edit_showballoontip) .

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita una `m_cedit`variabile,, che viene utilizzata per accedere al controllo di modifica corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CEdit_s1#1](../../mfc/reference/codesnippet/cpp/cedit-class_25.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene visualizzato un fumetto suggerimento per un controllo di modifica. Il metodo [CEdit:: ShowBalloonTip](#showballoontip) specifica un titolo e un testo del suggerimento.

[!code-cpp[NVC_MFC_CEdit_s1#3](../../mfc/reference/codesnippet/cpp/cedit-class_26.cpp)]

##  <a name="undo"></a>  CEdit::Undo

Chiamare questa funzione per annullare l'ultima operazione di modifica del controllo.

```
BOOL Undo();
```

### <a name="return-value"></a>Valore restituito

Per un controllo di modifica a riga singola, il valore restituito è sempre diverso da zero. Per un controllo di modifica a più righe, il valore restituito è diverso da zero se l'operazione di annullamento ha esito positivo oppure 0 se l'operazione di annullamento ha esito negativo.

### <a name="remarks"></a>Note

Un'operazione di annullamento può anche essere annullata. Ad esempio, è possibile ripristinare il testo eliminato con la prima chiamata `Undo`a. Fino a quando non viene eseguita alcuna operazione di modifica, è possibile rimuovere nuovamente il testo con una seconda chiamata a `Undo`.

Per ulteriori informazioni, vedere [EM_UNDO](/windows/desktop/Controls/em-undo) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CEdit#25](../../mfc/reference/codesnippet/cpp/cedit-class_27.cpp)]

## <a name="see-also"></a>Vedere anche

[CALCDRIV di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[CMNCTRL2 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](cwnd-class.md)<br/>
[Classe CButton](cbutton-class.md)<br/>
[Classe CComboBox](ccombobox-class.md)<br/>
[Classe CListBox](clistbox-class.md)<br/>
[Classe CScrollBar](cscrollbar-class.md)<br/>
[Classe CStatic](cstatic-class.md)<br/>
[Classe CDialog](cdialog-class.md)
