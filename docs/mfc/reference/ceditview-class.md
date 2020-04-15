---
title: Classe CEditView
ms.date: 11/04/2016
f1_keywords:
- CEditView
- AFXEXT/CEditView
- AFXEXT/CEditView::CEditView
- AFXEXT/CEditView::FindText
- AFXEXT/CEditView::GetBufferLength
- AFXEXT/CEditView::GetEditCtrl
- AFXEXT/CEditView::GetPrinterFont
- AFXEXT/CEditView::GetSelectedText
- AFXEXT/CEditView::LockBuffer
- AFXEXT/CEditView::PrintInsideRect
- AFXEXT/CEditView::SerializeRaw
- AFXEXT/CEditView::SetPrinterFont
- AFXEXT/CEditView::SetTabStops
- AFXEXT/CEditView::UnlockBuffer
- AFXEXT/CEditView::OnFindNext
- AFXEXT/CEditView::OnReplaceAll
- AFXEXT/CEditView::OnReplaceSel
- AFXEXT/CEditView::OnTextNotFound
- AFXEXT/CEditView::dwStyleDefault
helpviewer_keywords:
- CEditView [MFC], CEditView
- CEditView [MFC], FindText
- CEditView [MFC], GetBufferLength
- CEditView [MFC], GetEditCtrl
- CEditView [MFC], GetPrinterFont
- CEditView [MFC], GetSelectedText
- CEditView [MFC], LockBuffer
- CEditView [MFC], PrintInsideRect
- CEditView [MFC], SerializeRaw
- CEditView [MFC], SetPrinterFont
- CEditView [MFC], SetTabStops
- CEditView [MFC], UnlockBuffer
- CEditView [MFC], OnFindNext
- CEditView [MFC], OnReplaceAll
- CEditView [MFC], OnReplaceSel
- CEditView [MFC], OnTextNotFound
- CEditView [MFC], dwStyleDefault
ms.assetid: bf38255c-fcbe-450c-95b2-3c5e35f86c37
ms.openlocfilehash: 8fbb2dc569e675ecff4ce04758a4eced40505bf6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373975"
---
# <a name="ceditview-class"></a>Classe CEditView

Tipo di classe di visualizzazione che fornisce la funzionalità di un controllo di modifica di Windows e che può essere utilizzato per implementare funzionalità di tipo editor di testo semplice.

## <a name="syntax"></a>Sintassi

