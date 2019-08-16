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
ms.openlocfilehash: e9b7dea980e607c776e2d50c679042c765080fdb
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69506718"
---
# <a name="ceditview-class"></a>Classe CEditView

Tipo di classe di visualizzazione che fornisce la funzionalità di un controllo di modifica di Windows e che può essere utilizzato per implementare funzionalità di tipo editor di testo semplice.

## <a name="syntax"></a>Sintassi

```
class CEditView : public CCtrlView
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CEditView:: CEditView](#ceditview)|Costruisce un oggetto di tipo `CEditView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CEditView::FindText](#findtext)|Cerca una stringa all'interno del testo.|
|[CEditView:: GetBufferLength](#getbufferlength)|Ottiene la lunghezza del buffer di caratteri.|
|[CEditView::GetEditCtrl](#geteditctrl)|Consente di accedere alla `CEdit` parte di un `CEditView` oggetto (controllo di modifica di Windows).|
|[CEditView:: GetPrinterFont](#getprinterfont)|Recupera il tipo di carattere della stampante corrente.|
|[CEditView::GetSelectedText](#getselectedtext)|Recupera la selezione di testo corrente.|
|[CEditView:: LockBuffer](#lockbuffer)|Blocca il buffer.|
|[CEditView::PrintInsideRect](#printinsiderect)|Esegue il rendering del testo all'interno di un rettangolo specificato.|
|[CEditView:: SerializeRaw](#serializeraw)|Serializza un `CEditView` oggetto su disco come testo non elaborato.|
|[CEditView::SetPrinterFont](#setprinterfont)|Imposta un nuovo tipo di carattere della stampante.|
|[CEditView:: SetTabStops](#settabstops)|Imposta le tabulazioni per la visualizzazione e la stampa dello schermo.|
|[CEditView::UnlockBuffer](#unlockbuffer)|Sblocca il buffer.|

### <a name="protected-methods"></a>Metodi protetti

|Name|Descrizione|
|----------|-----------------|
|[CEditView::OnFindNext](#onfindnext)|Trova l'occorrenza successiva di una stringa di testo.|
|[CEditView::OnReplaceAll](#onreplaceall)|Sostituisce tutte le occorrenze di una determinata stringa con una nuova stringa.|
|[CEditView::OnReplaceSel](#onreplacesel)|Sostituisce la selezione corrente.|
|[CEditView::OnTextNotFound](#ontextnotfound)|Chiamato quando un'operazione di ricerca non riesce a trovare ulteriori testo.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CEditView::dwStyleDefault](#dwstyledefault)|Stile predefinito per gli oggetti di `CEditView`tipo.|

## <a name="remarks"></a>Note

La `CEditView` classe fornisce le funzioni aggiuntive seguenti:

- Stampa.

- Trova e Sostituisci.

Poiché la `CEditView` classe è un derivato della `CView`classe, gli oggetti `CEditView` della classe possono essere utilizzati con documenti e modelli di documento.

Il `CEditView` testo di ogni controllo viene mantenuto in un oggetto memoria globale. L'applicazione può avere un numero qualsiasi `CEditView` di oggetti.

Creare oggetti di tipo `CEditView` se si desidera una finestra di modifica con la funzionalità aggiunta sopra elencata o se si desidera una semplice funzionalità dell'editor di testo. Un `CEditView` oggetto può occupare l'intera area client di una finestra. Derivare classi personalizzate da `CEditView` per aggiungere o modificare le funzionalità di base o per dichiarare classi che possono essere aggiunte a un modello di documento.

L'implementazione predefinita della classe `CEditView` gestisce i comandi seguenti: ID_EDIT_SELECT_ALL, ID_EDIT_FIND, ID_EDIT_REPLACE, ID_EDIT_REPEAT e ID_FILE_PRINT.

Il limite di caratteri predefinito `CEditView` per è ( \* 1024 1024-1 = 1048575). Questo può essere modificato chiamando la funzione EM_LIMITTEXT del controllo di modifica sottostante. Tuttavia, i limiti sono diversi a seconda del sistema operativo e del tipo di controllo di modifica (singolo o su più righe). Per ulteriori informazioni su questi limiti, vedere [EM_LIMITTEXT](/windows/win32/Controls/em-limittext).

Per modificare questo limite nel controllo, eseguire l'override `OnCreate()` della funzione `CEditView` per la classe e inserire la riga di codice seguente:

[!code-cpp[NVC_MFCDocView#65](../../mfc/codesnippet/cpp/ceditview-class_1.cpp)]

Gli oggetti di `CEditView` tipo (o di tipi derivati da `CEditView`) presentano le limitazioni seguenti:

- `CEditView`non implementa true ciò che viene visualizzato (WYSIWYG) per la modifica. Se è disponibile una scelta tra leggibilità sullo schermo e output stampato corrispondente, `CEditView` opta per la leggibilità dello schermo.

- `CEditView`consente di visualizzare il testo solo in un singolo tipo di carattere. Non è supportata alcuna formattazione speciale di caratteri. Per maggiori funzionalità, vedere la classe [CRichEditView](../../mfc/reference/cricheditview-class.md) .

- La quantità di testo `CEditView` che può contenere è limitata. I limiti sono identici a `CEdit` quelli del controllo.

Per ulteriori informazioni su `CEditView`, vedere [classi di viste derivate disponibili in MFC](../../mfc/derived-view-classes-available-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CCtrlView](../../mfc/reference/cctrlview-class.md)

`CEditView`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="ceditview"></a>CEditView:: CEditView

Costruisce un oggetto di tipo `CEditView`.

```
CEditView();
```

### <a name="remarks"></a>Note

Dopo la costruzione dell'oggetto, è necessario chiamare la funzione [CWnd:: create](../../mfc/reference/cwnd-class.md#create) prima di usare il controllo di modifica. Se si deriva una classe da `CEditView` e la si aggiunge al modello usando `CWinApp::AddDocTemplate`, il Framework chiama sia questo costruttore che la `Create` funzione.

##  <a name="dwstyledefault"></a>CEditView::d wStyleDefault

Contiene lo stile predefinito dell' `CEditView` oggetto.

```
static const DWORD dwStyleDefault;
```

### <a name="remarks"></a>Note

Passare il membro statico come parametro *dwStyle* della `Create` funzione per ottenere lo stile predefinito per l' `CEditView` oggetto.

##  <a name="findtext"></a>  CEditView::FindText

Chiamare la `FindText` funzione per eseguire la `CEditView` ricerca nel buffer di testo dell'oggetto.

```
BOOL FindText(
    LPCTSTR lpszFind,
    BOOL bNext = TRUE,
    BOOL bCase = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Testo da trovare.

*bNext*<br/>
Specifica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

*bCase*<br/>
Specifica se la ricerca fa distinzione tra maiuscole e minuscole. Se TRUE, la ricerca fa distinzione tra maiuscole e minuscole. Se FALSE, la ricerca non fa distinzione tra maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Diverso da zero se viene trovato il testo di ricerca; in caso contrario, 0.

### <a name="remarks"></a>Note

Questa funzione Cerca nel testo nel buffer il testo specificato da *lpszFind*, a partire dalla selezione corrente, nella direzione specificata da *bNext*e con la distinzione tra maiuscole e minuscole specificata da *bCase*. Se il testo viene trovato, imposta la selezione sul testo trovato e restituisce un valore diverso da zero. Se il testo non viene trovato, la funzione restituisce 0.

In genere non è necessario chiamare la `FindText` funzione, a meno che non si esegua l'override `OnFindNext`di, che chiama `FindText`.

##  <a name="getbufferlength"></a>CEditView:: GetBufferLength

Chiamare questa funzione membro per ottenere il numero di caratteri attualmente presenti nel buffer del controllo di modifica, escluso il carattere di terminazione null.

```
UINT GetBufferLength() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza della stringa nel buffer.

##  <a name="geteditctrl"></a>CEditView:: GetEditCtrl

Chiamare `GetEditCtrl` per ottenere un riferimento al controllo di modifica utilizzato dalla visualizzazione di modifica.

```
CEdit& GetEditCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento a un oggetto `CEdit`.

### <a name="remarks"></a>Note

Questo controllo è di tipo [CEdit](../../mfc/reference/cedit-class.md), quindi è possibile modificare direttamente il controllo di modifica di Windows `CEdit` usando le funzioni membro.

> [!CAUTION]
>  L'utilizzo `CEdit` dell'oggetto può modificare lo stato del controllo di modifica di Windows sottostante. Ad esempio, è consigliabile non modificare le impostazioni di tabulazione utilizzando la funzione [CEdit:: SetTabStops](../../mfc/reference/cedit-class.md#settabstops) perché `CEditView` memorizza nella cache queste impostazioni per l'utilizzo sia nel controllo di modifica che nella stampa. Usare invece [CEditView:: SetTabStops](#settabstops).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#66](../../mfc/codesnippet/cpp/ceditview-class_2.cpp)]

##  <a name="getprinterfont"></a>CEditView:: GetPrinterFont

Chiamare `GetPrinterFont` per ottenere un puntatore a un oggetto [CFont](../../mfc/reference/cfont-class.md) che descrive il tipo di carattere della stampante corrente.

```
CFont* GetPrinterFont() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un `CFont` oggetto che specifica il tipo di carattere della stampante corrente. NULL se il tipo di carattere della stampante non è stato impostato. Il puntatore può essere temporaneo e non deve essere memorizzato per usi successivi.

### <a name="remarks"></a>Note

Se il tipo di carattere della stampante non è stato impostato, il comportamento di `CEditView` stampa predefinito della classe consiste nel stampare utilizzando lo stesso tipo di carattere utilizzato per la visualizzazione.

Utilizzare questa funzione per determinare il tipo di carattere della stampante corrente. Se il tipo di carattere della stampante non è quello desiderato, utilizzare [CEditView:: SetPrinterFont](#setprinterfont) per modificarlo.

##  <a name="getselectedtext"></a>  CEditView::GetSelectedText

Chiamare `GetSelectedText` per copiare il testo selezionato in un `CString` oggetto, fino alla fine della selezione o il carattere che precede il primo carattere di ritorno a capo nella selezione.

```
void GetSelectedText(CString& strResult) const;
```

### <a name="parameters"></a>Parametri

*strResult*<br/>
Riferimento all' `CString` oggetto che deve ricevere il testo selezionato.

##  <a name="lockbuffer"></a>CEditView:: LockBuffer

Chiamare questa funzione membro per ottenere un puntatore al buffer. Il buffer non deve essere modificato.

```
LPCTSTR LockBuffer() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al buffer del controllo di modifica.

##  <a name="onfindnext"></a>CEditView:: OnFindNext

Cerca nel testo nel buffer il testo specificato da *lpszFind*, nella direzione specificata da *bNext*, con la distinzione tra maiuscole e minuscole specificata da *bCase*.

```
virtual void OnFindNext(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Testo da trovare.

*bNext*<br/>
Specifica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

*bCase*<br/>
Specifica se la ricerca fa distinzione tra maiuscole e minuscole. Se TRUE, la ricerca fa distinzione tra maiuscole e minuscole. Se FALSE, la ricerca non fa distinzione tra maiuscole e minuscole.

### <a name="remarks"></a>Note

La ricerca inizia all'inizio della selezione corrente e viene eseguita tramite una chiamata a [FindText](#findtext). Nell'implementazione `OnFindNext` predefinita chiama [OnTextNotFound](#ontextnotfound) se il testo non viene trovato.

Eseguire `OnFindNext` l'override di per modificare `CEditView`il modo in cui un oggetto derivato da Cerca il testo. `CEditView`chiama `OnFindNext` quando l'utente sceglie il pulsante Trova successivo nella finestra di dialogo di ricerca standard.

##  <a name="onreplaceall"></a>CEditView:: OnReplaceAll

`CEditView`chiama `OnReplaceAll` quando l'utente seleziona il pulsante Sostituisci tutto nella finestra di dialogo Sostituisci standard.

```
virtual void OnReplaceAll(
    LPCTSTR lpszFind,
    LPCTSTR lpszReplace,
    BOOL bCase);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Testo da trovare.

*lpszReplace*<br/>
Testo in cui sostituire il testo di ricerca.

*bCase*<br/>
Specifica se la ricerca fa distinzione tra maiuscole e minuscole Se TRUE, la ricerca fa distinzione tra maiuscole e minuscole. Se FALSE, la ricerca non fa distinzione tra maiuscole e minuscole.

### <a name="remarks"></a>Note

`OnReplaceAll`Cerca nel testo nel buffer il testo specificato da *lpszFind*, con la distinzione tra maiuscole e minuscole specificata da *bCase*. La ricerca viene avviata all'inizio della selezione corrente. Ogni volta che viene trovato il testo di ricerca, questa funzione sostituisce l'occorrenza del testo con il testo specificato da *lpszReplace*. La ricerca viene eseguita tramite una chiamata a [FindText](#findtext). Nell'implementazione predefinita, [OnTextNotFound](#ontextnotfound) viene chiamato se il testo non viene trovato.

Se la selezione corrente non corrisponde a *lpszFind*, la selezione viene aggiornata alla prima occorrenza del testo specificato da *lpszFind* e non viene eseguita alcuna sostituzione. Ciò consente all'utente di confermare che questa è l'operazione che si desidera eseguire quando la selezione non corrisponde al testo da sostituire.

Eseguire `OnReplaceAll` l'override di per modificare `CEditView`il modo in cui un oggetto derivato da sostituisce il testo.

##  <a name="onreplacesel"></a>CEditView:: OnReplaceSel

`CEditView`chiama `OnReplaceSel` quando l'utente seleziona il pulsante Sostituisci nella finestra di dialogo Sostituisci standard.

```
virtual void OnReplaceSel(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase,
    LPCTSTR lpszReplace);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Testo da trovare.

*bNext*<br/>
Specifica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

*bCase*<br/>
Specifica se la ricerca fa distinzione tra maiuscole e minuscole. Se TRUE, la ricerca fa distinzione tra maiuscole e minuscole. Se FALSE, la ricerca non fa distinzione tra maiuscole e minuscole.

*lpszReplace*<br/>
Testo per sostituire il testo trovato.

### <a name="remarks"></a>Note

Dopo la sostituzione della selezione, questa funzione Cerca nel testo nel buffer l'occorrenza successiva del testo specificato da *lpszFind*, nella direzione specificata da *bNext*, con la distinzione tra maiuscole e minuscole specificata da *bCase*. La ricerca viene eseguita tramite una chiamata a [FindText](#findtext). Se il testo non viene trovato, viene chiamato [OnTextNotFound](#ontextnotfound) .

Eseguire `OnReplaceSel` l'override di per modificare `CEditView`il modo in cui un oggetto derivato da sostituisce il testo selezionato.

##  <a name="ontextnotfound"></a>CEditView:: OnTextNotFound

Eseguire l'override di questa funzione per modificare l'implementazione predefinita, che chiama `MessageBeep`la funzione di Windows.

```
virtual void OnTextNotFound(LPCTSTR lpszFind);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Testo da trovare.

##  <a name="printinsiderect"></a>CEditView::P rintInsideRect

Chiamare `PrintInsideRect` per stampare il testo nel rettangolo specificato da *rectLayout*.

```
UINT PrintInsideRect(
    CDC *pDC,
    RECT& rectLayout,
    UINT nIndexStart,
    UINT nIndexStop);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto del dispositivo stampante.

*rectLayout*<br/>
Riferimento a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o a una [struttura Rect](/windows/win32/api/windef/ns-windef-rect) che specifica il rettangolo in cui deve essere eseguito il rendering del testo.

*nIndexStart*<br/>
Indice all'interno del buffer del primo carattere di cui eseguire il rendering.

*nIndexStop*<br/>
Indice all'interno del buffer del carattere dopo l'ultimo carattere di cui eseguire il rendering.

### <a name="return-value"></a>Valore restituito

Indice del carattere successivo da stampare, ovvero il carattere che segue l'ultimo carattere sottoposto a rendering.

### <a name="remarks"></a>Note

Se il `CEditView` controllo non ha lo stile ES_AUTOHSCROLL, il testo viene incapsulato all'interno del rettangolo di rendering. Se il controllo ha lo stile ES_AUTOHSCROLL, il testo viene ritagliato sul bordo destro del rettangolo.

L' `rect.bottom` elemento dell'oggetto *rectLayout* viene modificato in modo che le dimensioni del rettangolo definiscano la parte del rettangolo originale occupata dal testo.

##  <a name="serializeraw"></a>CEditView:: SerializeRaw

Chiamare `SerializeRaw` per fare in `CArchive` modo che un oggetto legga o `CEditView` scriva il testo dell'oggetto in un file di testo.

```
void SerializeRaw(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
Riferimento all' `CArchive` oggetto che archivia il testo serializzato.

### <a name="remarks"></a>Note

`SerializeRaw`si differenzia dall' `CEditView`implementazione interna di `Serialize` in quanto legge e scrive solo il testo, senza i dati di descrizione oggetto precedenti.

##  <a name="setprinterfont"></a>CEditView:: SetPrinterFont

Chiamare `SetPrinterFont` per impostare il tipo di carattere della stampante sul tipo di carattere specificato da *pFont*.

```
void SetPrinterFont(CFont* pFont);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
Puntatore a un oggetto di tipo `CFont`. Se è NULL, il tipo di carattere utilizzato per la stampa è basato sul tipo di carattere visualizzato.

### <a name="remarks"></a>Note

Se si vuole che la visualizzazione usi sempre un particolare tipo di carattere per la stampa, includere `SetPrinterFont` una chiamata a nella `OnPreparePrinting` funzione della classe. Questa funzione virtuale viene chiamata prima che venga eseguita la stampa, quindi la modifica del tipo di carattere viene eseguita prima della stampa del contenuto della visualizzazione.

##  <a name="settabstops"></a>CEditView:: SetTabStops

Chiamare questa funzione per impostare le interruzioni di tabulazioni utilizzate per la visualizzazione e la stampa.

```
void SetTabStops(int nTabStops);
```

### <a name="parameters"></a>Parametri

*nTabStops*<br/>
Larghezza di ogni tabulazione, in unità di dialogo.

### <a name="remarks"></a>Note

È supportata una sola larghezza di tabulazione. `CEdit` gli oggetti supportano più larghezze di tabulazione. Le larghezze si trovano in unità di dialogo, che equivalgono a un quarto della larghezza media dei caratteri (in base ai soli caratteri alfabetici maiuscoli e minuscoli) del tipo di carattere utilizzato al momento della stampa o della visualizzazione. Non usare `CEdit::SetTabStops` perché `CEditView` deve memorizzare nella cache il valore di interruzione di tabulazione.

Questa funzione modifica solo le schede dell'oggetto per il quale viene chiamato. Per modificare le tabulazioni per ogni `CEditView` oggetto nell'applicazione, chiamare la funzione di `SetTabStops` ogni oggetto.

### <a name="example"></a>Esempio

Questo frammento di codice imposta le interruzioni di tabulazione nel controllo su ogni quarto carattere misurando con attenzione il tipo di carattere utilizzato dal controllo.

[!code-cpp[NVC_MFCDocView#67](../../mfc/codesnippet/cpp/ceditview-class_3.cpp)]

##  <a name="unlockbuffer"></a>CEditView:: UnlockBuffer

Chiamare questa funzione membro per sbloccare il buffer.

```
void UnlockBuffer() const;
```

### <a name="remarks"></a>Note

Chiamare `UnlockBuffer` al termine dell'utilizzo del puntatore restituito da [LockBuffer](#lockbuffer).

## <a name="see-also"></a>Vedere anche

[SUPERPAD di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CEdit](../../mfc/reference/cedit-class.md)<br/>
[Classe CDocument](../../mfc/reference/cdocument-class.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Classe CRichEditView](../../mfc/reference/cricheditview-class.md)