```
class CEditView : public CCtrlView
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CEditView::CEditView](#ceditview)|Costruisce un oggetto di tipo `CEditView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CEditView::FindText](#findtext)|Cerca una stringa all'interno del testo.|
|[CEditView::GetBufferLength](#getbufferlength)|Ottiene la lunghezza del buffer di caratteri.|
|[CEditView::GetEditCtrl](#geteditctrl)|Fornisce l'accesso `CEdit` alla `CEditView` parte di un oggetto (il controllo di modifica di Windows).|
|[CEditView::GetPrinterFont](#getprinterfont)|Recupera il tipo di carattere della stampante corrente.|
|[Oggetto CEditView::GetSelectedText](#getselectedtext)|Recupera la selezione di testo corrente.|
|[Controllo CEditView::LockBuffer](#lockbuffer)|Blocca il buffer.|
|[CEditView::PrintInsideRect](#printinsiderect)|Esegue il rendering del testo all'interno di un rettangolo specificato.|
|[CEditView::SerializeRaw](#serializeraw)|Serializza `CEditView` un oggetto su disco come testo non elaborato.|
|[CEditView::SetPrinterFont](#setprinterfont)|Imposta un nuovo tipo di carattere della stampante.|
|[CEditView::SetTabStops](#settabstops)|Imposta le tabulazioni sia per la visualizzazione dello schermo che per la stampa.|
|[CEditView::UnlockBuffer](#unlockbuffer)|Sblocca il buffer.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CEditView::OnFindNext](#onfindnext)|Trova l'occorrenza successiva di una stringa di testo.|
|[CEditView::OnReplaceAll](#onreplaceall)|Sostituisce tutte le occorrenze di una stringa specificata con una nuova stringa.|
|[CEditView::OnReplaceSel](#onreplacesel)|Sostituisce la selezione corrente.|
|[CEditView::OnTextNotFound](#ontextnotfound)|Chiamato quando un'operazione di ricerca non corrisponde ad alcun altro testo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CEditView::dwStyleDefault](#dwstyledefault)|Stile di default `CEditView`per gli oggetti di tipo .|

## <a name="remarks"></a>Osservazioni

La `CEditView` classe fornisce le seguenti funzioni aggiuntive:

- Stampa.

- Trova e sostituisci.

Poiché `CEditView` class è `CView`un derivato `CEditView` di class , gli oggetti di class possono essere utilizzati con documenti e modelli di documento.

Il `CEditView` testo di ogni controllo viene mantenuto nel proprio oggetto di memoria globale. L'applicazione può avere `CEditView` un numero qualsiasi di oggetti.

Creare oggetti `CEditView` di tipo se si desidera una finestra di modifica con le funzionalità aggiunte elencate in precedenza o se si desidera una semplice funzionalità dell'editor di testo. Un `CEditView` oggetto può occupare l'intera area client di una finestra. Derivare le `CEditView` proprie classi da per aggiungere o modificare la funzionalità di base o per dichiarare le classi che possono essere aggiunte a un modello di documento.

L'implementazione `CEditView` predefinita della classe gestisce i comandi seguenti: ID_EDIT_SELECT_ALL, ID_EDIT_FIND, ID_EDIT_REPLACE, ID_EDIT_REPEAT e ID_FILE_PRINT.

Il limite di `CEditView` caratteri predefinito per \* è (1024 1024 - 1 - 1048575). Questo può essere modificato chiamando la funzione EM_LIMITTEXT del controllo di modifica sottostante. Tuttavia, i limiti sono diversi a seconda del sistema operativo e del tipo di controllo di modifica (singolo o multilinea). Per ulteriori informazioni su questi limiti, vedere [EM_LIMITTEXT](/windows/win32/Controls/em-limittext).

Per modificare questo limite nel `OnCreate()` controllo, `CEditView` eseguire l'override della funzione per la classe e inserire la seguente riga di codice:

[!code-cpp[NVC_MFCDocView#65](../../mfc/codesnippet/cpp/ceditview-class_1.cpp)]

Gli oggetti `CEditView` di tipo (o di tipi derivati da `CEditView`) presentano le limitazioni seguenti:

- `CEditView`non implementa vero ciò che si vede è quello che si ottiene (WYSIWYG) editing. Se è possibile scegliere tra leggibilità sullo schermo `CEditView` e corrispondenza dell'output stampato, optare per la leggibilità dello schermo.

- `CEditView`possibile visualizzare il testo in un solo tipo di carattere. Non è supportata alcuna formattazione speciale dei caratteri. Vedere la classe [CRichEditView](../../mfc/reference/cricheditview-class.md) per maggiori funzionalità.

- La quantità di `CEditView` testo che una può contenere è limitata. I limiti sono gli `CEdit` stessi del controllo.

Per ulteriori `CEditView`informazioni su , vedere Classi di [visualizzazione derivata disponibili in MFC](../../mfc/derived-view-classes-available-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CCtrlView](../../mfc/reference/cctrlview-class.md)

`CEditView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="ceditviewceditview"></a><a name="ceditview"></a>CEditView::CEditView

Costruisce un oggetto di tipo `CEditView`.

```
CEditView();
```

### <a name="remarks"></a>Osservazioni

Dopo aver creato l'oggetto, è necessario chiamare la funzione [CWnd::Create](../../mfc/reference/cwnd-class.md#create) prima che venga utilizzato il controllo di modifica. Se si deriva `CEditView` una classe da e `CWinApp::AddDocTemplate`la si aggiunge al `Create` modello utilizzando , il framework chiama sia questo costruttore che la funzione .

## <a name="ceditviewdwstyledefault"></a><a name="dwstyledefault"></a>CEditView::dwStyleDefault

Contiene lo stile `CEditView` predefinito dell'oggetto.

```
static const DWORD dwStyleDefault;
```

### <a name="remarks"></a>Osservazioni

Passare questo membro statico come parametro *dwStyle* della `Create` funzione `CEditView` per ottenere lo stile predefinito per l'oggetto.

## <a name="ceditviewfindtext"></a><a name="findtext"></a>CEditView::FindText

Chiamare `FindText` la funzione `CEditView` per cercare nel buffer di testo dell'oggetto.

```
BOOL FindText(
    LPCTSTR lpszFind,
    BOOL bNext = TRUE,
    BOOL bCase = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszTrova*<br/>
Testo da trovare.

*bSuccessivo*<br/>
Specifica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

*bCustodia*<br/>
Specifica se la ricerca fa distinzione tra maiuscole e minuscole. Se TRUE, la ricerca fa distinzione tra maiuscole e minuscole. Se FALSE, la ricerca non fa distinzione tra maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il testo di ricerca viene trovato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione cerca nel testo nel buffer il testo specificato da *lpszFind*, a partire dalla selezione corrente, nella direzione specificata da *bNext*e con distinzione tra maiuscole e minuscole specificata da *bCase*. Se il testo viene trovato, imposta la selezione sul testo trovato e restituisce un valore diverso da zero. Se il testo non viene trovato, la funzione restituisce 0.

In genere non è `FindText` necessario chiamare `OnFindNext`la funzione `FindText`a meno che non si esechi l'override di , che chiama .

## <a name="ceditviewgetbufferlength"></a><a name="getbufferlength"></a>CEditView::GetBufferLength

Chiamare questa funzione membro per ottenere il numero di caratteri attualmente nel buffer del controllo di modifica, escluso il carattere di terminazione null.

```
UINT GetBufferLength() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza della stringa nel buffer.

## <a name="ceditviewgeteditctrl"></a><a name="geteditctrl"></a>CEditView::GetEditCtrl

Chiamata `GetEditCtrl` per ottenere un riferimento al controllo di modifica utilizzato dalla visualizzazione di modifica.

```
CEdit& GetEditCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento a un oggetto `CEdit`.

### <a name="remarks"></a>Osservazioni

Questo controllo è di tipo [CEdit](../../mfc/reference/cedit-class.md), pertanto è `CEdit` possibile modificare il controllo di modifica di Windows direttamente utilizzando le funzioni membro.

> [!CAUTION]
> L'utilizzo dell'oggetto `CEdit` può modificare lo stato del controllo di modifica di Windows sottostante. Ad esempio, non modificare le impostazioni della scheda utilizzando la `CEditView` funzione [CEdit::SetTabStops](../../mfc/reference/cedit-class.md#settabstops) perché memorizza tali impostazioni nella cache per l'utilizzo sia nel controllo di modifica che nella stampa. Utilizzare invece [CEditView::SetTabStops](#settabstops).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#66](../../mfc/codesnippet/cpp/ceditview-class_2.cpp)]

## <a name="ceditviewgetprinterfont"></a><a name="getprinterfont"></a>CEditView::GetPrinterFont

Chiamata `GetPrinterFont` per ottenere un puntatore a un [CFont](../../mfc/reference/cfont-class.md) oggetto che descrive il tipo di carattere della stampante corrente.

```
CFont* GetPrinterFont() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a `CFont` un oggetto che specifica il tipo di carattere della stampante corrente; NULL se il tipo di carattere della stampante non è stato impostato. Il puntatore può essere temporaneo e non deve essere memorizzato per usi successivi.

### <a name="remarks"></a>Osservazioni

Se il tipo di carattere della stampante `CEditView` non è stato impostato, il comportamento di stampa predefinito della classe consiste nel stampare utilizzando lo stesso tipo di carattere utilizzato per la visualizzazione.

Utilizzare questa funzione per determinare il tipo di carattere della stampante corrente. Se non è il tipo di carattere della stampante desiderato, utilizzare [CEditView::SetPrinterFont](#setprinterfont) per modificarlo.

## <a name="ceditviewgetselectedtext"></a><a name="getselectedtext"></a>Oggetto CEditView::GetSelectedText

Chiamare `GetSelectedText` per copiare il `CString` testo selezionato in un oggetto, fino alla fine della selezione o il carattere che precede il primo carattere di ritorno a capo nella selezione.

```
void GetSelectedText(CString& strResult) const;
```

### <a name="parameters"></a>Parametri

*strRisultato*<br/>
Riferimento all'oggetto `CString` che deve ricevere il testo selezionato.

## <a name="ceditviewlockbuffer"></a><a name="lockbuffer"></a>Controllo CEditView::LockBuffer

Chiamare questa funzione membro per ottenere un puntatore al buffer. Il buffer non deve essere modificato.

```
LPCTSTR LockBuffer() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al buffer del controllo di modifica.

## <a name="ceditviewonfindnext"></a><a name="onfindnext"></a>CEditView::OnFindNext

Cerca nel testo nel buffer il testo specificato da *lpszFind*, nella direzione specificata da *bNext*, con distinzione tra maiuscole e minuscole specificata da *bCase*.

```
virtual void OnFindNext(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase);
```

### <a name="parameters"></a>Parametri

*lpszTrova*<br/>
Testo da trovare.

*bSuccessivo*<br/>
Specifica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

*bCustodia*<br/>
Specifica se la ricerca fa distinzione tra maiuscole e minuscole. Se TRUE, la ricerca fa distinzione tra maiuscole e minuscole. Se FALSE, la ricerca non fa distinzione tra maiuscole e minuscole.

### <a name="remarks"></a>Osservazioni

La ricerca inizia all'inizio della selezione corrente e viene eseguita tramite una chiamata a [FindText](#findtext). Nell'implementazione `OnFindNext` predefinita, chiama [OnTextNotFound](#ontextnotfound) se il testo non viene trovato.

Eseguire `OnFindNext` l'override `CEditView`per modificare la modalità di ricerca del testo in un oggetto derivato. `CEditView`chiamate `OnFindNext` quando l'utente sceglie il pulsante Trova successivo nella finestra di dialogo standard Trova.

## <a name="ceditviewonreplaceall"></a><a name="onreplaceall"></a>CEditView::OnReplaceAll

`CEditView`chiamate `OnReplaceAll` quando l'utente seleziona il pulsante Sostituisci tutto nella finestra di dialogo Standard Sostituisci.

```
virtual void OnReplaceAll(
    LPCTSTR lpszFind,
    LPCTSTR lpszReplace,
    BOOL bCase);
```

### <a name="parameters"></a>Parametri

*lpszTrova*<br/>
Testo da trovare.

*lpszSostituisci*<br/>
Testo da sostituire al testo di ricerca.

*bCustodia*<br/>
Specifica se la ricerca fa distinzione tra maiuscole e minuscole. Se TRUE, la ricerca fa distinzione tra maiuscole e minuscole. Se FALSE, la ricerca non fa distinzione tra maiuscole e minuscole.

### <a name="remarks"></a>Osservazioni

`OnReplaceAll`cerca nel testo nel buffer il testo specificato da *lpszFind*, con distinzione tra maiuscole e minuscole specificata da *bCase*. La ricerca inizia all'inizio della selezione corrente. Ogni volta che viene trovato il testo di ricerca, questa funzione sostituisce tale occorrenza del testo con il testo specificato da *lpszReplace*. La ricerca viene eseguita tramite una chiamata a [FindText](#findtext). Nell'implementazione predefinita, [OnTextNotFound](#ontextnotfound) viene chiamato se il testo non viene trovato.

Se la selezione corrente non corrisponde a *lpszFind*, la selezione viene aggiornata alla prima occorrenza del testo specificato da *lpszFind* e non viene eseguita una sostituzione. Ciò consente all'utente di confermare che questo è ciò che vogliono fare quando la selezione non corrisponde al testo da sostituire.

Eseguire `OnReplaceAll` l'override `CEditView`per modificare il modo in cui un oggetto derivato sostituisce il testo.

## <a name="ceditviewonreplacesel"></a><a name="onreplacesel"></a>CEditView::OnReplaceSel

`CEditView`chiamate `OnReplaceSel` quando l'utente seleziona il pulsante Sostituisci nella finestra di dialogo standard Sostituisci.

```
virtual void OnReplaceSel(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase,
    LPCTSTR lpszReplace);
```

### <a name="parameters"></a>Parametri

*lpszTrova*<br/>
Testo da trovare.

*bSuccessivo*<br/>
Specifica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

*bCustodia*<br/>
Specifica se la ricerca fa distinzione tra maiuscole e minuscole. Se TRUE, la ricerca fa distinzione tra maiuscole e minuscole. Se FALSE, la ricerca non fa distinzione tra maiuscole e minuscole.

*lpszSostituisci*<br/>
Testo da sostituire al testo trovato.

### <a name="remarks"></a>Osservazioni

Dopo aver sostituito la selezione, questa funzione cerca nel buffer il testo del buffer per la successiva occorrenza del testo specificato da *lpszFind*, nella direzione specificata da *bNext*, con distinzione tra maiuscole e minuscole specificata da *bCase*. La ricerca viene eseguita tramite una chiamata a [FindText](#findtext). Se il testo non viene trovato, [OnTextNotFound](#ontextnotfound) viene chiamato.

Eseguire `OnReplaceSel` l'override `CEditView`per modificare il modo in cui un oggetto derivato sostituisce il testo selezionato.

## <a name="ceditviewontextnotfound"></a><a name="ontextnotfound"></a>CEditView::OnTextNotFound

Eseguire l'override di questa funzione per `MessageBeep`modificare l'implementazione predefinita, che chiama la funzione di Windows .

```
virtual void OnTextNotFound(LPCTSTR lpszFind);
```

### <a name="parameters"></a>Parametri

*lpszTrova*<br/>
Testo da trovare.

## <a name="ceditviewprintinsiderect"></a><a name="printinsiderect"></a>CEditView::PrintInsideRect

Chiamata `PrintInsideRect` per stampare il testo nel rettangolo specificato da *rectLayout*.

```
UINT PrintInsideRect(
    CDC *pDC,
    RECT& rectLayout,
    UINT nIndexStart,
    UINT nIndexStop);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di periferica della stampante.

*RectLayout*<br/>
Riferimento a un [oggetto CRect](../../atl-mfc-shared/reference/crect-class.md) o [una struttura RECT](/windows/win32/api/windef/ns-windef-rect) che specifica il rettangolo in cui deve essere eseguito il rendering del testo.

*nIndexInizio*<br/>
Indice all'interno del buffer del primo carattere di cui eseguire il rendering.

*nIndexStop*<br/>
Indice all'interno del buffer del carattere che segue l'ultimo carattere di cui eseguire il rendering.

### <a name="return-value"></a>Valore restituito

Indice del carattere successivo da stampare, ovvero il carattere che segue l'ultimo carattere sottoposto a rendering.

### <a name="remarks"></a>Osservazioni

Se `CEditView` il controllo non ha lo stile ES_AUTOHSCROLL, il testo viene mandato a capo all'interno del rettangolo di rendering. Se il controllo ha lo stile ES_AUTOHSCROLL, il testo viene ritagliato sul bordo destro del rettangolo.

L'elemento `rect.bottom` dell'oggetto *rectLayout* viene modificato in modo che le dimensioni del rettangolo definiscano la parte del rettangolo originale occupata dal testo.

## <a name="ceditviewserializeraw"></a><a name="serializeraw"></a>CEditView::SerializeRaw

Chiamata `SerializeRaw` per `CArchive` fare in modo che `CEditView` un oggetto legga o scriva il testo dell'oggetto in un file di testo.

```
void SerializeRaw(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*Ar*<br/>
Riferimento all'oggetto `CArchive` che archivia il testo serializzato.

### <a name="remarks"></a>Osservazioni

`SerializeRaw`differisce `CEditView`dall'implementazione `Serialize` interna di in quanto legge e scrive solo il testo, senza precedere i dati di descrizione dell'oggetto.

## <a name="ceditviewsetprinterfont"></a><a name="setprinterfont"></a>CEditView::SetPrinterFont

Chiamare `SetPrinterFont` per impostare il tipo di carattere della stampante sul tipo di carattere specificato da *pFont*.

```
void SetPrinterFont(CFont* pFont);
```

### <a name="parameters"></a>Parametri

*pCaratterE*<br/>
Puntatore a un `CFont`oggetto di tipo . Se NULL, il tipo di carattere utilizzato per la stampa è basato sul tipo di carattere di visualizzazione.

### <a name="remarks"></a>Osservazioni

Se si desidera che la visualizzazione utilizzi sempre un `SetPrinterFont` particolare tipo di `OnPreparePrinting` carattere per la stampa, includere una chiamata a nella funzione della classe. Questa funzione virtuale viene chiamata prima della stampa, in modo che la modifica del tipo di carattere avvenga prima della stampa del contenuto della visualizzazione.

## <a name="ceditviewsettabstops"></a><a name="settabstops"></a>CEditView::SetTabStops

Chiamare questa funzione per impostare le tabulazioni utilizzate per la visualizzazione e la stampa.

```
void SetTabStops(int nTabStops);
```

### <a name="parameters"></a>Parametri

*nTabStop*<br/>
Larghezza di ogni tabulazione, in unità di dialogo.

### <a name="remarks"></a>Osservazioni

È supportata una sola larghezza di tabulazione. (gli `CEdit` oggetti supportano più larghezze di tabulazione.) Le larghezze sono in unità di dialogo, che corrispondono a un quarto della larghezza media dei caratteri (solo in maiuscolo e minuscola) del tipo di carattere utilizzato al momento della stampa o della visualizzazione. È consigliabile `CEdit::SetTabStops` `CEditView` non utilizzare perché è necessario memorizzare nella cache il valore tab-stop.

Questa funzione modifica solo le schede dell'oggetto per il quale viene chiamata. Per modificare le tabulazioni per ogni `CEditView` oggetto nell'applicazione, chiamare la funzione di `SetTabStops` ogni oggetto.

### <a name="example"></a>Esempio

Questo frammento di codice imposta le tabulazioni nel controllo su ogni quarto carattere misurando attentamente il tipo di carattere utilizzato dal controllo.

[!code-cpp[NVC_MFCDocView#67](../../mfc/codesnippet/cpp/ceditview-class_3.cpp)]

## <a name="ceditviewunlockbuffer"></a><a name="unlockbuffer"></a>CEditView::UnlockBuffer

Chiamare questa funzione membro per sbloccare il buffer.

```
void UnlockBuffer() const;
```

### <a name="remarks"></a>Osservazioni

Chiamare `UnlockBuffer` dopo aver terminato di utilizzare il puntatore restituito da [LockBuffer](#lockbuffer).

## <a name="see-also"></a>Vedere anche

[Esempio MFC SUPERPAD](../../overview/visual-cpp-samples.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)<br/>
[Classe CDocument](../../mfc/reference/cdocument-class.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[CRichEditView (classe)](../../mfc/reference/cricheditview-class.md)
